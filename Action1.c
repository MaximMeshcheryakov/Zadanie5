Action1()
{
	
	web_reg_save_param_ex(
    	"ParamName=NumberOfPass", 
    	"LB/IC=<b>&nbsp\;\&nbsp\;", 	
    	"RB/IC= ",								
    	"Ordinal=all",
	LAST);
	
	
	web_reg_save_param_ex(
    	"ParamName=Flight", 
    	"LB/IC= : Flight ", 	
    	"RB/IC= leaves ",								
    	"Ordinal=all",
	LAST);
	
	web_reg_save_param_ex(
		"ParamName=TicketInfo",
    	"LB= :  ",
    	"RB=\.<br>",
    	"Ordinal=all",
    	"NotFound=Warning",
		LAST);
	
	web_url("Itinerary Button", 
		"URL={Host}/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={Host}/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	ticketinfo[1]=lr_eval_string("{TicketInfo_1}");
	ticketinfo[2]=lr_eval_string("{TicketInfo_2}");
	ticketinfo[3]=lr_eval_string("{TicketInfo_3}");
	ticketinfo[4]=lr_eval_string("{TicketInfo_4}");
	ticketinfo[5]=lr_eval_string("{TicketInfo_5}");
	ticketinfo[6]=lr_eval_string("{TicketInfo_6}");
	ticketinfo[7]=lr_eval_string("{TicketInfo_7}");
	ticketinfo[8]=lr_eval_string("{TicketInfo_8}");
	ticketinfo[9]=lr_eval_string("{TicketInfo_9}");
	ticketinfo[10]=lr_eval_string("{TicketInfo_10}");
	        
	
	numpass[1]=atoi(lr_eval_string("{NumberOfPass_1}"));
	numpass[2]=atoi(lr_eval_string("{NumberOfPass_2}"));
	numpass[3]=atoi(lr_eval_string("{NumberOfPass_3}"));
	numpass[4]=atoi(lr_eval_string("{NumberOfPass_4}"));
	numpass[5]=atoi(lr_eval_string("{NumberOfPass_5}"));
	numpass[6]=atoi(lr_eval_string("{NumberOfPass_6}"));
	numpass[7]=atoi(lr_eval_string("{NumberOfPass_7}"));
	numpass[8]=atoi(lr_eval_string("{NumberOfPass_8}"));
	numpass[9]=atoi(lr_eval_string("{NumberOfPass_9}"));
	numpass[10]=atoi(lr_eval_string("{NumberOfPass_10}"));

	
    for(p=1;p<=10;p++){
		for(m=0;m<11-p;m++){
			if(numpass[m+1] < numpass[m]){
				t = numpass[m];
				numpass[m]=numpass[m+1];
				numpass[m+1]=t;
				
				z= ticketinfo[m];
				ticketinfo[m]=ticketinfo[m+1];
				ticketinfo[m+1]=z;
               }
        }
	}
	
	lr_output_message("No. of Passengers 1 билета = %d",numpass[1]);
	lr_output_message("Информация о билете: = %s", ticketinfo[1]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 2 билета = %d",numpass[2]);
	lr_output_message("Информация о билете: = %s", ticketinfo[2]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 3 билета = %d",numpass[3]);
	lr_output_message("Информация о билете: = %s", ticketinfo[3]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 4 билета = %d",numpass[4]);
	lr_output_message("Информация о билете: = %s", ticketinfo[4]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 5 билета = %d",numpass[5]);
	lr_output_message("Информация о билете: = %s", ticketinfo[5]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 6 билета = %d",numpass[6]);
	lr_output_message("Информация о билете: = %s", ticketinfo[6]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 7 билета = %d",numpass[7]);
	lr_output_message("Информация о билете: = %s", ticketinfo[7]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 8 билета = %d",numpass[8]);
	lr_output_message("Информация о билете: = %s", ticketinfo[8]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 9 билета = %d",numpass[9]);
	lr_output_message("Информация о билете: = %s", ticketinfo[9]);
	lr_output_message(" ");
	
	lr_output_message("No. of Passengers 10 билета = %d",numpass[10]);
	lr_output_message("Информация о билете: = %s", ticketinfo[10]);
		
	return 0;
}
