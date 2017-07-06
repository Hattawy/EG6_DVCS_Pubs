void incoherent_ALU_phi()
{
//=========Macro generated from canvas: c15/
//=========  (Thu Jul  6 14:04:35 2017) by ROOT version6.09/01
   TCanvas *c15 = new TCanvas("c15", "",0,0,1200,900);
   gStyle->SetOptFit(1);
   c15->Range(0,0,1,1);
   c15->SetFillColor(0);
   c15->SetBorderMode(0);
   c15->SetBorderSize(2);
   c15->SetLeftMargin(0.06395349);
   c15->SetRightMargin(0.01968414);
   c15->SetTopMargin(0.02680798);
   c15->SetBottomMargin(0.08527131);
   c15->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c15_1
   TPad *c15_1 = new TPad("c15_1", "_1",0,0.6772185,0.2930441,0.973192);
   c15_1->Draw();
   c15_1->cd();
   c15_1->Range(-135.625,-0.35,375,0.35);
   c15_1->SetFillColor(0);
   c15_1->SetBorderMode(0);
   c15_1->SetBorderSize(2);
   c15_1->SetLeftMargin(0.255814);
   c15_1->SetRightMargin(0);
   c15_1->SetTopMargin(0);
   c15_1->SetBottomMargin(0);
   c15_1->SetFrameBorderMode(0);
   c15_1->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1011[9] = {
   21.0166,
   62.924,
   95.4492,
   140.122,
   182.321,
   220.463,
   258.455,
   303.145,
   337.42};
   Double_t Graph_fy1011[9] = {
   0.0541395,
   0.0771959,
   0.191317,
   0.107603,
   0.0448121,
   -0.0294133,
   -0.126129,
   -0.12384,
   -0.0122601};
   Double_t Graph_fex1011[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1011[9] = {
   0.04257746,
   0.04345303,
   0.03915796,
   0.0538811,
   0.06529993,
   0.06589051,
   0.03998644,
   0.03494298,
   0.05183085};
   TGraphErrors *gre = new TGraphErrors(9,Graph_fx1011,Graph_fy1011,Graph_fex1011,Graph_fey1011);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","Graph",100,0,369.0603);
   Graph_Graph1011->SetMinimum(-0.2057745);
   Graph_Graph1011->SetMaximum(0.270134);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(22);
   Graph_Graph1011->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1011->GetXaxis()->SetTitleFont(22);
   Graph_Graph1011->GetYaxis()->SetLabelFont(22);
   Graph_Graph1011->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1011->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1011->GetYaxis()->SetTitleFont(22);
   Graph_Graph1011->GetZaxis()->SetLabelFont(22);
   Graph_Graph1011->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1011->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1011);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{Incoh}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1012[9] = {
   21.0166,
   62.924,
   95.4492,
   140.122,
   182.321,
   220.463,
   258.455,
   303.145,
   337.42};
   Double_t Graph_fy1012[9] = {
   0.0541395,
   0.0771959,
   0.191317,
   0.107603,
   0.0448121,
   -0.0294133,
   -0.126129,
   -0.12384,
   -0.0122601};
   Double_t Graph_fex1012[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1012[9] = {
   0.04257746,
   0.04345303,
   0.03915796,
   0.0538811,
   0.06529993,
   0.06589051,
   0.03998644,
   0.03494298,
   0.05183085};
   gre = new TGraphErrors(9,Graph_fx1012,Graph_fy1012,Graph_fex1012,Graph_fey1012);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10111012 = new TH1F("Graph_Graph_Graph10111012","Graph",100,0,369.0603);
   Graph_Graph_Graph10111012->SetMinimum(-0.2057745);
   Graph_Graph_Graph10111012->SetMaximum(0.270134);
   Graph_Graph_Graph10111012->SetDirectory(0);
   Graph_Graph_Graph10111012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10111012->SetLineColor(ci);
   Graph_Graph_Graph10111012->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10111012->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10111012->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10111012->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10111012->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10111012->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10111012->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10111012->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10111012->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10111012->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10111012->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10111012->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10111012);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{Incoh}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx16[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy16[13] = {
   0,
   0.01206256,
   0.01206256,
   0.0156232,
   0.02637904,
   0.0158652,
   0.02346724,
   0.01509915,
   0.02266091,
   0.01968592,
   0.01425768,
   0.01425768,
   0};
   graph = new TGraph(13,Graph0_fx16,Graph0_fy16);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","Graph",100,0,396);
   Graph_Graph16->SetMinimum(0);
   Graph_Graph16->SetMaximum(0.02901694);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph16->SetLineColor(ci);
   Graph_Graph16->GetXaxis()->SetLabelFont(22);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph16->GetXaxis()->SetTitleFont(22);
   Graph_Graph16->GetYaxis()->SetLabelFont(22);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph16->GetYaxis()->SetTitleFont(22);
   Graph_Graph16->GetZaxis()->SetLabelFont(22);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph16);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1013[9] = {
   21.0166,
   62.924,
   95.4492,
   140.122,
   182.321,
   220.463,
   258.455,
   303.145,
   337.42};
   Double_t Graph1_fy1013[9] = {
   0.0541395,
   0.0771959,
   0.191317,
   0.107603,
   0.0448121,
   -0.0294133,
   -0.126129,
   -0.12384,
   -0.0122601};
   Double_t Graph1_fex1013[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1013[9] = {
   0.04257746,
   0.04345303,
   0.03915796,
   0.0538811,
   0.06529993,
   0.06589051,
   0.03998644,
   0.03494298,
   0.05183085};
   gre = new TGraphErrors(9,Graph1_fx1013,Graph1_fy1013,Graph1_fex1013,Graph1_fey1013);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph101110121013 = new TH1F("Graph_Graph_Graph_Graph101110121013","Graph",100,0,369.0603);
   Graph_Graph_Graph_Graph101110121013->SetMinimum(-0.2057745);
   Graph_Graph_Graph_Graph101110121013->SetMaximum(0.270134);
   Graph_Graph_Graph_Graph101110121013->SetDirectory(0);
   Graph_Graph_Graph_Graph101110121013->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph101110121013->SetLineColor(ci);
   Graph_Graph_Graph_Graph101110121013->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101110121013->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph101110121013->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph101110121013->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph101110121013->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101110121013->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph101110121013->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph101110121013->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph101110121013->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101110121013->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph101110121013->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph101110121013->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph101110121013);
   
   gre->Draw("p");
   
   TF1 *ffit3[0]1 = new TF1("ffit3[0]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[0]1->SetFillColor(19);
   ffit3[0]1->SetFillStyle(0);
   ffit3[0]1->SetLineWidth(2);
   ffit3[0]1->SetChisquare(4.264102);
   ffit3[0]1->SetNDF(7);
   ffit3[0]1->GetXaxis()->SetLabelFont(22);
   ffit3[0]1->GetXaxis()->SetLabelSize(0.05);
   ffit3[0]1->GetXaxis()->SetTitleSize(0.9);
   ffit3[0]1->GetXaxis()->SetTitleFont(22);
   ffit3[0]1->GetYaxis()->SetLabelFont(22);
   ffit3[0]1->GetYaxis()->SetLabelSize(0.05);
   ffit3[0]1->GetYaxis()->SetTitleSize(0.06);
   ffit3[0]1->GetYaxis()->SetTitleFont(22);
   ffit3[0]1->SetParameter(0,0.1369125);
   ffit3[0]1->SetParError(0,0.02231351);
   ffit3[0]1->SetParLimits(0,0,0);
   ffit3[0]1->SetParameter(1,0.1007368);
   ffit3[0]1->SetParError(1,0.3064879);
   ffit3[0]1->SetParLimits(1,0,0);
   ffit3[0]1->Draw("same");
   TLatex *   tex = new TLatex(150,0.28,"Q^{2}= 1.40 GeV^{2}");
   tex->SetTextSize(0.075);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_1->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_5
   TPad *c15_5 = new TPad("c15_5", "_5",0,0.3812449,0.2930441,0.6772185);
   c15_5->Draw();
   c15_5->cd();
   c15_5->Range(-135.625,-0.35,375,0.35);
   c15_5->SetFillColor(0);
   c15_5->SetBorderMode(0);
   c15_5->SetBorderSize(2);
   c15_5->SetLeftMargin(0.255814);
   c15_5->SetRightMargin(0);
   c15_5->SetTopMargin(0);
   c15_5->SetBottomMargin(0);
   c15_5->SetFrameBorderMode(0);
   c15_5->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1014[9] = {
   21.0292,
   63.4692,
   95.6929,
   140.397,
   181.375,
   220.006,
   258.595,
   303.097,
   336.934};
   Double_t Graph_fy1014[9] = {
   0.0935609,
   0.069046,
   0.146932,
   0.101784,
   0.0707617,
   -0.0446558,
   -0.114552,
   -0.0977246,
   0.0329543};
   Double_t Graph_fex1014[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1014[9] = {
   0.04427013,
   0.0410166,
   0.03830447,
   0.04977653,
   0.05733764,
   0.05837316,
   0.03931932,
   0.03626988,
   0.05560616};
   gre = new TGraphErrors(9,Graph_fx1014,Graph_fy1014,Graph_fex1014,Graph_fey1014);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1014 = new TH1F("Graph_Graph1014","Graph",100,0,368.5245);
   Graph_Graph1014->SetMinimum(-0.1877821);
   Graph_Graph1014->SetMaximum(0.2191472);
   Graph_Graph1014->SetDirectory(0);
   Graph_Graph1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1014->SetLineColor(ci);
   Graph_Graph1014->GetXaxis()->SetLabelFont(22);
   Graph_Graph1014->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1014->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1014->GetXaxis()->SetTitleFont(22);
   Graph_Graph1014->GetYaxis()->SetLabelFont(22);
   Graph_Graph1014->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1014->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1014->GetYaxis()->SetTitleFont(22);
   Graph_Graph1014->GetZaxis()->SetLabelFont(22);
   Graph_Graph1014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1014->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1014);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{Incoh}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1015[9] = {
   21.0292,
   63.4692,
   95.6929,
   140.397,
   181.375,
   220.006,
   258.595,
   303.097,
   336.934};
   Double_t Graph_fy1015[9] = {
   0.0935609,
   0.069046,
   0.146932,
   0.101784,
   0.0707617,
   -0.0446558,
   -0.114552,
   -0.0977246,
   0.0329543};
   Double_t Graph_fex1015[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1015[9] = {
   0.04427013,
   0.0410166,
   0.03830447,
   0.04977653,
   0.05733764,
   0.05837316,
   0.03931932,
   0.03626988,
   0.05560616};
   gre = new TGraphErrors(9,Graph_fx1015,Graph_fy1015,Graph_fex1015,Graph_fey1015);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10141015 = new TH1F("Graph_Graph_Graph10141015","Graph",100,0,368.5245);
   Graph_Graph_Graph10141015->SetMinimum(-0.1877821);
   Graph_Graph_Graph10141015->SetMaximum(0.2191472);
   Graph_Graph_Graph10141015->SetDirectory(0);
   Graph_Graph_Graph10141015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10141015->SetLineColor(ci);
   Graph_Graph_Graph10141015->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10141015->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10141015->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10141015->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10141015->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10141015->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10141015->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10141015->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10141015->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10141015->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10141015->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10141015->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10141015);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{Incoh}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx17[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy17[13] = {
   0,
   0.01370744,
   0.01370744,
   0.01650861,
   0.02161179,
   0.0149864,
   0.02355567,
   0.01995755,
   0.01836548,
   0.01540446,
   0.01052464,
   0.01052464,
   0};
   graph = new TGraph(13,Graph0_fx17,Graph0_fy17);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","Graph",100,0,396);
   Graph_Graph17->SetMinimum(0);
   Graph_Graph17->SetMaximum(0.02591124);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph17->SetLineColor(ci);
   Graph_Graph17->GetXaxis()->SetLabelFont(22);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph17->GetXaxis()->SetTitleFont(22);
   Graph_Graph17->GetYaxis()->SetLabelFont(22);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph17->GetYaxis()->SetTitleFont(22);
   Graph_Graph17->GetZaxis()->SetLabelFont(22);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph17);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1016[9] = {
   21.0292,
   63.4692,
   95.6929,
   140.397,
   181.375,
   220.006,
   258.595,
   303.097,
   336.934};
   Double_t Graph1_fy1016[9] = {
   0.0935609,
   0.069046,
   0.146932,
   0.101784,
   0.0707617,
   -0.0446558,
   -0.114552,
   -0.0977246,
   0.0329543};
   Double_t Graph1_fex1016[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1016[9] = {
   0.04427013,
   0.0410166,
   0.03830447,
   0.04977653,
   0.05733764,
   0.05837316,
   0.03931932,
   0.03626988,
   0.05560616};
   gre = new TGraphErrors(9,Graph1_fx1016,Graph1_fy1016,Graph1_fex1016,Graph1_fey1016);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph101410151016 = new TH1F("Graph_Graph_Graph_Graph101410151016","Graph",100,0,368.5245);
   Graph_Graph_Graph_Graph101410151016->SetMinimum(-0.1877821);
   Graph_Graph_Graph_Graph101410151016->SetMaximum(0.2191472);
   Graph_Graph_Graph_Graph101410151016->SetDirectory(0);
   Graph_Graph_Graph_Graph101410151016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph101410151016->SetLineColor(ci);
   Graph_Graph_Graph_Graph101410151016->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101410151016->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph101410151016->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph101410151016->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph101410151016->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101410151016->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph101410151016->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph101410151016->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph101410151016->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101410151016->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph101410151016->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph101410151016->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph101410151016);
   
   gre->Draw("p");
   
   TF1 *ffit3[0]2 = new TF1("ffit3[0]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[0]2->SetFillColor(19);
   ffit3[0]2->SetFillStyle(0);
   ffit3[0]2->SetLineWidth(2);
   ffit3[0]2->SetChisquare(6.03555);
   ffit3[0]2->SetNDF(7);
   ffit3[0]2->GetXaxis()->SetLabelFont(22);
   ffit3[0]2->GetXaxis()->SetLabelSize(0.05);
   ffit3[0]2->GetXaxis()->SetTitleSize(0.9);
   ffit3[0]2->GetXaxis()->SetTitleFont(22);
   ffit3[0]2->GetYaxis()->SetLabelFont(22);
   ffit3[0]2->GetYaxis()->SetLabelSize(0.05);
   ffit3[0]2->GetYaxis()->SetTitleSize(0.06);
   ffit3[0]2->GetYaxis()->SetTitleFont(22);
   ffit3[0]2->SetParameter(0,0.1173831);
   ffit3[0]2->SetParError(0,0.02119542);
   ffit3[0]2->SetParLimits(0,0,0);
   ffit3[0]2->SetParameter(1,0.1646721);
   ffit3[0]2->SetParError(1,0.3558438);
   ffit3[0]2->SetParLimits(1,0,0);
   ffit3[0]2->Draw("same");
      tex = new TLatex(150,0.28,"x_{B}= 0.16");
   tex->SetTextSize(0.075);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_5->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_9
   TPad *c15_9 = new TPad("c15_9", "_9",0,0,0.2930441,0.3812449);
   c15_9->Draw();
   c15_9->cd();
   c15_9->Range(-135.625,-0.590625,375,0.35);
   c15_9->SetFillColor(0);
   c15_9->SetBorderMode(0);
   c15_9->SetBorderSize(2);
   c15_9->SetLeftMargin(0.255814);
   c15_9->SetRightMargin(0);
   c15_9->SetTopMargin(0);
   c15_9->SetBottomMargin(0.255814);
   c15_9->SetFrameBorderMode(0);
   c15_9->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1017[9] = {
   21.6172,
   60.6417,
   96.3343,
   141.949,
   179.841,
   220.731,
   259.617,
   303.331,
   337.559};
   Double_t Graph_fy1017[9] = {
   0.119739,
   0.0273341,
   0.218908,
   0.150239,
   0.0083556,
   -0.118534,
   -0.204106,
   -0.160578,
   -0.0493151};
   Double_t Graph_fex1017[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1017[9] = {
   0.03437609,
   0.03702905,
   0.03677285,
   0.0474842,
   0.06530671,
   0.06279693,
   0.0383344,
   0.03433392,
   0.04583638};
   gre = new TGraphErrors(9,Graph_fx1017,Graph_fy1017,Graph_fex1017,Graph_fey1017);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,0,369.1532);
   Graph_Graph1017->SetMinimum(-0.2922525);
   Graph_Graph1017->SetMaximum(0.305493);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1017->SetLineColor(ci);
   Graph_Graph1017->GetXaxis()->SetLabelFont(22);
   Graph_Graph1017->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1017->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1017->GetXaxis()->SetTitleFont(22);
   Graph_Graph1017->GetYaxis()->SetLabelFont(22);
   Graph_Graph1017->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1017->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1017->GetYaxis()->SetTitleFont(22);
   Graph_Graph1017->GetZaxis()->SetLabelFont(22);
   Graph_Graph1017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1017->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1017);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.06);
   multigraph->GetXaxis()->SetTitleSize(0.11);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{Incoh}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.06);
   multigraph->GetYaxis()->SetTitleSize(0.11);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1018[9] = {
   21.6172,
   60.6417,
   96.3343,
   141.949,
   179.841,
   220.731,
   259.617,
   303.331,
   337.559};
   Double_t Graph_fy1018[9] = {
   0.119739,
   0.0273341,
   0.218908,
   0.150239,
   0.0083556,
   -0.118534,
   -0.204106,
   -0.160578,
   -0.0493151};
   Double_t Graph_fex1018[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1018[9] = {
   0.03437609,
   0.03702905,
   0.03677285,
   0.0474842,
   0.06530671,
   0.06279693,
   0.0383344,
   0.03433392,
   0.04583638};
   gre = new TGraphErrors(9,Graph_fx1018,Graph_fy1018,Graph_fex1018,Graph_fey1018);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10171018 = new TH1F("Graph_Graph_Graph10171018","Graph",100,0,369.1532);
   Graph_Graph_Graph10171018->SetMinimum(-0.2922525);
   Graph_Graph_Graph10171018->SetMaximum(0.305493);
   Graph_Graph_Graph10171018->SetDirectory(0);
   Graph_Graph_Graph10171018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10171018->SetLineColor(ci);
   Graph_Graph_Graph10171018->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10171018->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10171018->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10171018->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10171018->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10171018->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10171018->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10171018->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10171018->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10171018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10171018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10171018->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10171018);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.06);
   multigraph->GetXaxis()->SetTitleSize(0.11);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetTitle("A_{LU}^{Incoh}");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.06);
   multigraph->GetYaxis()->SetTitleSize(0.11);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx18[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy18[13] = {
   0,
   0.01351939,
   0.01351939,
   0.01909704,
   0.01794958,
   0.0263301,
   0.01504234,
   0.01820953,
   0.01958999,
   0.0137369,
   0.01004524,
   0.01004524,
   0};
   graph = new TGraph(13,Graph0_fx18,Graph0_fy18);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","Graph",100,0,396);
   Graph_Graph18->SetMinimum(0);
   Graph_Graph18->SetMaximum(0.02896311);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetLabelFont(22);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph18->GetXaxis()->SetTitleFont(22);
   Graph_Graph18->GetYaxis()->SetLabelFont(22);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph18->GetYaxis()->SetTitleFont(22);
   Graph_Graph18->GetZaxis()->SetLabelFont(22);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph18);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1019[9] = {
   21.6172,
   60.6417,
   96.3343,
   141.949,
   179.841,
   220.731,
   259.617,
   303.331,
   337.559};
   Double_t Graph1_fy1019[9] = {
   0.119739,
   0.0273341,
   0.218908,
   0.150239,
   0.0083556,
   -0.118534,
   -0.204106,
   -0.160578,
   -0.0493151};
   Double_t Graph1_fex1019[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1019[9] = {
   0.03437609,
   0.03702905,
   0.03677285,
   0.0474842,
   0.06530671,
   0.06279693,
   0.0383344,
   0.03433392,
   0.04583638};
   gre = new TGraphErrors(9,Graph1_fx1019,Graph1_fy1019,Graph1_fex1019,Graph1_fey1019);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph101710181019 = new TH1F("Graph_Graph_Graph_Graph101710181019","Graph",100,0,369.1532);
   Graph_Graph_Graph_Graph101710181019->SetMinimum(-0.2922525);
   Graph_Graph_Graph_Graph101710181019->SetMaximum(0.305493);
   Graph_Graph_Graph_Graph101710181019->SetDirectory(0);
   Graph_Graph_Graph_Graph101710181019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph101710181019->SetLineColor(ci);
   Graph_Graph_Graph_Graph101710181019->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101710181019->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph101710181019->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph101710181019->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph101710181019->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101710181019->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph101710181019->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph101710181019->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph101710181019->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph101710181019->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph101710181019->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph101710181019->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph101710181019);
   
   gre->Draw("p");
   
   TF1 *ffit3[0]3 = new TF1("ffit3[0]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[0]3->SetFillColor(19);
   ffit3[0]3->SetFillStyle(0);
   ffit3[0]3->SetLineWidth(2);
   ffit3[0]3->SetChisquare(12.08614);
   ffit3[0]3->SetNDF(7);
   ffit3[0]3->GetXaxis()->SetLabelFont(22);
   ffit3[0]3->GetXaxis()->SetLabelSize(0.05);
   ffit3[0]3->GetXaxis()->SetTitleSize(0.9);
   ffit3[0]3->GetXaxis()->SetTitleFont(22);
   ffit3[0]3->GetYaxis()->SetLabelFont(22);
   ffit3[0]3->GetYaxis()->SetLabelSize(0.05);
   ffit3[0]3->GetYaxis()->SetTitleSize(0.06);
   ffit3[0]3->GetYaxis()->SetTitleFont(22);
   ffit3[0]3->SetParameter(0,0.1828399);
   ffit3[0]3->SetParError(0,0.02059014);
   ffit3[0]3->SetParLimits(0,0,0);
   ffit3[0]3->SetParameter(1,0.3115395);
   ffit3[0]3->SetParError(1,0.2105503);
   ffit3[0]3->SetParLimits(1,0,0);
   ffit3[0]3->Draw("same");
      tex = new TLatex(150,0.28,"-t= 0.14 GeV^{2}");
   tex->SetTextSize(0.075);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_9->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_2
   TPad *c15_2 = new TPad("c15_2", "_2",0.2930441,0.6772185,0.5221347,0.973192);
   c15_2->Draw();
   c15_2->cd();
   c15_2->Range(-5,-0.35,375,0.35);
   c15_2->SetFillColor(0);
   c15_2->SetBorderMode(0);
   c15_2->SetBorderSize(2);
   c15_2->SetLeftMargin(0);
   c15_2->SetRightMargin(0);
   c15_2->SetTopMargin(0);
   c15_2->SetBottomMargin(0);
   c15_2->SetFrameBorderMode(0);
   c15_2->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1020[9] = {
   20.3394,
   60.5637,
   95.8534,
   140.912,
   179.702,
   221.587,
   260.324,
   303.519,
   338.251};
   Double_t Graph_fy1020[9] = {
   0.0143136,
   0.0668715,
   0.1297,
   0.165157,
   0.158901,
   -0.259499,
   -0.128042,
   -0.176261,
   -0.0303902};
   Double_t Graph_fex1020[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1020[9] = {
   0.03330793,
   0.0432329,
   0.04803473,
   0.07169711,
   0.08827649,
   0.06844084,
   0.05299145,
   0.03322327,
   0.04329049};
   gre = new TGraphErrors(9,Graph_fx1020,Graph_fy1020,Graph_fex1020,Graph_fey1020);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1020 = new TH1F("Graph_Graph1020","Graph",100,0,370.0422);
   Graph_Graph1020->SetMinimum(-0.3854516);
   Graph_Graph1020->SetMaximum(0.3046892);
   Graph_Graph1020->SetDirectory(0);
   Graph_Graph1020->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1020->SetLineColor(ci);
   Graph_Graph1020->GetXaxis()->SetLabelFont(22);
   Graph_Graph1020->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1020->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1020->GetXaxis()->SetTitleFont(22);
   Graph_Graph1020->GetYaxis()->SetLabelFont(22);
   Graph_Graph1020->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1020->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1020->GetYaxis()->SetTitleFont(22);
   Graph_Graph1020->GetZaxis()->SetLabelFont(22);
   Graph_Graph1020->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1020->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1020);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1021[9] = {
   20.3394,
   60.5637,
   95.8534,
   140.912,
   179.702,
   221.587,
   260.324,
   303.519,
   338.251};
   Double_t Graph_fy1021[9] = {
   0.0143136,
   0.0668715,
   0.1297,
   0.165157,
   0.158901,
   -0.259499,
   -0.128042,
   -0.176261,
   -0.0303902};
   Double_t Graph_fex1021[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1021[9] = {
   0.03330793,
   0.0432329,
   0.04803473,
   0.07169711,
   0.08827649,
   0.06844084,
   0.05299145,
   0.03322327,
   0.04329049};
   gre = new TGraphErrors(9,Graph_fx1021,Graph_fy1021,Graph_fex1021,Graph_fey1021);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10201021 = new TH1F("Graph_Graph_Graph10201021","Graph",100,0,370.0422);
   Graph_Graph_Graph10201021->SetMinimum(-0.3854516);
   Graph_Graph_Graph10201021->SetMaximum(0.3046892);
   Graph_Graph_Graph10201021->SetDirectory(0);
   Graph_Graph_Graph10201021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10201021->SetLineColor(ci);
   Graph_Graph_Graph10201021->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10201021->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10201021->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10201021->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10201021->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10201021->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10201021->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10201021->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10201021->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10201021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10201021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10201021->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10201021);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx19[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy19[13] = {
   0,
   0.01248254,
   0.01248254,
   0.01698339,
   0.02021609,
   0.02858216,
   0.01464961,
   0.04304848,
   0.01808374,
   0.0198082,
   0.01138369,
   0.01138369,
   0};
   graph = new TGraph(13,Graph0_fx19,Graph0_fy19);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","Graph",100,0,396);
   Graph_Graph19->SetMinimum(0);
   Graph_Graph19->SetMaximum(0.04735333);
   Graph_Graph19->SetDirectory(0);
   Graph_Graph19->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph19->SetLineColor(ci);
   Graph_Graph19->GetXaxis()->SetLabelFont(22);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph19->GetXaxis()->SetTitleFont(22);
   Graph_Graph19->GetYaxis()->SetLabelFont(22);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph19->GetYaxis()->SetTitleFont(22);
   Graph_Graph19->GetZaxis()->SetLabelFont(22);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph19);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1022[9] = {
   20.3394,
   60.5637,
   95.8534,
   140.912,
   179.702,
   221.587,
   260.324,
   303.519,
   338.251};
   Double_t Graph1_fy1022[9] = {
   0.0143136,
   0.0668715,
   0.1297,
   0.165157,
   0.158901,
   -0.259499,
   -0.128042,
   -0.176261,
   -0.0303902};
   Double_t Graph1_fex1022[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1022[9] = {
   0.03330793,
   0.0432329,
   0.04803473,
   0.07169711,
   0.08827649,
   0.06844084,
   0.05299145,
   0.03322327,
   0.04329049};
   gre = new TGraphErrors(9,Graph1_fx1022,Graph1_fy1022,Graph1_fex1022,Graph1_fey1022);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph102010211022 = new TH1F("Graph_Graph_Graph_Graph102010211022","Graph",100,0,370.0422);
   Graph_Graph_Graph_Graph102010211022->SetMinimum(-0.3854516);
   Graph_Graph_Graph_Graph102010211022->SetMaximum(0.3046892);
   Graph_Graph_Graph_Graph102010211022->SetDirectory(0);
   Graph_Graph_Graph_Graph102010211022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph102010211022->SetLineColor(ci);
   Graph_Graph_Graph_Graph102010211022->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102010211022->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102010211022->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph102010211022->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph102010211022->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102010211022->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102010211022->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph102010211022->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph102010211022->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102010211022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph102010211022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph102010211022->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph102010211022);
   
   gre->Draw("p");
   
   TF1 *ffit3[1]4 = new TF1("ffit3[1]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[1]4->SetFillColor(19);
   ffit3[1]4->SetFillStyle(0);
   ffit3[1]4->SetLineWidth(2);
   ffit3[1]4->SetChisquare(10.05644);
   ffit3[1]4->SetNDF(7);
   ffit3[1]4->GetXaxis()->SetLabelFont(22);
   ffit3[1]4->GetXaxis()->SetLabelSize(0.05);
   ffit3[1]4->GetXaxis()->SetTitleSize(0.9);
   ffit3[1]4->GetXaxis()->SetTitleFont(22);
   ffit3[1]4->GetYaxis()->SetLabelFont(22);
   ffit3[1]4->GetYaxis()->SetLabelSize(0.05);
   ffit3[1]4->GetYaxis()->SetTitleSize(0.06);
   ffit3[1]4->GetYaxis()->SetTitleFont(22);
   ffit3[1]4->SetParameter(0,0.1529735);
   ffit3[1]4->SetParError(0,0.02669034);
   ffit3[1]4->SetParLimits(0,0,0);
   ffit3[1]4->SetParameter(1,0.6325542);
   ffit3[1]4->SetParError(1,0.2419595);
   ffit3[1]4->SetParLimits(1,0,0);
   ffit3[1]4->Draw("same");
      tex = new TLatex(150,0.28,"Q^{2}= 1.89 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_2->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_6
   TPad *c15_6 = new TPad("c15_6", "_6",0.2930441,0.3812449,0.5221347,0.6772185);
   c15_6->Draw();
   c15_6->cd();
   c15_6->Range(-5,-0.35,375,0.35);
   c15_6->SetFillColor(0);
   c15_6->SetBorderMode(0);
   c15_6->SetBorderSize(2);
   c15_6->SetLeftMargin(0);
   c15_6->SetRightMargin(0);
   c15_6->SetTopMargin(0);
   c15_6->SetBottomMargin(0);
   c15_6->SetFrameBorderMode(0);
   c15_6->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1023[9] = {
   21.5707,
   60.3334,
   96.0236,
   141.231,
   181.58,
   223.194,
   260.238,
   303.052,
   336.827};
   Double_t Graph_fy1023[9] = {
   0.00168223,
   0.0556875,
   0.168196,
   0.142284,
   0.167247,
   -0.261953,
   -0.184596,
   -0.196259,
   -0.0410711};
   Double_t Graph_fex1023[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1023[9] = {
   0.03604159,
   0.04113707,
   0.04602217,
   0.07486049,
   0.09429085,
   0.07542861,
   0.04641079,
   0.03039688,
   0.04440241};
   gre = new TGraphErrors(9,Graph_fx1023,Graph_fy1023,Graph_fex1023,Graph_fey1023);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1023 = new TH1F("Graph_Graph1023","Graph",100,0,368.3526);
   Graph_Graph1023->SetMinimum(-0.3972736);
   Graph_Graph1023->SetMaximum(0.3214298);
   Graph_Graph1023->SetDirectory(0);
   Graph_Graph1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1023->SetLineColor(ci);
   Graph_Graph1023->GetXaxis()->SetLabelFont(22);
   Graph_Graph1023->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1023->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1023->GetXaxis()->SetTitleFont(22);
   Graph_Graph1023->GetYaxis()->SetLabelFont(22);
   Graph_Graph1023->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1023->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1023->GetYaxis()->SetTitleFont(22);
   Graph_Graph1023->GetZaxis()->SetLabelFont(22);
   Graph_Graph1023->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1023->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1023);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1024[9] = {
   21.5707,
   60.3334,
   96.0236,
   141.231,
   181.58,
   223.194,
   260.238,
   303.052,
   336.827};
   Double_t Graph_fy1024[9] = {
   0.00168223,
   0.0556875,
   0.168196,
   0.142284,
   0.167247,
   -0.261953,
   -0.184596,
   -0.196259,
   -0.0410711};
   Double_t Graph_fex1024[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1024[9] = {
   0.03604159,
   0.04113707,
   0.04602217,
   0.07486049,
   0.09429085,
   0.07542861,
   0.04641079,
   0.03039688,
   0.04440241};
   gre = new TGraphErrors(9,Graph_fx1024,Graph_fy1024,Graph_fex1024,Graph_fey1024);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10231024 = new TH1F("Graph_Graph_Graph10231024","Graph",100,0,368.3526);
   Graph_Graph_Graph10231024->SetMinimum(-0.3972736);
   Graph_Graph_Graph10231024->SetMaximum(0.3214298);
   Graph_Graph_Graph10231024->SetDirectory(0);
   Graph_Graph_Graph10231024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10231024->SetLineColor(ci);
   Graph_Graph_Graph10231024->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10231024->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10231024->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10231024->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10231024->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10231024->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10231024->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10231024->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10231024->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10231024->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10231024->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10231024->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10231024);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx20[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy20[13] = {
   0,
   0.01311819,
   0.01311819,
   0.01610652,
   0.01838518,
   0.0246086,
   0.01655364,
   0.03431685,
   0.02278749,
   0.02067598,
   0.01008997,
   0.01008997,
   0};
   graph = new TGraph(13,Graph0_fx20,Graph0_fy20);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","Graph",100,0,396);
   Graph_Graph20->SetMinimum(0);
   Graph_Graph20->SetMaximum(0.03774853);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph20->SetLineColor(ci);
   Graph_Graph20->GetXaxis()->SetLabelFont(22);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph20->GetXaxis()->SetTitleFont(22);
   Graph_Graph20->GetYaxis()->SetLabelFont(22);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph20->GetYaxis()->SetTitleFont(22);
   Graph_Graph20->GetZaxis()->SetLabelFont(22);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph20);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1025[9] = {
   21.5707,
   60.3334,
   96.0236,
   141.231,
   181.58,
   223.194,
   260.238,
   303.052,
   336.827};
   Double_t Graph1_fy1025[9] = {
   0.00168223,
   0.0556875,
   0.168196,
   0.142284,
   0.167247,
   -0.261953,
   -0.184596,
   -0.196259,
   -0.0410711};
   Double_t Graph1_fex1025[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1025[9] = {
   0.03604159,
   0.04113707,
   0.04602217,
   0.07486049,
   0.09429085,
   0.07542861,
   0.04641079,
   0.03039688,
   0.04440241};
   gre = new TGraphErrors(9,Graph1_fx1025,Graph1_fy1025,Graph1_fex1025,Graph1_fey1025);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph102310241025 = new TH1F("Graph_Graph_Graph_Graph102310241025","Graph",100,0,368.3526);
   Graph_Graph_Graph_Graph102310241025->SetMinimum(-0.3972736);
   Graph_Graph_Graph_Graph102310241025->SetMaximum(0.3214298);
   Graph_Graph_Graph_Graph102310241025->SetDirectory(0);
   Graph_Graph_Graph_Graph102310241025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph102310241025->SetLineColor(ci);
   Graph_Graph_Graph_Graph102310241025->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102310241025->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102310241025->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph102310241025->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph102310241025->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102310241025->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102310241025->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph102310241025->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph102310241025->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102310241025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph102310241025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph102310241025->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph102310241025);
   
   gre->Draw("p");
   
   TF1 *ffit3[1]5 = new TF1("ffit3[1]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[1]5->SetFillColor(19);
   ffit3[1]5->SetFillStyle(0);
   ffit3[1]5->SetLineWidth(2);
   ffit3[1]5->SetChisquare(12.79548);
   ffit3[1]5->SetNDF(7);
   ffit3[1]5->GetXaxis()->SetLabelFont(22);
   ffit3[1]5->GetXaxis()->SetLabelSize(0.05);
   ffit3[1]5->GetXaxis()->SetTitleSize(0.9);
   ffit3[1]5->GetXaxis()->SetTitleFont(22);
   ffit3[1]5->GetYaxis()->SetLabelFont(22);
   ffit3[1]5->GetYaxis()->SetLabelSize(0.05);
   ffit3[1]5->GetYaxis()->SetTitleSize(0.06);
   ffit3[1]5->GetYaxis()->SetTitleFont(22);
   ffit3[1]5->SetParameter(0,0.1772283);
   ffit3[1]5->SetParError(0,0.02375443);
   ffit3[1]5->SetParLimits(0,0,0);
   ffit3[1]5->SetParameter(1,0.4948616);
   ffit3[1]5->SetParError(1,0.2298558);
   ffit3[1]5->SetParLimits(1,0,0);
   ffit3[1]5->Draw("same");
      tex = new TLatex(150,0.28,"x_{B}= 0.23");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_6->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_10
   TPad *c15_10 = new TPad("c15_10", "_10",0.2930441,0,0.5221347,0.3812449);
   c15_10->Draw();
   c15_10->cd();
   c15_10->Range(-5,-0.590625,375,0.35);
   c15_10->SetFillColor(0);
   c15_10->SetBorderMode(0);
   c15_10->SetBorderSize(2);
   c15_10->SetLeftMargin(0);
   c15_10->SetRightMargin(0);
   c15_10->SetTopMargin(0);
   c15_10->SetBottomMargin(0.255814);
   c15_10->SetFrameBorderMode(0);
   c15_10->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1026[9] = {
   21.4234,
   60.9033,
   95.7406,
   139.302,
   183.364,
   222.896,
   259.334,
   302.26,
   337.884};
   Double_t Graph_fy1026[9] = {
   0.0356002,
   0.0927705,
   0.148821,
   0.111261,
   0.105294,
   -0.0744819,
   -0.0912139,
   -0.200476,
   -0.104155};
   Double_t Graph_fex1026[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1026[9] = {
   0.03786824,
   0.04372138,
   0.03831487,
   0.07107809,
   0.0884131,
   0.07377081,
   0.04876286,
   0.03009551,
   0.04365321};
   gre = new TGraphErrors(9,Graph_fx1026,Graph_fy1026,Graph_fex1026,Graph_fey1026);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1026 = new TH1F("Graph_Graph1026","Graph",100,0,369.5301);
   Graph_Graph1026->SetMinimum(-0.2729994);
   Graph_Graph1026->SetMaximum(0.236135);
   Graph_Graph1026->SetDirectory(0);
   Graph_Graph1026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1026->SetLineColor(ci);
   Graph_Graph1026->GetXaxis()->SetLabelFont(22);
   Graph_Graph1026->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1026->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1026->GetXaxis()->SetTitleFont(22);
   Graph_Graph1026->GetYaxis()->SetLabelFont(22);
   Graph_Graph1026->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1026->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1026->GetYaxis()->SetTitleFont(22);
   Graph_Graph1026->GetZaxis()->SetLabelFont(22);
   Graph_Graph1026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1026->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1026);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1027[9] = {
   21.4234,
   60.9033,
   95.7406,
   139.302,
   183.364,
   222.896,
   259.334,
   302.26,
   337.884};
   Double_t Graph_fy1027[9] = {
   0.0356002,
   0.0927705,
   0.148821,
   0.111261,
   0.105294,
   -0.0744819,
   -0.0912139,
   -0.200476,
   -0.104155};
   Double_t Graph_fex1027[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1027[9] = {
   0.03786824,
   0.04372138,
   0.03831487,
   0.07107809,
   0.0884131,
   0.07377081,
   0.04876286,
   0.03009551,
   0.04365321};
   gre = new TGraphErrors(9,Graph_fx1027,Graph_fy1027,Graph_fex1027,Graph_fey1027);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10261027 = new TH1F("Graph_Graph_Graph10261027","Graph",100,0,369.5301);
   Graph_Graph_Graph10261027->SetMinimum(-0.2729994);
   Graph_Graph_Graph10261027->SetMaximum(0.236135);
   Graph_Graph_Graph10261027->SetDirectory(0);
   Graph_Graph_Graph10261027->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10261027->SetLineColor(ci);
   Graph_Graph_Graph10261027->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10261027->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10261027->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10261027->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10261027->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10261027->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10261027->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10261027->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10261027->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10261027->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10261027->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10261027->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10261027);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx21[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy21[13] = {
   0,
   0.01312656,
   0.01312656,
   0.01251867,
   0.03380763,
   0.0178829,
   0.0298368,
   0.01834677,
   0.02535689,
   0.02481545,
   0.01711214,
   0.01711214,
   0};
   graph = new TGraph(13,Graph0_fx21,Graph0_fy21);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Graph",100,0,396);
   Graph_Graph21->SetMinimum(0);
   Graph_Graph21->SetMaximum(0.03718839);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetLabelFont(22);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph21->GetXaxis()->SetTitleFont(22);
   Graph_Graph21->GetYaxis()->SetLabelFont(22);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph21->GetYaxis()->SetTitleFont(22);
   Graph_Graph21->GetZaxis()->SetLabelFont(22);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph21);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1028[9] = {
   21.4234,
   60.9033,
   95.7406,
   139.302,
   183.364,
   222.896,
   259.334,
   302.26,
   337.884};
   Double_t Graph1_fy1028[9] = {
   0.0356002,
   0.0927705,
   0.148821,
   0.111261,
   0.105294,
   -0.0744819,
   -0.0912139,
   -0.200476,
   -0.104155};
   Double_t Graph1_fex1028[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1028[9] = {
   0.03786824,
   0.04372138,
   0.03831487,
   0.07107809,
   0.0884131,
   0.07377081,
   0.04876286,
   0.03009551,
   0.04365321};
   gre = new TGraphErrors(9,Graph1_fx1028,Graph1_fy1028,Graph1_fex1028,Graph1_fey1028);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph102610271028 = new TH1F("Graph_Graph_Graph_Graph102610271028","Graph",100,0,369.5301);
   Graph_Graph_Graph_Graph102610271028->SetMinimum(-0.2729994);
   Graph_Graph_Graph_Graph102610271028->SetMaximum(0.236135);
   Graph_Graph_Graph_Graph102610271028->SetDirectory(0);
   Graph_Graph_Graph_Graph102610271028->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph102610271028->SetLineColor(ci);
   Graph_Graph_Graph_Graph102610271028->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102610271028->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102610271028->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph102610271028->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph102610271028->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102610271028->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102610271028->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph102610271028->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph102610271028->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102610271028->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph102610271028->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph102610271028->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph102610271028);
   
   gre->Draw("p");
   
   TF1 *ffit3[1]6 = new TF1("ffit3[1]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[1]6->SetFillColor(19);
   ffit3[1]6->SetFillStyle(0);
   ffit3[1]6->SetLineWidth(2);
   ffit3[1]6->SetChisquare(6.972873);
   ffit3[1]6->SetNDF(7);
   ffit3[1]6->GetXaxis()->SetLabelFont(22);
   ffit3[1]6->GetXaxis()->SetLabelSize(0.05);
   ffit3[1]6->GetXaxis()->SetTitleSize(0.9);
   ffit3[1]6->GetXaxis()->SetTitleFont(22);
   ffit3[1]6->GetYaxis()->SetLabelFont(22);
   ffit3[1]6->GetYaxis()->SetLabelSize(0.05);
   ffit3[1]6->GetYaxis()->SetTitleSize(0.06);
   ffit3[1]6->GetYaxis()->SetTitleFont(22);
   ffit3[1]6->SetParameter(0,0.1408025);
   ffit3[1]6->SetParError(0,0.02724702);
   ffit3[1]6->SetParLimits(0,0,0);
   ffit3[1]6->SetParameter(1,-0.3337189);
   ffit3[1]6->SetParError(1,0.2730948);
   ffit3[1]6->SetParLimits(1,0,0);
   ffit3[1]6->Draw("same");
      tex = new TLatex(150,0.28,"-t= 0.28 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_10->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_3
   TPad *c15_3 = new TPad("c15_3", "_3",0.5221347,0.6772185,0.7512253,0.973192);
   c15_3->Draw();
   c15_3->cd();
   c15_3->Range(-5,-0.35,375,0.35);
   c15_3->SetFillColor(0);
   c15_3->SetBorderMode(0);
   c15_3->SetBorderSize(2);
   c15_3->SetLeftMargin(0);
   c15_3->SetRightMargin(0);
   c15_3->SetTopMargin(0);
   c15_3->SetBottomMargin(0);
   c15_3->SetFrameBorderMode(0);
   c15_3->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1029[9] = {
   20.8719,
   58.2633,
   94.7724,
   140.992,
   181.818,
   225.005,
   261.002,
   303.053,
   338.714};
   Double_t Graph_fy1029[9] = {
   0.0740957,
   0.135994,
   0.183645,
   -0.0178178,
   0.0922509,
   -0.0751544,
   -0.243995,
   -0.197792,
   -0.088943};
   Double_t Graph_fex1029[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1029[9] = {
   0.03016185,
   0.04477074,
   0.0539839,
   0.09949507,
   0.1308389,
   0.1045088,
   0.05457939,
   0.03530168,
   0.03701206};
   gre = new TGraphErrors(9,Graph_fx1029,Graph_fy1029,Graph_fex1029,Graph_fey1029);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1029 = new TH1F("Graph_Graph1029","Graph",100,0,370.4982);
   Graph_Graph1029->SetMinimum(-0.3521947);
   Graph_Graph1029->SetMaximum(0.2912492);
   Graph_Graph1029->SetDirectory(0);
   Graph_Graph1029->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1029->SetLineColor(ci);
   Graph_Graph1029->GetXaxis()->SetLabelFont(22);
   Graph_Graph1029->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1029->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1029->GetXaxis()->SetTitleFont(22);
   Graph_Graph1029->GetYaxis()->SetLabelFont(22);
   Graph_Graph1029->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1029->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1029->GetYaxis()->SetTitleFont(22);
   Graph_Graph1029->GetZaxis()->SetLabelFont(22);
   Graph_Graph1029->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1029->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1029);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1030[9] = {
   20.8719,
   58.2633,
   94.7724,
   140.992,
   181.818,
   225.005,
   261.002,
   303.053,
   338.714};
   Double_t Graph_fy1030[9] = {
   0.0740957,
   0.135994,
   0.183645,
   -0.0178178,
   0.0922509,
   -0.0751544,
   -0.243995,
   -0.197792,
   -0.088943};
   Double_t Graph_fex1030[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1030[9] = {
   0.03016185,
   0.04477074,
   0.0539839,
   0.09949507,
   0.1308389,
   0.1045088,
   0.05457939,
   0.03530168,
   0.03701206};
   gre = new TGraphErrors(9,Graph_fx1030,Graph_fy1030,Graph_fex1030,Graph_fey1030);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10291030 = new TH1F("Graph_Graph_Graph10291030","Graph",100,0,370.4982);
   Graph_Graph_Graph10291030->SetMinimum(-0.3521947);
   Graph_Graph_Graph10291030->SetMaximum(0.2912492);
   Graph_Graph_Graph10291030->SetDirectory(0);
   Graph_Graph_Graph10291030->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10291030->SetLineColor(ci);
   Graph_Graph_Graph10291030->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10291030->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10291030->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10291030->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10291030->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10291030->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10291030->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10291030->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10291030->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10291030->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10291030->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10291030->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10291030);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx22[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy22[13] = {
   0,
   0.01350604,
   0.01350604,
   0.01010521,
   0.01766097,
   0.01618568,
   0.02363223,
   0.02122811,
   0.02419026,
   0.01534961,
   0.01450792,
   0.01450792,
   0};
   graph = new TGraph(13,Graph0_fx22,Graph0_fy22);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Graph",100,0,396);
   Graph_Graph22->SetMinimum(0);
   Graph_Graph22->SetMaximum(0.02660929);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetLabelFont(22);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph22->GetXaxis()->SetTitleFont(22);
   Graph_Graph22->GetYaxis()->SetLabelFont(22);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph22->GetYaxis()->SetTitleFont(22);
   Graph_Graph22->GetZaxis()->SetLabelFont(22);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1031[9] = {
   20.8719,
   58.2633,
   94.7724,
   140.992,
   181.818,
   225.005,
   261.002,
   303.053,
   338.714};
   Double_t Graph1_fy1031[9] = {
   0.0740957,
   0.135994,
   0.183645,
   -0.0178178,
   0.0922509,
   -0.0751544,
   -0.243995,
   -0.197792,
   -0.088943};
   Double_t Graph1_fex1031[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1031[9] = {
   0.03016185,
   0.04477074,
   0.0539839,
   0.09949507,
   0.1308389,
   0.1045088,
   0.05457939,
   0.03530168,
   0.03701206};
   gre = new TGraphErrors(9,Graph1_fx1031,Graph1_fy1031,Graph1_fex1031,Graph1_fey1031);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph102910301031 = new TH1F("Graph_Graph_Graph_Graph102910301031","Graph",100,0,370.4982);
   Graph_Graph_Graph_Graph102910301031->SetMinimum(-0.3521947);
   Graph_Graph_Graph_Graph102910301031->SetMaximum(0.2912492);
   Graph_Graph_Graph_Graph102910301031->SetDirectory(0);
   Graph_Graph_Graph_Graph102910301031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph102910301031->SetLineColor(ci);
   Graph_Graph_Graph_Graph102910301031->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102910301031->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102910301031->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph102910301031->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph102910301031->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102910301031->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph102910301031->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph102910301031->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph102910301031->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph102910301031->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph102910301031->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph102910301031->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph102910301031);
   
   gre->Draw("p");
   
   TF1 *ffit3[2]7 = new TF1("ffit3[2]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[2]7->SetFillColor(19);
   ffit3[2]7->SetFillStyle(0);
   ffit3[2]7->SetLineWidth(2);
   ffit3[2]7->SetChisquare(4.474757);
   ffit3[2]7->SetNDF(7);
   ffit3[2]7->GetXaxis()->SetLabelFont(22);
   ffit3[2]7->GetXaxis()->SetLabelSize(0.05);
   ffit3[2]7->GetXaxis()->SetTitleSize(0.9);
   ffit3[2]7->GetXaxis()->SetTitleFont(22);
   ffit3[2]7->GetYaxis()->SetLabelFont(22);
   ffit3[2]7->GetYaxis()->SetLabelSize(0.05);
   ffit3[2]7->GetYaxis()->SetTitleSize(0.06);
   ffit3[2]7->GetYaxis()->SetTitleFont(22);
   ffit3[2]7->SetParameter(0,0.1902217);
   ffit3[2]7->SetParError(0,0.02997842);
   ffit3[2]7->SetParLimits(0,0,0);
   ffit3[2]7->SetParameter(1,-0.1731872);
   ffit3[2]7->SetParError(1,0.2422567);
   ffit3[2]7->SetParLimits(1,0,0);
   ffit3[2]7->Draw("same");
      tex = new TLatex(150,0.28,"Q^{2}= 2.34 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_3->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_7
   TPad *c15_7 = new TPad("c15_7", "_7",0.5221347,0.3812449,0.7512253,0.6772185);
   c15_7->Draw();
   c15_7->cd();
   c15_7->Range(-5,-0.35,375,0.35);
   c15_7->SetFillColor(0);
   c15_7->SetBorderMode(0);
   c15_7->SetBorderSize(2);
   c15_7->SetLeftMargin(0);
   c15_7->SetRightMargin(0);
   c15_7->SetTopMargin(0);
   c15_7->SetBottomMargin(0);
   c15_7->SetFrameBorderMode(0);
   c15_7->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1032[9] = {
   20.932,
   59.2374,
   94.1598,
   139.361,
   180.783,
   225.241,
   261.492,
   303.364,
   338.4};
   Double_t Graph_fy1032[9] = {
   0.0687662,
   0.12426,
   0.164812,
   0.111834,
   -0.194384,
   0.00814545,
   -0.241685,
   -0.171277,
   -0.0649575};
   Double_t Graph_fex1032[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1032[9] = {
   0.02598983,
   0.04125348,
   0.0551761,
   0.1075913,
   0.1538771,
   0.110039,
   0.06013732,
   0.03304878,
   0.03933394};
   gre = new TGraphErrors(9,Graph_fx1032,Graph_fy1032,Graph_fex1032,Graph_fey1032);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1032 = new TH1F("Graph_Graph1032","Graph",100,0,370.1468);
   Graph_Graph1032->SetMinimum(-0.405086);
   Graph_Graph1032->SetMaximum(0.276813);
   Graph_Graph1032->SetDirectory(0);
   Graph_Graph1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1032->SetLineColor(ci);
   Graph_Graph1032->GetXaxis()->SetLabelFont(22);
   Graph_Graph1032->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1032->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1032->GetXaxis()->SetTitleFont(22);
   Graph_Graph1032->GetYaxis()->SetLabelFont(22);
   Graph_Graph1032->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1032->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1032->GetYaxis()->SetTitleFont(22);
   Graph_Graph1032->GetZaxis()->SetLabelFont(22);
   Graph_Graph1032->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1032->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1032);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1033[9] = {
   20.932,
   59.2374,
   94.1598,
   139.361,
   180.783,
   225.241,
   261.492,
   303.364,
   338.4};
   Double_t Graph_fy1033[9] = {
   0.0687662,
   0.12426,
   0.164812,
   0.111834,
   -0.194384,
   0.00814545,
   -0.241685,
   -0.171277,
   -0.0649575};
   Double_t Graph_fex1033[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1033[9] = {
   0.02598983,
   0.04125348,
   0.0551761,
   0.1075913,
   0.1538771,
   0.110039,
   0.06013732,
   0.03304878,
   0.03933394};
   gre = new TGraphErrors(9,Graph_fx1033,Graph_fy1033,Graph_fex1033,Graph_fey1033);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10321033 = new TH1F("Graph_Graph_Graph10321033","Graph",100,0,370.1468);
   Graph_Graph_Graph10321033->SetMinimum(-0.405086);
   Graph_Graph_Graph10321033->SetMaximum(0.276813);
   Graph_Graph_Graph10321033->SetDirectory(0);
   Graph_Graph_Graph10321033->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10321033->SetLineColor(ci);
   Graph_Graph_Graph10321033->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10321033->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10321033->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10321033->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10321033->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10321033->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10321033->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10321033->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10321033->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10321033->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10321033->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10321033->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10321033);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx23[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy23[13] = {
   0,
   0.01988718,
   0.01988718,
   0.01955767,
   0.01884086,
   0.02424851,
   0.01450242,
   0.01401537,
   0.02723866,
   0.01784578,
   0.01010778,
   0.01010778,
   0};
   graph = new TGraph(13,Graph0_fx23,Graph0_fy23);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Graph",100,0,396);
   Graph_Graph23->SetMinimum(0);
   Graph_Graph23->SetMaximum(0.02996253);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetLabelFont(22);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph23->GetXaxis()->SetTitleFont(22);
   Graph_Graph23->GetYaxis()->SetLabelFont(22);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph23->GetYaxis()->SetTitleFont(22);
   Graph_Graph23->GetZaxis()->SetLabelFont(22);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph23);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1034[9] = {
   20.932,
   59.2374,
   94.1598,
   139.361,
   180.783,
   225.241,
   261.492,
   303.364,
   338.4};
   Double_t Graph1_fy1034[9] = {
   0.0687662,
   0.12426,
   0.164812,
   0.111834,
   -0.194384,
   0.00814545,
   -0.241685,
   -0.171277,
   -0.0649575};
   Double_t Graph1_fex1034[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1034[9] = {
   0.02598983,
   0.04125348,
   0.0551761,
   0.1075913,
   0.1538771,
   0.110039,
   0.06013732,
   0.03304878,
   0.03933394};
   gre = new TGraphErrors(9,Graph1_fx1034,Graph1_fy1034,Graph1_fex1034,Graph1_fey1034);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph103210331034 = new TH1F("Graph_Graph_Graph_Graph103210331034","Graph",100,0,370.1468);
   Graph_Graph_Graph_Graph103210331034->SetMinimum(-0.405086);
   Graph_Graph_Graph_Graph103210331034->SetMaximum(0.276813);
   Graph_Graph_Graph_Graph103210331034->SetDirectory(0);
   Graph_Graph_Graph_Graph103210331034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph103210331034->SetLineColor(ci);
   Graph_Graph_Graph_Graph103210331034->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103210331034->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph103210331034->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph103210331034->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph103210331034->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103210331034->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph103210331034->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph103210331034->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph103210331034->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103210331034->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph103210331034->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph103210331034->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph103210331034);
   
   gre->Draw("p");
   
   TF1 *ffit3[2]8 = new TF1("ffit3[2]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[2]8->SetFillColor(19);
   ffit3[2]8->SetFillStyle(0);
   ffit3[2]8->SetLineWidth(2);
   ffit3[2]8->SetChisquare(4.751821);
   ffit3[2]8->SetNDF(7);
   ffit3[2]8->GetXaxis()->SetLabelFont(22);
   ffit3[2]8->GetXaxis()->SetLabelSize(0.05);
   ffit3[2]8->GetXaxis()->SetTitleSize(0.9);
   ffit3[2]8->GetXaxis()->SetTitleFont(22);
   ffit3[2]8->GetYaxis()->SetLabelFont(22);
   ffit3[2]8->GetYaxis()->SetLabelSize(0.05);
   ffit3[2]8->GetYaxis()->SetTitleSize(0.06);
   ffit3[2]8->GetYaxis()->SetTitleFont(22);
   ffit3[2]8->SetParameter(0,0.1777536);
   ffit3[2]8->SetParError(0,0.03084218);
   ffit3[2]8->SetParLimits(0,0,0);
   ffit3[2]8->SetParameter(1,-0.06656553);
   ffit3[2]8->SetParError(1,0.2952814);
   ffit3[2]8->SetParLimits(1,0,0);
   ffit3[2]8->Draw("same");
      tex = new TLatex(150,0.28,"x_{B}= 0.29");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_7->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_11
   TPad *c15_11 = new TPad("c15_11", "_11",0.5221347,0,0.7512253,0.3812449);
   c15_11->Draw();
   c15_11->cd();
   c15_11->Range(-5,-0.590625,375,0.35);
   c15_11->SetFillColor(0);
   c15_11->SetBorderMode(0);
   c15_11->SetBorderSize(2);
   c15_11->SetLeftMargin(0);
   c15_11->SetRightMargin(0);
   c15_11->SetTopMargin(0);
   c15_11->SetBottomMargin(0.255814);
   c15_11->SetFrameBorderMode(0);
   c15_11->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1035[9] = {
   20.8731,
   59.9214,
   94.1711,
   137.747,
   182.959,
   223.602,
   261.165,
   302.712,
   337.869};
   Double_t Graph_fy1035[9] = {
   0.111301,
   0.154243,
   0.0957782,
   -0.106639,
   0.248345,
   -0.0691918,
   -0.189806,
   -0.174491,
   -0.0666059};
   Double_t Graph_fex1035[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1035[9] = {
   0.03374059,
   0.04133919,
   0.0579893,
   0.1038317,
   0.1121032,
   0.1093967,
   0.05707655,
   0.03253585,
   0.04307541};
   gre = new TGraphErrors(9,Graph_fx1035,Graph_fy1035,Graph_fex1035,Graph_fey1035);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1035 = new TH1F("Graph_Graph1035","Graph",100,0,369.5686);
   Graph_Graph1035->SetMinimum(-0.3076156);
   Graph_Graph1035->SetMaximum(0.4211813);
   Graph_Graph1035->SetDirectory(0);
   Graph_Graph1035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1035->SetLineColor(ci);
   Graph_Graph1035->GetXaxis()->SetLabelFont(22);
   Graph_Graph1035->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1035->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1035->GetXaxis()->SetTitleFont(22);
   Graph_Graph1035->GetYaxis()->SetLabelFont(22);
   Graph_Graph1035->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1035->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1035->GetYaxis()->SetTitleFont(22);
   Graph_Graph1035->GetZaxis()->SetLabelFont(22);
   Graph_Graph1035->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1035->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1035);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1036[9] = {
   20.8731,
   59.9214,
   94.1711,
   137.747,
   182.959,
   223.602,
   261.165,
   302.712,
   337.869};
   Double_t Graph_fy1036[9] = {
   0.111301,
   0.154243,
   0.0957782,
   -0.106639,
   0.248345,
   -0.0691918,
   -0.189806,
   -0.174491,
   -0.0666059};
   Double_t Graph_fex1036[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1036[9] = {
   0.03374059,
   0.04133919,
   0.0579893,
   0.1038317,
   0.1121032,
   0.1093967,
   0.05707655,
   0.03253585,
   0.04307541};
   gre = new TGraphErrors(9,Graph_fx1036,Graph_fy1036,Graph_fex1036,Graph_fey1036);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10351036 = new TH1F("Graph_Graph_Graph10351036","Graph",100,0,369.5686);
   Graph_Graph_Graph10351036->SetMinimum(-0.3076156);
   Graph_Graph_Graph10351036->SetMaximum(0.4211813);
   Graph_Graph_Graph10351036->SetDirectory(0);
   Graph_Graph_Graph10351036->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10351036->SetLineColor(ci);
   Graph_Graph_Graph10351036->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10351036->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10351036->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10351036->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10351036->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10351036->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10351036->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10351036->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10351036->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10351036->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10351036->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10351036->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10351036);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx24[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy24[13] = {
   0,
   0.01549773,
   0.01549773,
   0.01754525,
   0.01472001,
   0.01662967,
   0.03922332,
   0.01250426,
   0.02341567,
   0.01629588,
   0.0178936,
   0.0178936,
   0};
   graph = new TGraph(13,Graph0_fx24,Graph0_fy24);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Graph",100,0,396);
   Graph_Graph24->SetMinimum(0);
   Graph_Graph24->SetMaximum(0.04314565);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetLabelFont(22);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph24->GetXaxis()->SetTitleFont(22);
   Graph_Graph24->GetYaxis()->SetLabelFont(22);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph24->GetYaxis()->SetTitleFont(22);
   Graph_Graph24->GetZaxis()->SetLabelFont(22);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph24);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1037[9] = {
   20.8731,
   59.9214,
   94.1711,
   137.747,
   182.959,
   223.602,
   261.165,
   302.712,
   337.869};
   Double_t Graph1_fy1037[9] = {
   0.111301,
   0.154243,
   0.0957782,
   -0.106639,
   0.248345,
   -0.0691918,
   -0.189806,
   -0.174491,
   -0.0666059};
   Double_t Graph1_fex1037[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1037[9] = {
   0.03374059,
   0.04133919,
   0.0579893,
   0.1038317,
   0.1121032,
   0.1093967,
   0.05707655,
   0.03253585,
   0.04307541};
   gre = new TGraphErrors(9,Graph1_fx1037,Graph1_fy1037,Graph1_fex1037,Graph1_fey1037);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph103510361037 = new TH1F("Graph_Graph_Graph_Graph103510361037","Graph",100,0,369.5686);
   Graph_Graph_Graph_Graph103510361037->SetMinimum(-0.3076156);
   Graph_Graph_Graph_Graph103510361037->SetMaximum(0.4211813);
   Graph_Graph_Graph_Graph103510361037->SetDirectory(0);
   Graph_Graph_Graph_Graph103510361037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph103510361037->SetLineColor(ci);
   Graph_Graph_Graph_Graph103510361037->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103510361037->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph103510361037->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph103510361037->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph103510361037->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103510361037->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph103510361037->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph103510361037->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph103510361037->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103510361037->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph103510361037->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph103510361037->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph103510361037);
   
   gre->Draw("p");
   
   TF1 *ffit3[2]9 = new TF1("ffit3[2]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[2]9->SetFillColor(19);
   ffit3[2]9->SetFillStyle(0);
   ffit3[2]9->SetLineWidth(2);
   ffit3[2]9->SetChisquare(9.581918);
   ffit3[2]9->SetNDF(7);
   ffit3[2]9->GetXaxis()->SetLabelFont(22);
   ffit3[2]9->GetXaxis()->SetLabelSize(0.05);
   ffit3[2]9->GetXaxis()->SetTitleSize(0.9);
   ffit3[2]9->GetXaxis()->SetTitleFont(22);
   ffit3[2]9->GetYaxis()->SetLabelFont(22);
   ffit3[2]9->GetYaxis()->SetLabelSize(0.05);
   ffit3[2]9->GetYaxis()->SetTitleSize(0.06);
   ffit3[2]9->GetYaxis()->SetTitleFont(22);
   ffit3[2]9->SetParameter(0,0.1371302);
   ffit3[2]9->SetParError(0,0.02901969);
   ffit3[2]9->SetParLimits(0,0,0);
   ffit3[2]9->SetParameter(1,-0.530441);
   ffit3[2]9->SetParError(1,0.2005387);
   ffit3[2]9->SetParLimits(1,0,0);
   ffit3[2]9->Draw("same");
      tex = new TLatex(150,0.28,"-t= 0.49 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_11->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_4
   TPad *c15_4 = new TPad("c15_4", "_4",0.7512253,0.6772185,0.9803159,0.973192);
   c15_4->Draw();
   c15_4->cd();
   c15_4->Range(-5,-0.35,375,0.35);
   c15_4->SetFillColor(0);
   c15_4->SetBorderMode(0);
   c15_4->SetBorderSize(2);
   c15_4->SetLeftMargin(0);
   c15_4->SetRightMargin(0);
   c15_4->SetTopMargin(0);
   c15_4->SetBottomMargin(0);
   c15_4->SetFrameBorderMode(0);
   c15_4->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1038[9] = {
   20.1916,
   57.1706,
   94.2729,
   137.712,
   180.275,
   226.095,
   263.902,
   303.211,
   340.506};
   Double_t Graph_fy1038[9] = {
   0.095908,
   0.0817827,
   0.163238,
   0.0930068,
   -0.227277,
   -0.0333396,
   -0.163051,
   -0.164467,
   -0.0914736};
   Double_t Graph_fex1038[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1038[9] = {
   0.02681254,
   0.04556146,
   0.06241614,
   0.1406682,
   0.1899394,
   0.157562,
   0.07729993,
   0.03402854,
   0.03398742};
   gre = new TGraphErrors(9,Graph_fx1038,Graph_fy1038,Graph_fex1038,Graph_fey1038);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1038 = new TH1F("Graph_Graph1038","Graph",100,0,372.5374);
   Graph_Graph1038->SetMinimum(-0.4823055);
   Graph_Graph1038->SetMaximum(0.2987642);
   Graph_Graph1038->SetDirectory(0);
   Graph_Graph1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1038->SetLineColor(ci);
   Graph_Graph1038->GetXaxis()->SetLabelFont(22);
   Graph_Graph1038->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1038->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1038->GetXaxis()->SetTitleFont(22);
   Graph_Graph1038->GetYaxis()->SetLabelFont(22);
   Graph_Graph1038->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1038->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1038->GetYaxis()->SetTitleFont(22);
   Graph_Graph1038->GetZaxis()->SetLabelFont(22);
   Graph_Graph1038->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1038->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1038);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1039[9] = {
   20.1916,
   57.1706,
   94.2729,
   137.712,
   180.275,
   226.095,
   263.902,
   303.211,
   340.506};
   Double_t Graph_fy1039[9] = {
   0.095908,
   0.0817827,
   0.163238,
   0.0930068,
   -0.227277,
   -0.0333396,
   -0.163051,
   -0.164467,
   -0.0914736};
   Double_t Graph_fex1039[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1039[9] = {
   0.02681254,
   0.04556146,
   0.06241614,
   0.1406682,
   0.1899394,
   0.157562,
   0.07729993,
   0.03402854,
   0.03398742};
   gre = new TGraphErrors(9,Graph_fx1039,Graph_fy1039,Graph_fex1039,Graph_fey1039);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10381039 = new TH1F("Graph_Graph_Graph10381039","Graph",100,0,372.5374);
   Graph_Graph_Graph10381039->SetMinimum(-0.4823055);
   Graph_Graph_Graph10381039->SetMaximum(0.2987642);
   Graph_Graph_Graph10381039->SetDirectory(0);
   Graph_Graph_Graph10381039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10381039->SetLineColor(ci);
   Graph_Graph_Graph10381039->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10381039->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10381039->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10381039->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10381039->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10381039->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10381039->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10381039->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10381039->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10381039->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10381039->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10381039->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10381039);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx25[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy25[13] = {
   0,
   0.01474362,
   0.01474362,
   0.01471701,
   0.02811833,
   0.01296021,
   0.02700859,
   0.02732611,
   0.02149023,
   0.02211641,
   0.01412915,
   0.01412915,
   0};
   graph = new TGraph(13,Graph0_fx25,Graph0_fy25);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","Graph",100,0,396);
   Graph_Graph25->SetMinimum(0);
   Graph_Graph25->SetMaximum(0.03093016);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph25->SetLineColor(ci);
   Graph_Graph25->GetXaxis()->SetLabelFont(22);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph25->GetXaxis()->SetTitleFont(22);
   Graph_Graph25->GetYaxis()->SetLabelFont(22);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph25->GetYaxis()->SetTitleFont(22);
   Graph_Graph25->GetZaxis()->SetLabelFont(22);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph25);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1040[9] = {
   20.1916,
   57.1706,
   94.2729,
   137.712,
   180.275,
   226.095,
   263.902,
   303.211,
   340.506};
   Double_t Graph1_fy1040[9] = {
   0.095908,
   0.0817827,
   0.163238,
   0.0930068,
   -0.227277,
   -0.0333396,
   -0.163051,
   -0.164467,
   -0.0914736};
   Double_t Graph1_fex1040[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1040[9] = {
   0.02681254,
   0.04556146,
   0.06241614,
   0.1406682,
   0.1899394,
   0.157562,
   0.07729993,
   0.03402854,
   0.03398742};
   gre = new TGraphErrors(9,Graph1_fx1040,Graph1_fy1040,Graph1_fex1040,Graph1_fey1040);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph103810391040 = new TH1F("Graph_Graph_Graph_Graph103810391040","Graph",100,0,372.5374);
   Graph_Graph_Graph_Graph103810391040->SetMinimum(-0.4823055);
   Graph_Graph_Graph_Graph103810391040->SetMaximum(0.2987642);
   Graph_Graph_Graph_Graph103810391040->SetDirectory(0);
   Graph_Graph_Graph_Graph103810391040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph103810391040->SetLineColor(ci);
   Graph_Graph_Graph_Graph103810391040->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103810391040->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph103810391040->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph103810391040->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph103810391040->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103810391040->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph103810391040->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph103810391040->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph103810391040->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph103810391040->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph103810391040->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph103810391040->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph103810391040);
   
   gre->Draw("p");
   
   TF1 *ffit3[3]10 = new TF1("ffit3[3]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[3]10->SetFillColor(19);
   ffit3[3]10->SetFillStyle(0);
   ffit3[3]10->SetLineWidth(2);
   ffit3[3]10->SetChisquare(4.404325);
   ffit3[3]10->SetNDF(7);
   ffit3[3]10->GetXaxis()->SetLabelFont(22);
   ffit3[3]10->GetXaxis()->SetLabelSize(0.05);
   ffit3[3]10->GetXaxis()->SetTitleSize(0.9);
   ffit3[3]10->GetXaxis()->SetTitleFont(22);
   ffit3[3]10->GetYaxis()->SetLabelFont(22);
   ffit3[3]10->GetYaxis()->SetLabelSize(0.05);
   ffit3[3]10->GetYaxis()->SetTitleSize(0.06);
   ffit3[3]10->GetYaxis()->SetTitleFont(22);
   ffit3[3]10->SetParameter(0,0.1297463);
   ffit3[3]10->SetParError(0,0.04134271);
   ffit3[3]10->SetParLimits(0,0,0);
   ffit3[3]10->SetParameter(1,-0.507966);
   ffit3[3]10->SetParError(1,0.2946306);
   ffit3[3]10->SetParLimits(1,0,0);
   ffit3[3]10->Draw("same");
      tex = new TLatex(150,0.28,"Q^{2}= 3.09 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_4->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_8
   TPad *c15_8 = new TPad("c15_8", "_8",0.7512253,0.3812449,0.9803159,0.6772185);
   c15_8->Draw();
   c15_8->cd();
   c15_8->Range(-5,-0.35,375,0.35);
   c15_8->SetFillColor(0);
   c15_8->SetBorderMode(0);
   c15_8->SetBorderSize(2);
   c15_8->SetLeftMargin(0);
   c15_8->SetRightMargin(0);
   c15_8->SetTopMargin(0);
   c15_8->SetBottomMargin(0);
   c15_8->SetFrameBorderMode(0);
   c15_8->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1041[9] = {
   19.6378,
   55.1369,
   93.4539,
   135.128,
   179.909,
   230.592,
   265.503,
   303.412,
   341.27};
   Double_t Graph_fy1041[9] = {
   0.0809874,
   0.121487,
   0.253014,
   -0.230464,
   -0.0522477,
   -0.376624,
   -0.0929269,
   -0.197724,
   -0.108475};
   Double_t Graph_fex1041[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1041[9] = {
   0.02514888,
   0.05190475,
   0.08429903,
   0.2213868,
   0.4232723,
   0.3302875,
   0.1010378,
   0.03905614,
   0.03156353};
   gre = new TGraphErrors(9,Graph_fx1041,Graph_fy1041,Graph_fex1041,Graph_fey1041);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1041 = new TH1F("Graph_Graph1041","Graph",100,0,373.4332);
   Graph_Graph1041->SetMinimum(-0.8147051);
   Graph_Graph1041->SetMaximum(0.4788182);
   Graph_Graph1041->SetDirectory(0);
   Graph_Graph1041->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1041->SetLineColor(ci);
   Graph_Graph1041->GetXaxis()->SetLabelFont(22);
   Graph_Graph1041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1041->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1041->GetXaxis()->SetTitleFont(22);
   Graph_Graph1041->GetYaxis()->SetLabelFont(22);
   Graph_Graph1041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1041->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1041->GetYaxis()->SetTitleFont(22);
   Graph_Graph1041->GetZaxis()->SetLabelFont(22);
   Graph_Graph1041->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1041->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1041);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1042[9] = {
   19.6378,
   55.1369,
   93.4539,
   135.128,
   179.909,
   230.592,
   265.503,
   303.412,
   341.27};
   Double_t Graph_fy1042[9] = {
   0.0809874,
   0.121487,
   0.253014,
   -0.230464,
   -0.0522477,
   -0.376624,
   -0.0929269,
   -0.197724,
   -0.108475};
   Double_t Graph_fex1042[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1042[9] = {
   0.02514888,
   0.05190475,
   0.08429903,
   0.2213868,
   0.4232723,
   0.3302875,
   0.1010378,
   0.03905614,
   0.03156353};
   gre = new TGraphErrors(9,Graph_fx1042,Graph_fy1042,Graph_fex1042,Graph_fey1042);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10411042 = new TH1F("Graph_Graph_Graph10411042","Graph",100,0,373.4332);
   Graph_Graph_Graph10411042->SetMinimum(-0.8147051);
   Graph_Graph_Graph10411042->SetMaximum(0.4788182);
   Graph_Graph_Graph10411042->SetDirectory(0);
   Graph_Graph_Graph10411042->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10411042->SetLineColor(ci);
   Graph_Graph_Graph10411042->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10411042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10411042->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10411042->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10411042->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10411042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10411042->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10411042->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10411042->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10411042->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10411042->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10411042->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10411042);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx26[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy26[13] = {
   0,
   0.01430528,
   0.01430528,
   0.01482682,
   0.03136377,
   0.03863117,
   0.03642855,
   0.04691644,
   0.02026491,
   0.02296748,
   0.01568537,
   0.01568537,
   0};
   graph = new TGraph(13,Graph0_fx26,Graph0_fy26);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","Graph",100,0,396);
   Graph_Graph26->SetMinimum(0);
   Graph_Graph26->SetMaximum(0.05160808);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph26->SetLineColor(ci);
   Graph_Graph26->GetXaxis()->SetLabelFont(22);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph26->GetXaxis()->SetTitleFont(22);
   Graph_Graph26->GetYaxis()->SetLabelFont(22);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph26->GetYaxis()->SetTitleFont(22);
   Graph_Graph26->GetZaxis()->SetLabelFont(22);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph26);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1043[9] = {
   19.6378,
   55.1369,
   93.4539,
   135.128,
   179.909,
   230.592,
   265.503,
   303.412,
   341.27};
   Double_t Graph1_fy1043[9] = {
   0.0809874,
   0.121487,
   0.253014,
   -0.230464,
   -0.0522477,
   -0.376624,
   -0.0929269,
   -0.197724,
   -0.108475};
   Double_t Graph1_fex1043[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1043[9] = {
   0.02514888,
   0.05190475,
   0.08429903,
   0.2213868,
   0.4232723,
   0.3302875,
   0.1010378,
   0.03905614,
   0.03156353};
   gre = new TGraphErrors(9,Graph1_fx1043,Graph1_fy1043,Graph1_fex1043,Graph1_fey1043);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph104110421043 = new TH1F("Graph_Graph_Graph_Graph104110421043","Graph",100,0,373.4332);
   Graph_Graph_Graph_Graph104110421043->SetMinimum(-0.8147051);
   Graph_Graph_Graph_Graph104110421043->SetMaximum(0.4788182);
   Graph_Graph_Graph_Graph104110421043->SetDirectory(0);
   Graph_Graph_Graph_Graph104110421043->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph104110421043->SetLineColor(ci);
   Graph_Graph_Graph_Graph104110421043->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph104110421043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph104110421043->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph104110421043->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph104110421043->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph104110421043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph104110421043->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph104110421043->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph104110421043->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph104110421043->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph104110421043->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph104110421043->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph104110421043);
   
   gre->Draw("p");
   
   TF1 *ffit3[3]11 = new TF1("ffit3[3]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[3]11->SetFillColor(19);
   ffit3[3]11->SetFillStyle(0);
   ffit3[3]11->SetLineWidth(2);
   ffit3[3]11->SetChisquare(5.891927);
   ffit3[3]11->SetNDF(7);
   ffit3[3]11->GetXaxis()->SetLabelFont(22);
   ffit3[3]11->GetXaxis()->SetLabelSize(0.05);
   ffit3[3]11->GetXaxis()->SetTitleSize(0.9);
   ffit3[3]11->GetXaxis()->SetTitleFont(22);
   ffit3[3]11->GetYaxis()->SetLabelFont(22);
   ffit3[3]11->GetYaxis()->SetLabelSize(0.05);
   ffit3[3]11->GetYaxis()->SetTitleSize(0.06);
   ffit3[3]11->GetYaxis()->SetTitleFont(22);
   ffit3[3]11->SetParameter(0,0.1603706);
   ffit3[3]11->SetParError(0,0.04804572);
   ffit3[3]11->SetParLimits(0,0,0);
   ffit3[3]11->SetParameter(1,-0.426364);
   ffit3[3]11->SetParError(1,0.283345);
   ffit3[3]11->SetParLimits(1,0,0);
   ffit3[3]11->Draw("same");
      tex = new TLatex(150,0.28,"x_{B}= 0.39");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_8->Modified();
   c15->cd();
  
// ------------>Primitives in pad: c15_12
   TPad *c15_12 = new TPad("c15_12", "_12",0.7512253,0,0.9803159,0.3812449);
   c15_12->Draw();
   c15_12->cd();
   c15_12->Range(-5,-0.590625,375,0.35);
   c15_12->SetFillColor(0);
   c15_12->SetBorderMode(0);
   c15_12->SetBorderSize(2);
   c15_12->SetLeftMargin(0);
   c15_12->SetRightMargin(0);
   c15_12->SetTopMargin(0);
   c15_12->SetBottomMargin(0.255814);
   c15_12->SetFrameBorderMode(0);
   c15_12->SetFrameBorderMode(0);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1044[9] = {
   19.7902,
   56.7298,
   90.6312,
   131.238,
   175.373,
   230.576,
   264.366,
   304.802,
   340.549};
   Double_t Graph_fy1044[9] = {
   0.0317249,
   0.0910966,
   0.162932,
   0.0424309,
   -0.935504,
   -1.1889,
   -0.0721227,
   -0.11907,
   -0.0442782};
   Double_t Graph_fex1044[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1044[9] = {
   0.02469181,
   0.05746476,
   0.1112266,
   0.3067085,
   0.3967703,
   0.5168668,
   0.1078391,
   0.04574179,
   0.03250347};
   gre = new TGraphErrors(9,Graph_fx1044,Graph_fy1044,Graph_fex1044,Graph_fey1044);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph1044 = new TH1F("Graph_Graph1044","Graph",100,0,372.6249);
   Graph_Graph1044->SetMinimum(-1.911257);
   Graph_Graph1044->SetMaximum(0.55463);
   Graph_Graph1044->SetDirectory(0);
   Graph_Graph1044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1044->SetLineColor(ci);
   Graph_Graph1044->GetXaxis()->SetLabelFont(22);
   Graph_Graph1044->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph1044->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph1044->GetXaxis()->SetTitleFont(22);
   Graph_Graph1044->GetYaxis()->SetLabelFont(22);
   Graph_Graph1044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph1044->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph1044->GetYaxis()->SetTitleFont(22);
   Graph_Graph1044->GetZaxis()->SetLabelFont(22);
   Graph_Graph1044->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1044->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph1044);
   
   multigraph->Add(gre,"");
   multigraph->Draw("a2");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1045[9] = {
   19.7902,
   56.7298,
   90.6312,
   131.238,
   175.373,
   230.576,
   264.366,
   304.802,
   340.549};
   Double_t Graph_fy1045[9] = {
   0.0317249,
   0.0910966,
   0.162932,
   0.0424309,
   -0.935504,
   -1.1889,
   -0.0721227,
   -0.11907,
   -0.0442782};
   Double_t Graph_fex1045[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1045[9] = {
   0.02469181,
   0.05746476,
   0.1112266,
   0.3067085,
   0.3967703,
   0.5168668,
   0.1078391,
   0.04574179,
   0.03250347};
   gre = new TGraphErrors(9,Graph_fx1045,Graph_fy1045,Graph_fex1045,Graph_fey1045);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph10441045 = new TH1F("Graph_Graph_Graph10441045","Graph",100,0,372.6249);
   Graph_Graph_Graph10441045->SetMinimum(-1.911257);
   Graph_Graph_Graph10441045->SetMaximum(0.55463);
   Graph_Graph_Graph10441045->SetDirectory(0);
   Graph_Graph_Graph10441045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10441045->SetLineColor(ci);
   Graph_Graph_Graph10441045->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph10441045->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10441045->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph10441045->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph10441045->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph10441045->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph10441045->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph10441045->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph10441045->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph10441045->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph10441045->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph10441045->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph10441045);
   
   multigraph->Add(gre,"");
   multigraph->Draw("p");
   multigraph->GetXaxis()->SetTitle("#phi [deg.]");
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetLabelFont(22);
   multigraph->GetXaxis()->SetLabelSize(0.07);
   multigraph->GetXaxis()->SetTitleSize(0.12);
   multigraph->GetXaxis()->SetTitleFont(22);
   multigraph->GetYaxis()->SetLabelFont(22);
   multigraph->GetYaxis()->SetLabelSize(0.07);
   multigraph->GetYaxis()->SetTitleSize(0.12);
   multigraph->GetYaxis()->SetTitleFont(22);
   
   Double_t Graph0_fx27[13] = {
   0,
   0,
   20,
   60,
   100,
   140,
   180,
   220,
   260,
   300,
   340,
   360,
   360};
   Double_t Graph0_fy27[13] = {
   0,
   0.01781525,
   0.01781525,
   0.01086996,
   0.01108901,
   0.01772069,
   0.01816686,
   0.01512427,
   0.01712236,
   0.01297528,
   0.0164465,
   0.0164465,
   0};
   graph = new TGraph(13,Graph0_fx27,Graph0_fy27);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(40);
   graph->SetLineColor(40);
   graph->SetMarkerColor(40);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Graph",100,0,396);
   Graph_Graph27->SetMinimum(0);
   Graph_Graph27->SetMaximum(0.01998355);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetLabelFont(22);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph27->GetXaxis()->SetTitleFont(22);
   Graph_Graph27->GetYaxis()->SetLabelFont(22);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph27->GetYaxis()->SetTitleFont(22);
   Graph_Graph27->GetZaxis()->SetLabelFont(22);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleFont(22);
   graph->SetHistogram(Graph_Graph27);
   
   graph->Draw("f");
   
   Double_t Graph1_fx1046[9] = {
   19.7902,
   56.7298,
   90.6312,
   131.238,
   175.373,
   230.576,
   264.366,
   304.802,
   340.549};
   Double_t Graph1_fy1046[9] = {
   0.0317249,
   0.0910966,
   0.162932,
   0.0424309,
   -0.935504,
   -1.1889,
   -0.0721227,
   -0.11907,
   -0.0442782};
   Double_t Graph1_fex1046[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1046[9] = {
   0.02469181,
   0.05746476,
   0.1112266,
   0.3067085,
   0.3967703,
   0.5168668,
   0.1078391,
   0.04574179,
   0.03250347};
   gre = new TGraphErrors(9,Graph1_fx1046,Graph1_fy1046,Graph1_fex1046,Graph1_fey1046);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(8);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.3);
   
   TH1F *Graph_Graph_Graph_Graph104410451046 = new TH1F("Graph_Graph_Graph_Graph104410451046","Graph",100,0,372.6249);
   Graph_Graph_Graph_Graph104410451046->SetMinimum(-1.911257);
   Graph_Graph_Graph_Graph104410451046->SetMaximum(0.55463);
   Graph_Graph_Graph_Graph104410451046->SetDirectory(0);
   Graph_Graph_Graph_Graph104410451046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph104410451046->SetLineColor(ci);
   Graph_Graph_Graph_Graph104410451046->GetXaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph104410451046->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph104410451046->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph_Graph_Graph104410451046->GetXaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph104410451046->GetYaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph104410451046->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_Graph104410451046->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_Graph104410451046->GetYaxis()->SetTitleFont(22);
   Graph_Graph_Graph_Graph104410451046->GetZaxis()->SetLabelFont(22);
   Graph_Graph_Graph_Graph104410451046->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph104410451046->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph104410451046->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph_Graph_Graph104410451046);
   
   gre->Draw("p");
   
   TF1 *ffit3[3]12 = new TF1("ffit3[3]","[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0,360);
   ffit3[3]12->SetFillColor(19);
   ffit3[3]12->SetFillStyle(0);
   ffit3[3]12->SetLineWidth(2);
   ffit3[3]12->SetChisquare(10.73461);
   ffit3[3]12->SetNDF(7);
   ffit3[3]12->GetXaxis()->SetLabelFont(22);
   ffit3[3]12->GetXaxis()->SetLabelSize(0.05);
   ffit3[3]12->GetXaxis()->SetTitleSize(0.9);
   ffit3[3]12->GetXaxis()->SetTitleFont(22);
   ffit3[3]12->GetYaxis()->SetLabelFont(22);
   ffit3[3]12->GetYaxis()->SetLabelSize(0.05);
   ffit3[3]12->GetYaxis()->SetTitleSize(0.06);
   ffit3[3]12->GetYaxis()->SetTitleFont(22);
   ffit3[3]12->SetParameter(0,0.1389324);
   ffit3[3]12->SetParError(0,0.0618686);
   ffit3[3]12->SetParLimits(0,0,0);
   ffit3[3]12->SetParameter(1,0.2173923);
   ffit3[3]12->SetParError(1,0.8748474);
   ffit3[3]12->SetParLimits(1,0,0);
   ffit3[3]12->Draw("same");
      tex = new TLatex(150,0.28,"-t= 1.08 GeV^{2}");
   tex->SetTextSize(0.085);
   tex->SetLineWidth(2);
   tex->Draw();
   c15_12->Modified();
   c15->cd();
   c15->Modified();
   c15->cd();
   c15->SetSelected(c15);
}
