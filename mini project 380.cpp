#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int cn2data(string landuse,string treatment,string hydrologic,char type)
{
    if(landuse=="cultivated"&&treatment=="stragihtrow"&&hydrologic=="na"&&type=='A')
    {
        return 76;
    }
    if(landuse=="cultivated"&&treatment=="straightrow"&&hydrologic=="na"&&type=='B')
    {
        return 86;
    }
    if(landuse=="cultivated"&&treatment=="straightrow"&&hydrologic=="na"&&type=='C')
    {
        return 90 ;
    }
    if(landuse=="cultivated"&&treatment=="straightrow"&&hydrologic=="na"&&type=='D')
    {
        return 93;
    }
    if(landuse=="cultivated"&&treatment=="contoured"&&hydrologic=="poor"&&type=='A')
    {
        return 70;
    }
     if(landuse=="cultivated"&&treatment=="contoured"&&hydrologic=="poor"&&type=='B')
    {
        return 79;
    }
     if(landuse=="cultivated"&&treatment=="contoured"&&hydrologic=="poor"&&type=='C')
    {
        return 84;
    }
     if(landuse=="cultivated"&&treatment=="contoured"&&hydrologic=="poor"&&type=='D')
    {
        return 88;
    }
    if(landuse=="cultivated"&&treatment=="contoured"&&hydrologic=="good"&&type=='A')
    {
        return 65;
    }
     if(landuse=="cultivated"&&treatment=="contoured"&&hydrologic=="good"&&type=='B')
    {
        return 75;
    }
     if(landuse=="cultivated"&&treatment=="contoured"&&hydrologic=="good"&&type=='C')
    {
        return 82;
    }
     if(landuse=="cultivated"&&treatment=="contoured"&&hydrologic=="good"&&type=='D')
    {
        return 86;
    }
    if(landuse=="cultivated"&&treatment=="contoured&terraced"&&hydrologic=="poor"&&type=='A')
    {
        return 66;
    }
    if(landuse=="cultivated"&&treatment=="contoured&terraced"&&hydrologic=="poor"&&type=='B')
    {
        return 74;
    }
    if(landuse=="cultivated"&&treatment=="contoured&terraced"&&hydrologic=="poor"&&type=='C')
    {
        return 80;
    }
    if(landuse=="cultivated"&&treatment=="contoured&terraced"&&hydrologic=="poor"&&type=='D')
    {
        return 82;
    }
    if(landuse=="cultivated"&&treatment=="contoured&terraced"&&hydrologic=="good"&&type=='A')
    {
        return 62;
    }
    if(landuse=="cultivated"&&treatment=="contoured&terraced"&&hydrologic=="good"&&type=='B')
    {
        return 71;
    }
    if(landuse=="cultivated"&&treatment=="contoured&terraced"&&hydrologic=="good"&&type=='C')
    {
        return 77;
    }
    if(landuse=="cultivated"&&treatment=="contoured&terraced"&&hydrologic=="good"&&type=='D')
    {
        return 81;
    }
    if(landuse=="cultivated"&&treatment=="bunded"&&hydrologic=="poor"&&type=='A')
    {
        return 67;
    }
    if(landuse=="cultivated"&&treatment=="bunded"&&hydrologic=="poor"&&type=='B')
    {
        return 75;
    }
    if(landuse=="cultivated"&&treatment=="bunded"&&hydrologic=="poor"&&type=='C')
    {
        return 81;
    }
    if(landuse=="cultivated"&&treatment=="bunded"&&hydrologic=="poor"&&type=='D')
    {
        return 83;
    }
    if(landuse=="cultivated"&&treatment=="bunded"&&hydrologic=="good"&&type=='A')
    {
        return 59;
    }
    if(landuse=="cultivated"&&treatment=="bunded"&&hydrologic=="good"&&type=='B')
    {
        return 69;
    }
    if(landuse=="cultivated"&&treatment=="bunded"&&hydrologic=="good"&&type=='C')
    {
        return 76;
    }
    if(landuse=="cultivated"&&treatment=="bunded"&&hydrologic=="good"&&type=='D')
    {
        return 79;
    }
     if(landuse=="cultivated"&&treatment=="paddy"&&hydrologic=="na"&&type=='A')
    {
        return 95;
    }
     if(landuse=="cultivated"&&treatment=="paddy"&&hydrologic=="na"&&type=='B')
    {
        return 95;
    }
     if(landuse=="cultivated"&&treatment=="paddy"&&hydrologic=="na"&&type=='C')
    {
        return 95;
    }
     if(landuse=="cultivated"&&treatment=="paddy"&&hydrologic=="na"&&type=='D')
    {
        return 95;
    }
     if(landuse=="orchards"&&treatment=="withunderstorycover"&&hydrologic=="na"&&type=='A')
    {
        return 39;
    }
     if(landuse=="orchards"&&treatment=="withunderstorycover"&&hydrologic=="na"&&type=='B')
    {
        return 53;
    }
     if(landuse=="orchards"&&treatment=="withunderstorycover"&&hydrologic=="na"&&type=='C')
    {
        return 67;
    }
     if(landuse=="orchards"&&treatment=="withunderstorycover"&&hydrologic=="na"&&type=='D')
    {
        return 71;
    }
     if(landuse=="orchards"&&treatment=="withoutunderstorycover"&&hydrologic=="na"&&type=='A')
    {
        return 41;
    }
     if(landuse=="orchards"&&treatment=="withoutunderstorycover"&&hydrologic=="na"&&type=='B')
    {
        return 55;
    }
    if(landuse=="orchards"&&treatment=="withoutunderstorycover"&&hydrologic=="na"&&type=='C')
    {
        return 69;
    }
    if(landuse=="orchards"&&treatment=="withoutunderstorycover"&&hydrologic=="na"&&type=='D')
    {
        return 73;
    }

        if(landuse=="forest"&&treatment=="dense"&&hydrologic=="na"&&type=='A')
    {
        return 26;
    }
        if(landuse=="forest"&&treatment=="dense"&&hydrologic=="na"&&type=='B')
    {
        return 40;
    }
        if(landuse=="forest"&&treatment=="dense"&&hydrologic=="na"&&type=='C')
    {
        return 58;
    }
        if(landuse=="forest"&&treatment=="dense"&&hydrologic=="na"&&type=='D')
    {
        return 61;
    }
     if(landuse=="forest"&&treatment=="open"&&hydrologic=="na"&&type=='A')
    {
        return 28;
    }
     if(landuse=="forest"&&treatment=="open"&&hydrologic=="na"&&type=='B')
    {
        return 44;
    }
     if(landuse=="forest"&&treatment=="open"&&hydrologic=="na"&&type=='C')
    {
        return 60;
    }
     if(landuse=="forest"&&treatment=="open"&&hydrologic=="na"&&type=='D')
    {
        return 64;
    }
     if(landuse=="forest"&&treatment=="scrub"&&hydrologic=="na"&&type=='A')
    {
        return 33;
    }
     if(landuse=="forest"&&treatment=="scrub"&&hydrologic=="na"&&type=='B')
    {
        return 47;
    }
     if(landuse=="forest"&&treatment=="scrub"&&hydrologic=="na"&&type=='C')
    {
        return 64;
    }
     if(landuse=="forest"&&treatment=="scrub"&&hydrologic=="na"&&type=='D')
    {
        return 67;
    }
     if(landuse=="pesture"&&treatment=="poor"&&hydrologic=="na"&&type=='A')
    {
        return 68;
    }
     if(landuse=="pesture"&&treatment=="poor"&&hydrologic=="na"&&type=='B')
    {
        return 79;
    }
     if(landuse=="pesture"&&treatment=="poor"&&hydrologic=="na"&&type=='C')
    {
        return 86;
    }
     if(landuse=="pesture"&&treatment=="poor"&&hydrologic=="na"&&type=='D')
    {
        return 89;
    }
     if(landuse=="pesture"&&treatment=="fair"&&hydrologic=="na"&&type=='A')
    {
        return 49;
    }
     if(landuse=="pesture"&&treatment=="fair"&&hydrologic=="na"&&type=='B')
    {
        return 69;
    }
     if(landuse=="pesture"&&treatment=="fair"&&hydrologic=="na"&&type=='C')
    {
        return 79;
    }
     if(landuse=="pesture"&&treatment=="fair"&&hydrologic=="na"&&type=='D')
    {
        return 84;
    }
      if(landuse=="pesture"&&treatment=="good"&&hydrologic=="na"&&type=='A')
    {
        return 39;
    }
      if(landuse=="pesture"&&treatment=="good"&&hydrologic=="na"&&type=='B')
    {
        return 61;
    }
     if(landuse=="pesture"&&treatment=="good"&&hydrologic=="na"&&type=='C')
    {
        return 74;
    }
     if(landuse=="pesture"&&treatment=="good"&&hydrologic=="na"&&type=='D')
    {
        return 80;
    }
     if(landuse=="wasteland"&&treatment=="na"&&hydrologic=="na"&&type=='A')
    {
        return 71;
    }
    if(landuse=="wasteland"&&treatment=="na"&&hydrologic=="na"&&type=='B')
    {
        return 80;
    }
    if(landuse=="wasteland"&&treatment=="na"&&hydrologic=="na"&&type=='C')
    {
        return 85;
    }
    if(landuse=="wasteland"&&treatment=="na"&&hydrologic=="na"&&type=='D')
    {
        return 88;
    }
    if(landuse=="roads"&&treatment=="na"&&hydrologic=="na"&&type=='A')
    {
        return 73;
    }
     if(landuse=="roads"&&treatment=="na"&&hydrologic=="na"&&type=='B')
    {
        return 83;
    }
     if(landuse=="roads"&&treatment=="na"&&hydrologic=="na"&&type=='C')
    {
        return 88;
    }
     if(landuse=="roads"&&treatment=="na"&&hydrologic=="na"&&type=='D')
    {
        return 90;
    }
     if(landuse=="hardsurfaceareas"&&treatment=="na"&&hydrologic=="na"&&type=='A')
    {
        return 77;
    }
    if(landuse=="hardsurfaceareas"&&treatment=="na"&&hydrologic=="na"&&type=='B')
    {
        return 86;
    }
    if(landuse=="hardsurfaceareas"&&treatment=="na"&&hydrologic=="na"&&type=='C')
    {
        return 91;
    }
    if(landuse=="hardsurfaceareas"&&treatment=="na"&&hydrologic=="na"&&type=='D')
    {
        return 93;
    }

    return 0;

}

