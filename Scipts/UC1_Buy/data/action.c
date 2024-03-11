Action()
{

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
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/Bell.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Check.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5505", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5600", ENDITEM, 
		"Url=/css/images/category_banner_5.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5900", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5201", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5206", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>adr</address><allowOffersPromotion>true</allowOffersPromotion><cityName>city</cityName><countryId>Albania,al</countryId><email>aa@aa.com</email><firstName"
		">Name</firstName><lastName>Lname</lastName><loginName>aosusr</loginName><password>Apswd1</password><phoneNumber>899999</phoneNumber><stateProvince>state</stateProvince><zipcode>690000</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>aa@aa.com</email><loginPassword>Apswd1</loginPassword><loginUser>aosusr</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("643189656", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/643189656", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/5/products", 
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

	web_url("27", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/27", 
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
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/5/products", 
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

	web_submit_data("545195", 
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/643189656/product/27/color/545195?quantity=1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=877C5453743E37CC6F7D2A5D5BF5817C", ENDITEM, 
		LAST);

	web_url("643189656_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/643189656", 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>643189656</accountId><base64Token>Basic YW9zdXNyOkFwc3dkMQ==</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>643189656</accountId><base64Token>Basic YW9zdXNyOkFwc3dkMQ==</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("643189656_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/643189656", 
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
		"Body={\"seaddress\":{\"addressLine1\":\"adr\",\"addressLine2\":\"\",\"city\":\"city\",\"country\":\"us\",\"postalCode\":690000,\"state\":\"state\"},\"secustomerName\":\"Name Lname\",\"secustomerPhone\":899999,\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"877C5453743E37CC6F7D2A5D5BF5817C\"}", 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>643189656</accountId><base64Token>Basic YW9zdXNyOkFwc3dkMQ==</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
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

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAddSafePayMethodRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("AddSafePayMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AddSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><safePayUsername>SPusr</safePayUsername><accountId>643189656</accountId><safePayPassword>SPpass1</safePayPassword><base64Token>Basic YW9zdXNyOkFwc3dkMQ==</base64Token></AddSafePayMethodRequest"
		"></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("643189656_4", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/643189656", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":899999,\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"SPpass1\",\"Transaction_SafePay_UserName\":\""
		"SPusr\",\"Transaction_TransactionDate\":\"5032024\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"adr\",\"Shipping_Address_City\":\"city\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"Name Lname\",\"Shipping_Address_CustomerPhone\":899999,\"Shipping_Address_PostalCode\":690000,\"Shipping_Address_State\":\"state\",\"Shipping_Cost\":15.99,\"Shipping_NumberOfProducts\":1,\"Shipping_TrackingNumber\":0},\"purchasedProducts\":["
		"{\"hexColor\":\"545195\",\"productId\":27,\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);

	web_custom_request("643189656_5", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/643189656", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}