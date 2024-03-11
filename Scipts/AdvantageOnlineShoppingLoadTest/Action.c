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
	
	Registration();
	
	lr_think_time(5);

	ChooseCategory();
	
	lr_think_time(5);

	ChooseProduct();
	
	lr_think_time(5);
	
	AddToCart();
	
	lr_think_time(5);
	
	ChechCart();
	
	lr_think_time(5);
	
	CheckOut();
	
	lr_think_time(5);
	
	SafePayment();

	
	lr_end_transaction("UC1_Buy", LR_AUTO);


	return 0;
}