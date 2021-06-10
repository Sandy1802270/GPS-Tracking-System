double Degtodecimal(double x){
int degree = x/100;
double minutes = x - degree * 100 ;
double y = degree + minutes/60 ;
return y;
}
double Calc_distance(double lat1, double long1,double lat2,double long2) {
    double latitude1=Degtodecimal( lat1);
    double longitude1=Degtodecimal( long1);
    double latitude2=Degtodecimal( lat2);
    double longitude2=Degtodecimal( long2);
#define R 6371
#define pi 3.141592653589793238462643
    double a1=0;
    a1 = sin(((latitude2-latitude1)*pi / 180)/2) * sin(((latitude2-latitude1)*pi / 180)/2) +
          sin(((longitude2-longitude1)*pi / 180)/2) * sin(((longitude2-longitude1)*pi / 180)/2) * cos((latitude1)*pi / 180) * cos((latitude2)*pi / 180); 
    a1 = 2 * atan2(sqrt(a1), sqrt(1-a1)); 
    double distance=R * a1;
    return distance*1000;
}
//the total distance is calculated in main by calling the Calc_distance function
