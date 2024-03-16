Action()
{
	
	char name[10]={0};
	int Categoriesrnd,Idrnd,i,j,quantity;
	quantity = rand()%5+1;
	lr_save_int(quantity,"quantity");
	
	for(i = 0; i < 9; i++)
	{
		name[i] = rand()%26+'a';
	}
	
	lr_save_string(name,"Loginrnd");
	
	
	lr_start_transaction("UC1_Buy");

	
	HomePage();
	
	LogIn();
	
	lr_think_time(5);

	ChooseCategory();
	
	lr_think_time(5);

	ChooseProduct();
	
	lr_think_time(5);
	
	lr_start_transaction("AddToCart");
	
	web_reg_find("Text=\"userId\":{UserID},",LAST);
	
	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_submit_data("{UserId}",
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}/product/{ProductIdrnd}/color/{ColorId}?quantity=1",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t52.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sessionId", "Value={sessionId}", ENDITEM,
		LAST); 
	
	lr_end_transaction("AddToCart", LR_AUTO);
	
	lr_think_time(5);
	
	ChechCart();
	
	lr_think_time(5);
	
	CheckOut();
	
	lr_think_time(5);
	
	lr_start_transaction("SafePayment");
	
	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAddSafePayMethodRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_find("text=<ns2:reason>SafePay data updated successfully</ns2:reason>",LAST);
	
	web_custom_request("AddSafePayMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AddSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><safePayUsername>{Loginrnd}</safePayUsername><accountId>{UserID}</accountId><safePayPassword>SPpass123</safePayPassword><base64Token>Basic {t_authorization}</base64Token></AddSafePayMethodRequest"
		"></soap:Body></soap:Envelope>", 
		LAST);
	
	web_reg_find("Text=\"order completed successfully\"",
		LAST);

	web_custom_request("{UserID}_4", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/{UserID}",
		"Method=POST",
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"{UserID}\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":{Num},\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"SPpass123\",\"Transaction_SafePay_UserName\":\"{Loginrnd}\",\"Transaction_TransactionDate\":\"{Date}\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"{Addres}\",\"Shipping_Address_City\":\"{City}\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"{Name} {LastName}\",\"Shipping_Address_CustomerPhone\":{Num},\"Shipping_Address_PostalCode\":{Zip},\"Shipping_Address_State\":\"{State}\",\"Shipping_Cost\":{Cost},\"Shipping_NumberOfProducts\":1,\"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"{ColorId}\",\"productId\":{ProductIdrnd},\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);

	web_custom_request("{UserID}_5", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("SafePayment", LR_AUTO);


	
	lr_end_transaction("UC1_Buy", LR_AUTO);


	return 0;
}