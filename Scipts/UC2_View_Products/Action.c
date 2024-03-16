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
	
	lr_think_time(5);

	ChooseCategory();
	
	lr_think_time(5);

	ChooseProduct();
	
	lr_think_time(5);
	
	LogOut();
	

	lr_end_transaction("UC2_View_Product", LR_AUTO);
	
	
	return 0;
}