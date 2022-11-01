// Marvish Chandra

#include <iostream>

class ArgentinePeso{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myPeso(String [] args){
        ArgentinePeso givenPeso;
        givenPeso.USD = 0.0065;
        givenPeso.EUR = 0.0066;
        givenPeso.GBP = 0.0058;
        givenPeso.JPY = 0.976;
        givenPeso.CAD = 0.009;
        givenPeso.AUD = 0.0104;
        givenPeso.CNY = 0.0471;
    };
};

class USDollar{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myUSDollar(String [] args){
        USDollar givenUSDollar;
        givenUSDollar.USD = 1;
        givenUSDollar.EUR = 1.0154;
        givenUSDollar.GBP = 0.8837;
        givenUSDollar.JPY = 149.1805;
        givenUSDollar.CHF = 0.9965;
        givenUSDollar.CAD = 1.3782;
        givenUSDollar.AUD = 1.5905;
        givenUSDollar.CNY = 7.2021;
    };
};

class Euro{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myEuro(String [] args){
        Euro givenEuro;
        givenEuro.USD = 0.9848;
        givenEuro.EUR = 1;
        givenEuro.GBP = 0.8702;
        givenEuro.JPY = 146.9144;
        givenEuro.CHF = 0.9814;
        givenEuro.CAD = 1.3572;
        givenEuro.AUD = 1.5664;
        givenEuro.CNY = 7.0927;
    };
};

class JapaneseYen{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myYen(String [] args){
        JapaneseYen givenYen;
        givenYen.USD = 0.0067;
        givenYen.EUR = 0.0068;
        givenYen.GBP = 0.0059;
        givenYen.JPY = 1;
        givenYen.CHF = 0.0067;
        givenYen.CAD = 0.0092;
        givenYen.AUD = 0.0107;
        givenYen.CNY = 0.0483;
    };
};

class PoundSterling{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myGBP(String [] args){
        PoundSterling givenGBP;
        givenGBP.USD = 1.1317;
        givenGBP.EUR = 1.1491;
        givenGBP.GBP = 1;
        givenGBP.JPY = 168.8221;
        givenGBP.CHF = 1.1277;
        givenGBP.CAD = 1.5596;
        givenGBP.AUD = 1.8;
        givenGBP.CNY = 8.1504;
    };
};

class AustralianDollar{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myAUD(String [] args){
        AustralianDollar givenAUD;
        givenAUD.USD = 0.6287;
        givenAUD.EUR = 0.6384;
        givenAUD.GBP = 0.5556;
        givenAUD.JPY = 93.792;
        givenAUD.CHF = 0.6265;
        givenAUD.CAD = 0.8665;
        givenAUD.AUD = 1;
        givenAUD.CNY = 4.5281;
    };
};

class CanadianDollar{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myCAD(String [] args){
        CanadianDollar givenCAD;
        givenCAD.USD = 0.7256;
        givenCAD.EUR = 0.7368;
        givenCAD.GBP = 0.6412;
        givenCAD.JPY = 108.2465;
        givenCAD.CHF = 0.7231;
        givenCAD.CAD = 1;
        givenCAD.AUD = 1.1541;
        givenCAD.CNY = 5.2259;
    };
};

class SwissFranc{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myCHF(String [] args){
        SwissFranc givenCHF;
        givenCHF.USD = 1.0035;
        givenCHF.EUR = 1.019;
        givenCHF.GBP = 0.8868;
        givenCHF.JPY = 149.7058;
        givenCHF.CHF = 1;
        givenCHF.CAD = 1.383;
        givenCHF.AUD = 1.5961;
        givenCHF.CNY = 7.2275;
    };
};

class ChineseRenminbi{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myCNY(String [] args){
        ChineseRenminbi givenCNY;
        givenCNY.USD = 0.1388;
        givenCNY.EUR = 0.141;
        givenCNY.GBP = 0.1227;
        givenCNY.JPY = 20.7135;
        givenCNY.CHF = 0.1384;
        givenCNY.CAD = 0.1914;
        givenCNY.AUD = 0.2208;
        givenCNY.CNY = 1;
    };
};

class HongKong{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myHKD(String [] args){
        HongKong givenHKD;
        givenHKD.USD = 0.1274;
        givenHKD.EUR = 0.1294;
        givenHKD.GBP = 0.1126;
        givenHKD.JPY = 19.0039;
        givenHKD.CHF = 0.1269;
        givenHKD.CAD = 0.1756;
        givenHKD.AUD = 0.2026;
        givenHD.CNY = 0.9175;
    };
};

class NewZealand{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myNZD(String [] args){
        NewZealand givenNZD;
        givenNZD.USD = 0.5669;
        givenNZD.EUR = 0.5756;
        givenNZD.GBP = 0.5009;
        givenNZD.JPY = 84.5682;
        givenNZD.CHF = 0.5649;
        givenNZD.CAD = 0.7813;
        givenNZD.AUD = 0.9017;
        givenNZD.CNY = 4.0828;
    };
};

class IndianRupee{
    public:
    int USD;
    int EUR;
    int GBP;
    int JPY;
    int CHF;
    int CAD;
    int AUD;
    int CNY;

    public static void myRupee(String [] args){
        IndianRupee givenRupee;
        givenRupee.USD = 0.0122;
        givenRupee.EUR = 0.0123;
        givenRupee.GBP = 0.0107;
        givenRupee.JPY = 1.8126;
        givenRupee.CHF = 0.0121;
        givenRupee.CAD = 0.0167;
        givenRupee.AUD = 0.0193;
        givenRupee.CNY = 0.0875;
    };
};