string amccheckcondition(char* season,double* avg)
{
    if(season[0]=='d'&&avg[0]<=13)
    {
        return "AMC I";
    }
    if(season[0]=='d'&&avg[0]>13&&avg[0]<=28)
    {
        return "AMC II";
    }
    if(season[0]=='d'&&avg[0]>28)
    {
        return "AMC III";
    }
     if(season[0]=='g'&&avg[0]<=36)
    {
        return "AMC I";
    }
     if(season[0]=='g'&&avg[0]>36&&avg[0]<=53)
    {
        return "AMC II";
    }
     if(season[0]=='g'&&avg[0]>53)
    {
        return "AMC III";
    }
}


int main()
{
    double p;
    cout<<"enter the rainfall value: "<<endl;
    cin>>p;
    double lamda=0.3;




     string landuse;
     string treatment;
     string hydrologic;
    char type;
     double cn2=0.00;


      double n=1.00;
      double i=0.00;

      while(n!=0.00)
      {
           cout<<"enter the percentage ratio of soils : "<<endl;
          cin>>i;

          cout<<"enter the land use: "<<endl;
     cin>>landuse;

     cout<<"enter the treatment or practice cover: "<<endl;
     cin>>treatment;

      cout<<"enter the hydrologic condition: "<<endl;
     cin>>hydrologic;

     cout<<"enter the value of type of soil: "<<endl;
     cin>>type;

        cn2+=(i*1.000)*cn2data(landuse,treatment,hydrologic,type);
        n=n-i;

      }

    double cn1=(cn2)*(1.000)/(2.281-(0.01281*cn2));
    double cn3=(cn2)*(1.000)/(0.427+(0.00573*cn2));

    int date;
    cout<<"enter the number of days for the given data: "<<endl;
    cin>>date;
    double*arr=new double[date];
     for(int i=0;i<date;i++)
     {
         cin>>arr[i];
     }

   // double*arr=new double[date];
    double*average=new double[date];

    int k=0;
    char season[date];
    for(int i=0;i<date-4;i++)
    {
        double avg=0;
        avg=((arr[i]+arr[i+1]+arr[i+2]+arr[i+3]+arr[i+4])*1.00)/5;
        average[k]=avg;
        cout<<"enter the season of average  "<<avg<<":  "<<endl;
        cin>>season[k];
        k++;
    }

    double cn;
    double s;
    double answer;
    double q=0.0000;
    for(int j=0;j<k;j++)
    {
      string smalloutput=amccheckcondition(season+j,average+j);

        if(smalloutput=="AMC I")
        {
            cn=cn1;
        }
       if(smalloutput=="AMC II")
        {
            cn=cn2;
        }
         if(smalloutput=="AMC III")
        {
            cn=cn3;
        }

        if(p>lamda*s)
        {
            s=(25400*1.00/cn)-254;
        q+=pow((p-lamda*s),2)/(p+((1-lamda)*s));
        }
        else
        {
            q+=0;
        }


    }
    q/=k;
    cout<<"the runoff is equal to the:     "<<q<<"mm"<<endl;

}
