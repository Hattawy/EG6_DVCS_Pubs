void BSA_InCoherent_Q2()
{
//=========Macro generated from canvas: c15/Incoherent channel
//=========  (Tue Aug 21 12:00:25 2018) by ROOT version6.09/01
   TCanvas *c15 = new TCanvas("c15", "Incoherent channel",0,0,1200,400);
   gStyle->SetOptFit(1);
   c15->Range(0,0,1,1);
   c15->SetFillColor(0);
   c15->SetBorderMode(0);
   c15->SetBorderSize(2);
   c15->SetLeftMargin(0.025);
   c15->SetRightMargin(0.02325581);
   c15->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c15_1
   TPad *c15_1 = new TPad("c15_1", "Incoherent channel_1",0,0,0.262936,0.9);
   c15_1->Draw();
   c15_1->cd();
   c15_1->Range(-31.0033,-0.4888889,351.075,0.4);
   c15_1->SetFillColor(0);
   c15_1->SetBorderMode(0);
   c15_1->SetBorderSize(2);
   c15_1->SetGridx();
   c15_1->SetGridy();
   c15_1->SetRightMargin(0);
   c15_1->SetTopMargin(0);
   c15_1->SetFrameBorderMode(0);
   c15_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("1.15<Q^{2}<1.89 [GeV^{2}/c^{2}]");
   
   Double_t Graph_fx1114[9] = {
   22.83501,
   62.34,
   96.47249,
   141.5276,
   181.1347,
   220.5213,
   258.6931,
   303.53,
   335.4445};
   Double_t Graph_fy1114[9] = {
   0.1170777,
   -0.01461722,
   0.1838749,
   0.202231,
   0.008111727,
   -0.1379145,
   -0.1290101,
   -0.2362785,
   -0.003709615};
   Double_t Graph_fex1114[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1114[9] = {
   0.06288827,
   0.06411342,
   0.05587873,
   0.06378475,
   0.07967556,
   0.07702713,
   0.05475676,
   0.05735517,
   0.07543688};
   TGraphErrors *gre = new TGraphErrors(9,Graph_fx1114,Graph_fy1114,Graph_fex1114,Graph_fey1114);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1114 = new TH1F("Graph_Graph1114","Graph",100,0,366.7055);
   Graph_Graph1114->SetMinimum(-0.3495986);
   Graph_Graph1114->SetMaximum(0.3219807);
   Graph_Graph1114->SetDirectory(0);
   Graph_Graph1114->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1114->SetLineColor(ci);
   Graph_Graph1114->GetXaxis()->SetLabelFont(42);
   Graph_Graph1114->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1114->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1114->GetXaxis()->SetTitleFont(42);
   Graph_Graph1114->GetYaxis()->SetLabelFont(42);
   Graph_Graph1114->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1114->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1114->GetYaxis()->SetTitleFont(42);
   Graph_Graph1114->GetZaxis()->SetLabelFont(42);
   Graph_Graph1114->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1114->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1114->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1114);
   
   
   TF1 *myfit1115 = new TF1("myfit","[0]*sin(x*3.1416/180.0)/(1 + [1]*cos(x*3.1416/180.0))",0,366.7055);
   myfit1115->SetFillColor(19);
   myfit1115->SetFillStyle(0);
   myfit1115->SetLineColor(2);
   myfit1115->SetLineWidth(2);
   myfit1115->SetChisquare(12.3758);
   myfit1115->SetNDF(7);
   myfit1115->GetXaxis()->SetLabelFont(42);
   myfit1115->GetXaxis()->SetLabelSize(0.035);
   myfit1115->GetXaxis()->SetTitleSize(0.035);
   myfit1115->GetXaxis()->SetTitleFont(42);
   myfit1115->GetYaxis()->SetLabelFont(42);
   myfit1115->GetYaxis()->SetLabelSize(0.035);
   myfit1115->GetYaxis()->SetTitleSize(0.035);
   myfit1115->GetYaxis()->SetTitleFont(42);
   myfit1115->SetParameter(0,0.1611706);
   myfit1115->SetParError(0,0.03174734);
   myfit1115->SetParLimits(0,0,0);
   myfit1115->SetParameter(1,0.4764736);
   myfit1115->SetParError(1,0.3160716);
   myfit1115->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(myfit1115);
   
   TPaveStats *ptstats = new TPaveStats(0.27,0.74,0.9,0.9,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *AText = ptstats->AddText("#chi^{2} / ndf = 12.38 / 7");
   AText = ptstats->AddText("p0       = 0.1612 #pm 0.03175 ");
   AText = ptstats->AddText("p1       = 0.4765 #pm 0.3161 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("A_{LU}");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   gPad->Modified();  
   multigraph->GetYaxis()->SetRangeUser(-0.35, 0.35);  

   TPaveText *pt = new TPaveText(0.2181153,0.9268996,0.7818847,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("1.15<Q^{2}<1.89 [GeV^{2}/c^{2}]");
   pt->Draw();
   c15_1->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_2
   TPad *c15_2 = new TPad("c15_2", "Incoherent channel_2",0.262936,0,0.5008721,0.9);
   c15_2->Draw();
   c15_2->cd();
   c15_2->Range(5.469798,-0.4888889,352.1773,0.4);
   c15_2->SetFillColor(0);
   c15_2->SetBorderMode(0);
   c15_2->SetBorderSize(2);
   c15_2->SetGridx();
   c15_2->SetGridy();
   c15_2->SetLeftMargin(0);
   c15_2->SetRightMargin(0);
   c15_2->SetTopMargin(0);
   c15_2->SetFrameBorderMode(0);
   c15_2->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("1.89<Q^{2}<2.20 [GeV^{2}/c^{2}]");
   
   Double_t Graph_fx1117[9] = {
   21.22923,
   59.91159,
   95.43494,
   141.4112,
   180.8652,
   223.9796,
   260.476,
   302.7343,
   336.4178};
   Double_t Graph_fy1117[9] = {
   0.04258084,
   0.1084297,
   0.1359967,
   0.04667718,
   0.196068,
   -0.2925128,
   -0.1531226,
   -0.1932618,
   -0.07796822};
   Double_t Graph_fex1117[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1117[9] = {
   0.05142849,
   0.05789636,
   0.0669999,
   0.09706435,
   0.1206471,
   0.1088609,
   0.0703079,
   0.05076954,
   0.06313562};
   gre = new TGraphErrors(9,Graph_fx1117,Graph_fy1117,Graph_fex1117,Graph_fey1117);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1117 = new TH1F("Graph_Graph1117","Graph",100,0,367.9367);
   Graph_Graph1117->SetMinimum(-0.4731825);
   Graph_Graph1117->SetMaximum(0.388524);
   Graph_Graph1117->SetDirectory(0);
   Graph_Graph1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1117->SetLineColor(ci);
   Graph_Graph1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph1117->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph1117->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1117->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1117);
   
   
   TF1 *myfit1118 = new TF1("myfit","[0]*sin(x*3.1416/180.0)/(1 + [1]*cos(x*3.1416/180.0))",0,367.9367);
   myfit1118->SetFillColor(19);
   myfit1118->SetFillStyle(0);
   myfit1118->SetLineColor(2);
   myfit1118->SetLineWidth(2);
   myfit1118->SetChisquare(7.526062);
   myfit1118->SetNDF(7);
   myfit1118->GetXaxis()->SetLabelFont(42);
   myfit1118->GetXaxis()->SetLabelSize(0.035);
   myfit1118->GetXaxis()->SetTitleSize(0.035);
   myfit1118->GetXaxis()->SetTitleFont(42);
   myfit1118->GetYaxis()->SetLabelFont(42);
   myfit1118->GetYaxis()->SetLabelSize(0.035);
   myfit1118->GetYaxis()->SetTitleSize(0.035);
   myfit1118->GetYaxis()->SetTitleFont(42);
   myfit1118->SetParameter(0,0.1713662);
   myfit1118->SetParError(0,0.03385175);
   myfit1118->SetParLimits(0,0,0);
   myfit1118->SetParameter(1,0.02223658);
   myfit1118->SetParError(1,0.4403813);
   myfit1118->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(myfit1118);
   
   ptstats = new TPaveStats(0.27,0.74,0.9,0.9,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("#chi^{2} / ndf = 7.526 / 7");
   AText = ptstats->AddText("p0       = 0.1714 #pm 0.03385 ");
   AText = ptstats->AddText("p1       = 0.02224 #pm 0.4404 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
    gPad->Modified();  
   multigraph->GetYaxis()->SetRangeUser(-0.35, 0.35);  

  
   pt = new TPaveText(0.2053615,0.9304839,0.7946385,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("1.89<Q^{2}<2.20 [GeV^{2}/c^{2}]");
   pt->Draw();
   c15_2->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_3
   TPad *c15_3 = new TPad("c15_3", "Incoherent channel_3",0.5008721,0,0.7388081,0.9);
   c15_3->Draw();
   c15_3->cd();
   c15_3->Range(4.285699,-0.4888889,357.7783,0.4);
   c15_3->SetFillColor(0);
   c15_3->SetBorderMode(0);
   c15_3->SetBorderSize(2);
   c15_3->SetGridx();
   c15_3->SetGridy();
   c15_3->SetLeftMargin(0);
   c15_3->SetRightMargin(0);
   c15_3->SetTopMargin(0);
   c15_3->SetFrameBorderMode(0);
   c15_3->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("2.20<Q^{2}<3.00 [GeV^{2}/c^{2}]");
   
   Double_t Graph_fx1120[9] = {
   20.35354,
   57.87199,
   96.59756,
   139.4952,
   179.3147,
   227.0325,
   263.7633,
   301.8705,
   341.7104};
   Double_t Graph_fy1120[9] = {
   0.09883612,
   0.03664705,
   0.2644828,
   -0.003967834,
   0.01536906,
   0.08365098,
   -0.199317,
   -0.1693698,
   -0.1194689};
   Double_t Graph_fex1120[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1120[9] = {
   0.05329718,
   0.09421723,
   0.1240608,
   0.2548218,
   0.3747859,
   0.3533384,
   0.1425623,
   0.0741223,
   0.06871175};
   gre = new TGraphErrors(9,Graph_fx1120,Graph_fy1120,Graph_fex1120,Graph_fey1120);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1120 = new TH1F("Graph_Graph1120","Graph",100,0,373.8461);
   Graph_Graph1120->SetMinimum(-0.4390575);
   Graph_Graph1120->SetMaximum(0.51663);
   Graph_Graph1120->SetDirectory(0);
   Graph_Graph1120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1120->SetLineColor(ci);
   Graph_Graph1120->GetXaxis()->SetLabelFont(42);
   Graph_Graph1120->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1120->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1120->GetXaxis()->SetTitleFont(42);
   Graph_Graph1120->GetYaxis()->SetLabelFont(42);
   Graph_Graph1120->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1120->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1120->GetYaxis()->SetTitleFont(42);
   Graph_Graph1120->GetZaxis()->SetLabelFont(42);
   Graph_Graph1120->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1120->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1120);
   
   
   TF1 *myfit1121 = new TF1("myfit","[0]*sin(x*3.1416/180.0)/(1 + [1]*cos(x*3.1416/180.0))",0,373.8461);
   myfit1121->SetFillColor(19);
   myfit1121->SetFillStyle(0);
   myfit1121->SetLineColor(2);
   myfit1121->SetLineWidth(2);
   myfit1121->SetChisquare(3.686653);
   myfit1121->SetNDF(7);
   myfit1121->GetXaxis()->SetLabelFont(42);
   myfit1121->GetXaxis()->SetLabelSize(0.035);
   myfit1121->GetXaxis()->SetTitleSize(0.035);
   myfit1121->GetXaxis()->SetTitleFont(42);
   myfit1121->GetYaxis()->SetLabelFont(42);
   myfit1121->GetYaxis()->SetLabelSize(0.035);
   myfit1121->GetYaxis()->SetTitleSize(0.035);
   myfit1121->GetYaxis()->SetTitleFont(42);
   myfit1121->SetParameter(0,0.15494);
   myfit1121->SetParError(0,0.09775703);
   myfit1121->SetParLimits(0,0,0);
   myfit1121->SetParameter(1,-0.3980994);
   myfit1121->SetParError(1,0.7685605);
   myfit1121->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(myfit1121);
   
   ptstats = new TPaveStats(0.27,0.74,0.9,0.9,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("#chi^{2} / ndf = 3.687 / 7");
   AText = ptstats->AddText("p0       = 0.1549 #pm 0.09776 ");
   AText = ptstats->AddText("p1       = -0.3981 #pm 0.7686 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
    gPad->Modified();  
   multigraph->GetYaxis()->SetRangeUser(-0.35, 0.35);  

 

   pt = new TPaveText(0.2053615,0.9304839,0.7946385,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("2.20<Q^{2}<3.00 [GeV^{2}/c^{2}]");
   pt->Draw();
   c15_3->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_4
   TPad *c15_4 = new TPad("c15_4", "Incoherent channel_4",0.7388081,0,0.9767442,0.9);
   c15_4->Draw();
   c15_4->cd();
   c15_4->Range(4.19786,-0.4888889,357.2907,0.4);
   c15_4->SetFillColor(0);
   c15_4->SetBorderMode(0);
   c15_4->SetBorderSize(2);
   c15_4->SetGridx();
   c15_4->SetGridy();
   c15_4->SetLeftMargin(0);
   c15_4->SetRightMargin(0);
   c15_4->SetTopMargin(0);
   c15_4->SetFrameBorderMode(0);
   c15_4->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("3.00<Q^{2}<4.20 [GeV^{2}/c^{2}]");
   
   Double_t Graph_fx1123[9] = {
   20.24754,
   56.79906,
   92.93168,
   136.7006,
   172.763,
   234.2267,
   267.9188,
   302.9196,
   341.2411};
   Double_t Graph_fy1123[9] = {
   0.1008191,
   0.1210594,
   0.2643961,
   0.0720756,
   1.2778,
   -2.549262,
   -0.1666457,
   -0.3067835,
   -0.01484271};
   Double_t Graph_fex1123[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1123[9] = {
   0.05191478,
   0.08493786,
   0.1366384,
   0.4965135,
   0,
   2.355859,
   0.1695353,
   0.07484909,
   0.06665529};
   gre = new TGraphErrors(9,Graph_fx1123,Graph_fy1123,Graph_fex1123,Graph_fey1123);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   
   TH1F *Graph_Graph1123 = new TH1F("Graph_Graph1123","Graph",100,0,373.3404);
   Graph_Graph1123->SetMinimum(-5.523413);
   Graph_Graph1123->SetMaximum(1.896092);
   Graph_Graph1123->SetDirectory(0);
   Graph_Graph1123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1123->SetLineColor(ci);
   Graph_Graph1123->GetXaxis()->SetLabelFont(42);
   Graph_Graph1123->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetXaxis()->SetTitleFont(42);
   Graph_Graph1123->GetYaxis()->SetLabelFont(42);
   Graph_Graph1123->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetYaxis()->SetTitleFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelFont(42);
   Graph_Graph1123->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1123->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1123);
   
   
   TF1 *myfit1124 = new TF1("myfit","[0]*sin(x*3.1416/180.0)/(1 + [1]*cos(x*3.1416/180.0))",0,373.3404);
   myfit1124->SetFillColor(19);
   myfit1124->SetFillStyle(0);
   myfit1124->SetLineColor(2);
   myfit1124->SetLineWidth(2);
   myfit1124->SetChisquare(5.07966);
   myfit1124->SetNDF(6);
   myfit1124->GetXaxis()->SetLabelFont(42);
   myfit1124->GetXaxis()->SetLabelSize(0.035);
   myfit1124->GetXaxis()->SetTitleSize(0.035);
   myfit1124->GetXaxis()->SetTitleFont(42);
   myfit1124->GetYaxis()->SetLabelFont(42);
   myfit1124->GetYaxis()->SetLabelSize(0.035);
   myfit1124->GetYaxis()->SetTitleSize(0.035);
   myfit1124->GetYaxis()->SetTitleFont(42);
   myfit1124->SetParameter(0,0.2492926);
   myfit1124->SetParError(0,0.0832705);
   myfit1124->SetParLimits(0,0,0);
   myfit1124->SetParameter(1,0.008386794);
   myfit1124->SetParError(1,0.5619725);
   myfit1124->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(myfit1124);
   
   ptstats = new TPaveStats(0.27,0.74,0.9,0.9,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   AText = ptstats->AddText("#chi^{2} / ndf =  5.08 / 6");
   AText = ptstats->AddText("p0       = 0.2493 #pm 0.08327 ");
   AText = ptstats->AddText("p1       = 0.008387 #pm 0.562 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   multigraph->Add(gre,"");
   multigraph->Draw("AP");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   gPad->Modified();  
   multigraph->GetYaxis()->SetRangeUser(-0.35, 0.35);  



   pt = new TPaveText(0.2053615,0.9304839,0.7946385,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("3.00<Q^{2}<4.20 [GeV^{2}/c^{2}]");
   pt->Draw();
   c15_4->Modified();
   c15->cd();
   c15->Modified();
   c15->cd();
   c15->SetSelected(c15);
}
