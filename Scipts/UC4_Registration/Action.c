Action()
{
	
	char name[10];
	int Categoriesrnd,Idrnd,i,j,quantity;
	quantity = rand()%5+1;
	lr_save_int(quantity,"quantity");
	
	for(i = 0; i < 9; i++)
	{
		name[i] = rand()%26+'a';
	};
	
	lr_save_string(name,"Loginrnd");
	
	lr_start_transaction("UC4_Registration");
	
	HomePage();
	
	lr_think_time(5);
	
	Registration();
	
	lr_think_time(5);
	
	LogOut();
	
	lr_end_transaction("UC4_Registration", LR_AUTO);

	
	
	return 0;
}
