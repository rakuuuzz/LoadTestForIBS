Registration()
{
	char name[10] = {0};
	int i;
	
	for(i = 0; i < 9; i++)
	{
		name[i] = rand()%26+'a';
	}
	
	lr_save_string(name,"Loginrnd");
	
	lr_start_transaction("Registration");

	web_url("register-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountCreateRequest");

	lr_think_time(9);

	web_custom_request("AccountCreateRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>{Addres}</address><allowOffersPromotion>true</allowOffersPromotion><cityName>{City}</cityName><countryId>{Country}</countryId><email>{Email}</email><firstName"
		">{Name}</firstName><lastName>{LastName}</lastName><loginName>{Loginrnd}</loginName><password>{Pass}</password><phoneNumber>{Num}</phoneNumber><stateProvince>{State}</stateProvince><zipcode>{Zip}</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");
	
	web_reg_find("Text=<ns2:reason>Login Successful</ns2:reason>",LAST);

	web_reg_save_param_ex(
						"ParamName=t_authorization",
						"LB=<ns2:t_authorization>",
						"RB=</ns2:t_authorization>",
						SEARCH_FILTERS,
						LAST);

	web_reg_save_param_ex(
						"ParamName=UserID",
						"LB=<ns2:userId>",
						"RB=</ns2:userId>",
						SEARCH_FILTERS,
						LAST);
	

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{Email}</email><loginPassword>{Pass}</loginPassword><loginUser>{Loginrnd}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");
	
	web_add_auto_header("Authorization", " Basic {t_authorization}");
	
	web_reg_save_param_ex(
		"ParamName=sessionId",
		"LB=\"sessionId\":\"",
		"RB=\"",
		SEARCH_FILTERS,
		LAST);


	web_url("UserID", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);
		
	lr_end_transaction("Registration", LR_AUTO);
	
	return 0;
}

HomePage()
{
	
	lr_start_transaction("HomePage");


	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("aosusr", 
		lr_unmask("65e6faaffa5c440f3016"), 
		"www.advantageonlineshopping.com:443");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("HomePage", LR_AUTO);
	
	return 0;
}

ChooseCategory()
{
	int Categoriesrnd;
	Categoriesrnd = rand()%5+1;
	lr_save_int(Categoriesrnd,"Categoriesrnd");
		
	lr_start_transaction("ChooseCategory");
	
	//"categoryId":5
	web_reg_find("Text=\"categoryId\":{Categoriesrnd},",LAST);

	
	web_reg_save_param_ex(
					"ParamName=ProductId",
					"LB=\"productId\":",
					"RB=,",
					"Ordinal=ALL",
					SEARCH_FILTERS,
					LAST);
	

	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{Categoriesrnd}/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("ChooseCategory", LR_AUTO);
	
	return 0;
}

ChooseProduct()
{
	lr_save_string(lr_paramarr_random("ProductId"),"ProductIdrnd");
	
	lr_start_transaction("ChooseProduct");

	web_reg_save_param_ex(
					"ParamName=ColorId",
					"LB=\"colors\":[{\"code\":\"",
					"RB=\",",
					SEARCH_FILTERS,
					LAST);

	web_url("{ProductIdrnd}", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/{ProductIdrnd}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{Categoriesrnd}/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");
	
	lr_end_transaction("ChooseProduct", LR_AUTO);
	
	return 0;
}

AddToCart()
{
	lr_start_transaction("AddToCart");
	
	web_reg_find("Text=\"userId\":{UserID},",LAST);

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
	
	return 0;
}

ChechCart()
{
	lr_start_transaction("CheckCart");

	web_reg_find("Text=\"userId\":{UserID},",LAST);

	web_url("{UserID}_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("CheckCart", LR_AUTO);
	
	return 0;
}

CheckOut()
{
	lr_start_transaction("ChechOut");


	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountByIdRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic {t_authoriizatiion}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic {t_authoriizatiion}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");
	
	web_reg_save_param_ex(
					"ParamName=Cost",
					"LB=\"price\":",
					"RB=,",
					SEARCH_FILTERS,
					LAST);

	web_url("{UserID}_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_custom_request("shippingcost",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/shippingcost/",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t58.inf",
		"Mode=HTML",
		"EncType=application/json;charset=utf-8",
		"Body={\"seaddress\":{\"addressLine1\":\"{Addres}\",\"addressLine2\":\"\",\"city\":\"{City}\",\"country\":\"us\",\"postalCode\":{Zip},\"state\":\"{State}\"},\"secustomerName\":\"{Name} {LastName}\",\"secustomerPhone\":{Num},\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{sessionId}\"}",
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{UserID}</accountId><base64Token>Basic {t_authoriizatiion}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_end_transaction("ChechOut", LR_AUTO);
	
	return 0;
}

SafePayment()
{
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

	
	return 0;
}

LogIn()
{
	lr_start_transaction("LogIn");
	
	web_reg_find("Text=<ns2:reason>Login Successful</ns2:reason>",LAST);
	
	web_reg_save_param_ex(
				"ParamName=t_authorization",
				"LB=<ns2:t_authorization>",
				"RB=</ns2:t_authorization>",
				SEARCH_FILTERS,
				LAST);
	
	web_reg_save_param_ex(
				"ParamName=UserID",
				"LB=<ns2:userId>",
				"RB=</ns2:userId>",
				SEARCH_FILTERS,
				LAST);


	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(11);

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>{Email}</email><loginPassword>{Pass}</loginPassword><loginUser>{Login}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");
	
	web_add_auto_header("Authorization", " Basic {t_authorization}");

	web_url("{UserID}", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("LogIn", LR_AUTO);	
	
	return 0;
}

LogOut()
{
	lr_start_transaction("LogOut");


	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);

	web_custom_request("AccountLogoutRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{UserID}</loginUser><base64Token>Basic {t_authorization}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);
	
	lr_end_transaction("LogOut", LR_AUTO);
	
	return 0;
}