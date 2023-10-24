///Write a program that asks the user for his date of birth and displays the sun sign accordingly (without using any array, functions, etc. only using very basics of cpp and binary operators).

#include<iostream>

using namespace std;

int main(){
	int dob=0, x,i;
	for(i=0;i<3;i++){
		switch(i){
			case 0:
				cout<<"Enter the Year = ";
				cin>>x;
				dob=dob|x;
				dob=dob<<5;
				break;
			case 1:
				cout<<"Enter the Month = ";
				cin>>x;
				dob=dob|x;
				dob=dob<<6;
				break;
			default:
				cout<<"Enter the Date = ";
				cin>>x;
				dob=dob|x;
		}
	}
	
	if(dob>2112&&dob<2147482400){
		x=(dob>>6)&15;
		i=dob&31;
		if(x==1){
			if(i<32&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==2){
			if(((dob>>11)%4==0)&&(i<30&&i>0)){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else if(i<29&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==3){
			if(i<32&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==4){
			if(i<31&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==5){
			if(i<32&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==6){
			if(i<31&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==7){
			if(i<32&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==8){
			if(i<32&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==9){
			if(i<31&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==10){
			if((dob>>11)==1582){
				if(i>0&&i<5){
					cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
				}
				else if(i<32&&i>14){
					cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
				}
				else{
					cout<<"Invalid";
					return 0;
				}
			}
			else if(i<32&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==11){
			if(i<31&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else if(x==12){
			if(i<32&&i>0){
				cout<<"Your DOB is: "<<(dob&31)<<"\\"<<((dob>>6)&15)<<"\\"<<(dob>>11);
			}
			else{
				cout<<"Invalid";
				return 0;
			}
		}
		else{
			cout<<"Invalid";
			return 0;
		}
		
		cout<<"\nSun Sign Astrology\n";
		x=(dob&991);
		if(((x>>6)<=12)&&((x>>6)>=1)){
			if((x>=84)&&(x<=146)){
				cout<<"Sign name: Aquarius\n";
				cout<<"Individuals name: Aquarian\n";
				cout<<"English name: The Water-Bearer\n";
				cout<<"Element: Air\n";
				cout<<"Quality(modality): Fixed\n";
				cout<<"Polarity: Positive\n";
				cout<<"Associated celestial body: Uranus (Saturn)\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Great Cold (January 20) - the day before Vernal Showers\n";
			}
			else if((x>=147)&&(x<=212)){
				cout<<"Sign name: Pisces\n";
				cout<<"Individuals name: Piscean\n";
				cout<<"English name: The Fish\n";
				cout<<"Element: Water\n";
				cout<<"Quality(modality): Mutable\n";
				cout<<"Polarity: Negative\n";
				cout<<"Associated celestial body: Neptune (Jupiter)\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Vernal Showers (February 19) - the day before Vernal Equinox\n";
			}
			else if((x>=213)&&(x<=275)){
				cout<<"Sign name: Aries\n";
				cout<<"Individuals name: Arian/Arien\n";
				cout<<"English name: The Ram\n";
				cout<<"Element: Fire\n";
				cout<<"Quality(modality): Cardinal\n";
				cout<<"Polarity: Positive\n";
				cout<<"Associated celestial body: Mars\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Vernal Equinox (March 21) - the day before Corn Rain\n";
			}
			else if((x>=276)&&(x<=340)){
				cout<<"Sign name: Taurus\n";
				cout<<"Individuals name: Taurean\n";
				cout<<"English name: The Bull\n";
				cout<<"Element: Earth\n";
				cout<<"Quality(modality): Fixed\n";
				cout<<"Polarity: Negative\n";
				cout<<"Associated celestial body: Venus/Earth\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Corn Rain (April 20) - the day before Corn Forms\n";
			}
			else if((x>=341)&&(x<=404)){
				cout<<"Sign name: Gemini\n";
				cout<<"Individuals name: Geminian\n";
				cout<<"English name: The Twins\n";
				cout<<"Element: Air\n";
				cout<<"Quality(modality): Mutable\n";
				cout<<"Polarity: Positive\n";
				cout<<"Associated celestial body: Mercury\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Corn Forms (May 21) - the day before Summer Solstice\n";
			}
			else if((x>=405)&&(x<=471)){
				cout<<"Sign name: Cancer\n";
				cout<<"Individuals name: Cancerian\n";
				cout<<"English name: The Crab\n";
				cout<<"Element: Water\n";
				cout<<"Quality(modality): Cardinal\n";
				cout<<"Polarity: Negative\n";
				cout<<"Associated celestial body: Moon\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Summer Solstice (June 21) - the day before Great Heat\n";
			}
			else if((x>=472)&&(x<=534)){
				cout<<"Sign name: Leo\n";
				cout<<"Individuals name: Leo\n";
				cout<<"English name: The Lion\n";
				cout<<"Element: Fire\n";
				cout<<"Quality(modality): Fixed\n";
				cout<<"Polarity: Positive\n";
				cout<<"Associated celestial body: Sun\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Great Heat (July 24) = the day before End of Heat\n";
			}
			else if((x>=535)&&(x<=598)){
				cout<<"Sign name: Virgo\n";
				cout<<"Individuals name: Virgin\n";
				cout<<"English name: The Maiden\n";
				cout<<"Element: Earth\n";
				cout<<"Quality(modality): Mutable\n";
				cout<<"Polarity: Negative\n";
				cout<<"Associated celestial body: Mercury\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: End of Heat (August 23) - the day before Autumnal Equinox\n";
			}
			else if((x>=599)&&(x<=662)){
				cout<<"Sign name: Libra\n";
				cout<<"Individuals name: Libran\n";
				cout<<"English name: The Scales\n";
				cout<<"Element: Air\n";
				cout<<"Quality(modality): Cardinal\n";
				cout<<"Polarity: Positive\n";
				cout<<"Associated celestial body: Venus\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Autumnal Equinox (September 23) - the day before First Frost\n";
			}
			else if((x>=663)&&(x<=726)){
				cout<<"Sign name: Scorpio\n";
				cout<<"Individuals name: Scorpio\n";
				cout<<"English name: The Scorpion\n";
				cout<<"Element: Water\n";
				cout<<"Quality(modality): Fixed\n";
				cout<<"Polarity: Negative\n";
				cout<<"Associated celestial body: Pluto (Mars)\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: First Frost (October 23) - the day before Light Snow\n";
			}
			else if((x>=727)&&(x<=789)){
				cout<<"Sign name: Sagittarius\n";
				cout<<"Individuals name: Sagittarian\n";
				cout<<"English name: The Archer\n";
				cout<<"Element: Fire\n";
				cout<<"Quality(modality): Mutable\n";
				cout<<"Polarity: Positive\n";
				cout<<"Associated celestial body: Jupiter\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Light Snow (November 23) - the day before Winter Solstice\n";
			}
			else{
				cout<<"Sign name: Capricorn\n";
				cout<<"Individuals name: Capricorn\n";
				cout<<"English name: The Mountain Sea-Goat\n";
				cout<<"Element: Earth\n";
				cout<<"Quality(modality): Cardinal\n";
				cout<<"Polarity: Negative\n";
				cout<<"Associated celestial body: Saturn\n";
				cout<<"Period of sun with approx. dates 1/2 days variation: Winter Solstice (December 22) - the day before Great Cold\n";
			}
		}
		else{
			cout<<"Invalid";
			return 0;
		}
	}			
	else{
		cout<<"Invalid Entry";
		return 0;
	}
	return 0;
}
