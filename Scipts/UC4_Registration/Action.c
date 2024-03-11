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
	
	HomePage();
	
	Registration();
	
	LogOut();
	
	
	return 0;
}
