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
   gre->SetPoint(0,10,0.2207131);
   gre->SetPointError(0,0,0.0201187);
   gre->SetPoint(1,30,0.2226322);
   gre->SetPointError(1,0,0.01722242);
   gre->SetPoint(2,50,0.2054196);
   gre->SetPointError(2,0,0.01947345);
   gre->SetPoint(3,70,0.1802011);
   gre->SetPointError(3,0,0.01681675);
   gre->SetPoint(4,90,0.1810345);
   gre->SetPointError(4,0,0.01505044);
   gre->SetPoint(5,110,0.2074264);
   gre->SetPointError(5,0,0.02371925);
   gre->SetPoint(6,130,0.1729894);
   gre->SetPointError(6,0,0.02294065);
   gre->SetPoint(7,150,0.211288);
   gre->SetPointError(7,0,0.02552409);
   gre->SetPoint(8,170,0.2013201);
   gre->SetPointError(8,0,0.03734194);
   gre->SetPoint(9,190,0.1943888);
   gre->SetPointError(9,0,0.02843923);
   gre->SetPoint(10,210,0.1670146);
   gre->SetPointError(10,0,0.02630389);
   gre->SetPoint(11,230,0.2003484);
   gre->SetPointError(11,0,0.02704497);
   gre->SetPoint(12,250,0.2036125);
   gre->SetPointError(12,0,0.0187636);
   gre->SetPoint(13,270,0.1817308);
   gre->SetPointError(13,0,0.0188542);
   gre->SetPoint(14,290,0.1904762);
   gre->SetPointError(14,0,0.01696837);
   gre->SetPoint(15,310,0.2005195);
   gre->SetPointError(15,0,0.01477644);
   gre->SetPoint(16,330,0.1865546);
   gre->SetPointError(16,0,0.01792867);
   gre->SetPoint(17,350,0.1956522);
   gre->SetPointError(17,0,0.02351618);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,0,384);
   Graph_Graph6->SetMinimum(0.1);
   Graph_Graph6->SetMaximum(0.5);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetTitle("#phi_{h} [Deg.]");
   Graph_Graph6->GetXaxis()->SetLabelFont(22);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetXaxis()->SetTitleFont(22);
   Graph_Graph6->GetYaxis()->SetTitle("R^{MC}_{ep#pi^{0}}(1#gamma / 2#gamma) ");
   Graph_Graph6->GetYaxis()->SetLabelFont(22);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph6->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph6->GetYaxis()->SetTitleFont(22);
   Graph_Graph6->GetZaxis()->SetLabelFont(22);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph6);
   
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
