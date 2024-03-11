Action()
{
	char name[10]={0};
	int i;
	
	for(i = 0; i < 9; i++)
	{
		name[i] = rand()%26+'a';
	}
	
	lr_save_string(name,"Loginrnd");
	
	lr_start_transaction("UC2_View_Product");

	
	HomePage();
	
	LogIn();

	ChooseCategory();

	ChooseProduct();
	
	lr_start_transaction("LogOut");


	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);
	
	web_reg_find("Text=<ns2:reason>Logout Successful</ns2:reason>",LAST);
	web_reg_find("Text={UserID}",LAST);

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
	

	lr_end_transaction("UC2_View_Product", LR_AUTO);
	
	
	return 0;
}