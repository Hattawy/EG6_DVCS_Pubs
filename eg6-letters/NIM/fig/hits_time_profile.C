void hits_time_profile()
{
//=========Macro generated from canvas: c/
//=========  (Wed May 24 14:24:46 2017) by ROOT version6.09/01

   gStyle->SetStatFontSize(0.12);
   gStyle->SetStatW(0.25);
   gROOT->Reset();
   gStyle->SetOptStat(kFALSE);
   gStyle->SetOptFit(0);
   gStyle->SetPalette(55);   
   gStyle->SetLabelSize(0.03,"xyz"); // size of axis value font 
   gStyle->SetTitleSize(0.035,"xyz"); // size of axis title font 
   gStyle->SetTitleFont(22,"xyz"); // font option 
   gStyle->SetLabelFont(22,"xyz");
   gStyle->SetTitleOffset(1.2,"y");
   gStyle->SetCanvasBorderMode(0);
   gStyle->SetCanvasBorderSize(0);
   gStyle->SetPadBottomMargin(0.15); //margins... 
   gStyle->SetPadTopMargin(0.04);
   gStyle->SetPadLeftMargin(0.15);
   gStyle->SetPadRightMargin(0.1);
   gStyle->SetFrameBorderMode(0);
   gStyle->SetPaperSize(20,24);
   gStyle->SetLabelSize(0.05,"xy");
   gStyle->SetTitleSize(0.06,"xy");


   TCanvas *c = new TCanvas("c", "",1,1,650,430);
   gStyle->SetOptFit(1);
   c->Range(-19.25,-386.4461,93.25,3478.014);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx2933[75] = {
   0,
   1,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   11,
   12,
   13,
   14,
   15,
   16,
   17,
   18,
   19,
   20,
   21,
   22,
   23,
   24,
   25,
   26,
   27,
   28,
   29,
   30,
   31,
   32,
   33,
   34,
   35,
   36,
   37,
   38,
   39,
   40,
   41,
   42,
   43,
   44,
   45,
   46,
   47,
   48,
   49,
   50,
   51,
   52,
   53,
   54,
   55,
   56,
   57,
   58,
   59,
   60,
   61,
   62,
   63,
   64,
   65,
   66,
   67,
   68,
   69,
   70,
   71,
   72,
   73,
   74};
   Double_t Graph0_fy2933[75] = {
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   -999,
   1088,
   1150,
   1215,
   1343,
   1477,
   1564,
   1663,
   1745,
   1833,
   1964,
   2089,
   2184,
   2268,
   2323,
   2389,
   2445,
   2501,
   2541,
   2544,
   2601,
   2597,
   2599,
   2595,
   2597,
   2587,
   2576,
   2543,
   2563,
   2603,
   2556,
   2561,
   2585,
   2618,
   2636,
   2637,
   2657,
   2670,
   2654,
   2727,
   2758,
   2746,
   2667,
   2636,
   2587,
   2447,
   2300,
   2111,
   1895,
   1693,
   1493,
   1287,
   1031,
   831,
   593,
   309,
   111,
   1,
   -999,
   -999};
   Double_t Graph0_fex2933[75] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph0_fey2933[75] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   32.98485,
   33.91165,
   34.85685,
   36.64696,
   38.43176,
   39.54744,
   40.7799,
   41.7732,
   42.81355,
   44.31704,
   45.70558,
   46.73329,
   47.62352,
   48.19751,
   48.8774,
   49.44694,
   50.01,
   50.40833,
   50.43808,
   51,
   50.96077,
   50.98039,
   50.94114,
   50.96077,
   50.86256,
   50.75431,
   50.42817,
   50.62608,
   51.0196,
   50.5569,
   50.60632,
   50.8429,
   51.1664,
   51.34199,
   51.35173,
   51.5461,
   51.67204,
   51.51699,
   52.22069,
   52.51666,
   52.40229,
   51.64301,
   51.34199,
   50.86256,
   49.46716,
   47.95832,
   45.94562,
   43.5316,
   41.14608,
   38.63936,
   35.87478,
   32.10919,
   28.82707,
   24.35159,
   17.5784,
   10.53565,
   1,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(75,Graph0_fx2933,Graph0_fy2933,Graph0_fex2933,Graph0_fey2933);
   gre->SetFillColor(1);
   gre->SetMarkerStyle(3);
   
   TH1F *Graph_Graph2933 = new TH1F("Graph_Graph2933","",100,0,82);
   Graph_Graph2933->SetMinimum(0);
   Graph_Graph2933->SetMaximum(3200);
   Graph_Graph2933->SetDirectory(0);
   Graph_Graph2933->SetStats(0);

   Graph_Graph2933->SetLineColor(kBlack);
   Graph_Graph2933->GetXaxis()->SetTitle("T");
   Graph_Graph2933->GetYaxis()->SetTitle("Counts");
   Graph_Graph2933->GetXaxis()->SetLabelSize(0.055);
   Graph_Graph2933->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph2933->GetYaxis()->SetLabelSize(0.055);
   Graph_Graph2933->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph2933->GetYaxis()->SetTitleOffset(0.9);
   Graph_Graph2933->GetYaxis()->CenterTitle(true);
   Graph_Graph2933->GetXaxis()->CenterTitle(true);
   gre->SetHistogram(Graph_Graph2933);
   
   
   TF1 *myfit2934 = new TF1("myfit","[0]+[1]*x",60,72);
   myfit2934->SetFillColor(19);
   myfit2934->SetFillStyle(0);
   myfit2934->SetLineColor(2);
   myfit2934->SetLineWidth(2);
   myfit2934->SetChisquare(13068.04);
   myfit2934->SetNDF(9);
   myfit2934->GetXaxis()->SetLabelSize(0.055);
   myfit2934->GetXaxis()->SetTitleSize(0.07);
   myfit2934->GetYaxis()->SetLabelSize(0.055);
   myfit2934->GetYaxis()->SetTitleSize(0.07);
   myfit2934->SetParameter(0,15707.71);
   myfit2934->SetParError(0,243.6894);
   myfit2934->SetParLimits(0,0,0);
   myfit2934->SetParameter(1,-219.0364);
   myfit2934->SetParError(1,3.63311);
   myfit2934->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(myfit2934);
  
   gStyle->SetOptFit(0);
   gre->SetLineColor(kBlack);
   gre->SetLineWidth(2);
   gre->SetMarkerColor(kBlack);
   gre->SetMarkerStyle(21);

   gre->Draw("ap");
   double Nbmax = 2758.0;

   TArrow *ar1 = new TArrow(1,Nbmax,56,Nbmax,0.05,"<|");
           ar1->SetAngle(40);
           ar1->SetLineColor(kBlue);
           ar1->SetLineStyle(7);
           ar1->SetLineWidth(4);
           //ar1->Draw();

   TArrow *ar2 = new TArrow(1,Nbmax/2.0,65.0,Nbmax/2.0,0.05,"|>");
           ar2->SetAngle(40);
           ar2->SetLineColor(kBlue);
           ar2->SetLineStyle(7);
           ar2->SetLineWidth(4);
           //ar2->Draw();

   TArrow *ar3 = new TArrow(65.3,10.0,65.3,Nbmax/2.0,0.05,"<|");
           ar3->SetAngle(40);
           ar3->SetLineColor(kBlue);
           ar3->SetLineStyle(7);
           ar3->SetLineWidth(4);
           ar3->Draw();

    TLatex *l1= new TLatex(25, Nbmax+120.0,"Nb_{max}");
            l1->SetTextSize(0.07);
            l1->SetTextColor(kBlue); 
            //l1->Draw("same");

    TLatex *l2= new TLatex(25, Nbmax/2.0+120.0,"Nb_{max/2}");
            l2->SetTextSize(0.07);
            l2->SetTextColor(kBlue); 
            //l2->Draw("same");

    TLatex *l3= new TLatex(65.0,-500.0,"T_{max/2}");
            l3->SetTextSize(0.07);
            l3->SetTextColor(kBlue); 
            l3->Draw("same");





   c->Modified();
   c->cd();
   c->SetSelected(c);
   c->Print("hits_time_profile.pdf");
}
