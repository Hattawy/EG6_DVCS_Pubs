{
//=========Macro generated from canvas: c1/
//=========  (Fri Dec 18 09:59:47 2015) by ROOT version5.34/34
   TCanvas *c1 = new TCanvas("c1", "",1,1,700,476);
   c1->Range(-80.8421,0.01578948,424.421,0.5421053);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(0);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.16);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(18);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,10,0.2528931);
   gre->SetPointError(0,0,0.01394339);
   gre->SetPoint(1,30,0.2661026);
   gre->SetPointError(1,0,0.01291824);
   gre->SetPoint(2,50,0.2378329);
   gre->SetPointError(2,0,0.01554594);
   gre->SetPoint(3,70,0.21303);
   gre->SetPointError(3,0,0.01533933);
   gre->SetPoint(4,90,0.2175549);
   gre->SetPointError(4,0,0.01712635);
   gre->SetPoint(5,110,0.2097625);
   gre->SetPointError(5,0,0.02425417);
   gre->SetPoint(6,130,0.2126789);
   gre->SetPointError(6,0,0.03047256);
   gre->SetPoint(7,150,0.2344398);
   gre->SetPointError(7,0,0.03273268);
   gre->SetPoint(8,170,0.2);
   gre->SetPointError(8,0,0.04177746);
   gre->SetPoint(9,190,0.2204969);
   gre->SetPointError(9,0,0.03845598);
   gre->SetPoint(10,210,0.1964809);
   gre->SetPointError(10,0,0.03464401);
   gre->SetPoint(11,230,0.2477477);
   gre->SetPointError(11,0,0.03537941);
   gre->SetPoint(12,250,0.1956967);
   gre->SetPointError(12,0,0.02042422);
   gre->SetPoint(13,270,0.1828829);
   gre->SetPointError(13,0,0.01832509);
   gre->SetPoint(14,290,0.2104247);
   gre->SetPointError(14,0,0.01470028);
   gre->SetPoint(15,310,0.2401405);
   gre->SetPointError(15,0,0.01200087);
   gre->SetPoint(16,330,0.2268943);
   gre->SetPointError(16,0,0.01434861);
   gre->SetPoint(17,350,0.2508233);
   gre->SetPointError(17,0,0.01760918);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Graph",100,0,384);
   Graph_Graph7->SetMinimum(0.1);
   Graph_Graph7->SetMaximum(0.5);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetTitle("#phi_{h} [Deg.]");
   Graph_Graph7->GetXaxis()->SetLabelFont(22);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetXaxis()->SetTitleFont(22);
   Graph_Graph7->GetYaxis()->SetTitle("R^{MC}_{ep#pi^{0}}(1#gamma / 2#gamma) ");
   Graph_Graph7->GetYaxis()->SetLabelFont(22);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph7->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph7->GetYaxis()->SetTitleFont(22);
   Graph_Graph7->GetZaxis()->SetLabelFont(22);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph7);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4397126,0.9339831,0.5602874,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
