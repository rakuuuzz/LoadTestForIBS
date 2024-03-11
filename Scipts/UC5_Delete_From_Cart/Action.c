Action()
{
	HomePage();
	
	LogIn();
	
//	ChooseCategory();
//	
//	ChooseProduct();
//	
//	AddToCart();
//	
//	ChechCart();
	
	lr_start_transaction("CheckCart");

	web_reg_find("Text=\"userId\":{UserID},",LAST);
	
	
	web_reg_save_param_ex(
					"ParamName=ProductId",
					"LB=\"productId\":",
					"RB=,",
					"Ordinal=ALL",
					SEARCH_FILTERS,
					LAST);
	
	
	web_url("{UserID}_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_save_string(lr_paramarr_random("ProductId"),"ProductIdrnd");
	

	web_reg_save_param_regexp(
					"ParamName=ColorId",
					"RegExp=\"productId\":{ProductIdrnd},[^\\}]*\"code\":\"([^\"]+)\"",
					"Group=1",
					SEARCH_FILTERS,
					LAST);
		
	web_url("{UserID}_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}", //Повторное обращение к корзине используется для нахождения ColorId случайного лота, 
		"Resource=0", 															   //тк строка 38 может сработать только после запроса и невозможно найти ColorId.
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
	
	
	
	lr_start_transaction("DeleteFromCart");


	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_custom_request("{UserID}_2", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{UserID}/product/{ProductIdrnd}/color/{ColorId}", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("DeleteFromCart", LR_AUTO);


	return 0;
}