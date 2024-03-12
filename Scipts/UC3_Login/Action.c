Action()
{
	lr_start_transaction("UC3_Login");

	HomePage();
	
	
	LogIn();
	
	lr_think_time(5);
	
	LogOut();
	
	lr_think_time(5);
	
	lr_end_transaction("UC3_Login", LR_AUTO);

	
	return 0;
}
