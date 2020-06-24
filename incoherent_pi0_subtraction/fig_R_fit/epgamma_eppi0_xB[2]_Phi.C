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
   gre->SetPoint(0,10,0.2463387);
   gre->SetPointError(0,0,0.01439152);
   gre->SetPoint(1,30,0.2362288);
   gre->SetPointError(1,0,0.01175382);
   gre->SetPoint(2,50,0.2195821);
   gre->SetPointError(2,0,0.0139289);
   gre->SetPoint(3,70,0.206772);
   gre->SetPointError(3,0,0.01405526);
   gre->SetPoint(4,90,0.2208219);
   gre->SetPointError(4,0,0.01616897);
   gre->SetPoint(5,110,0.2210012);
   gre->SetPointError(5,0,0.0241493);
   gre->SetPoint(6,130,0.2178423);
   gre->SetPointError(6,0,0.03118168);
   gre->SetPoint(7,150,0.2483801);
   gre->SetPointError(7,0,0.03470477);
   gre->SetPoint(8,170,0.2378855);
   gre->SetPointError(8,0,0.04816112);
   gre->SetPoint(9,190,0.184466);
   gre->SetPointError(9,0,0.03492703);
   gre->SetPoint(10,210,0.1965812);
   gre->SetPointError(10,0,0.03415832);
   gre->SetPoint(11,230,0.2434783);
   gre->SetPointError(11,0,0.03435877);
   gre->SetPoint(12,250,0.1960967);
   gre->SetPointError(12,0,0.01947796);
   gre->SetPoint(13,270,0.1869313);
   gre->SetPointError(13,0,0.01781061);
   gre->SetPoint(14,290,0.2067131);
   gre->SetPointError(14,0,0.01338082);
   gre->SetPoint(15,310,0.2299465);
   gre->SetPointError(15,0,0.01081812);
   gre->SetPoint(16,330,0.2093391);
   gre->SetPointError(16,0,0.01326606);
   gre->SetPoint(17,350,0.2155417);
   gre->SetPointError(17,0,0.01619046);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Graph",100,0,384);
   Graph_Graph8->SetMinimum(0.1);
   Graph_Graph8->SetMaximum(0.5);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetTitle("#phi_{h} [Deg.]");
   Graph_Graph8->GetXaxis()->SetLabelFont(22);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetXaxis()->SetTitleFont(22);
   Graph_Graph8->GetYaxis()->SetTitle("R^{MC}_{ep#pi^{0}}(1#gamma / 2#gamma) ");
   Graph_Graph8->GetYaxis()->SetLabelFont(22);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph8->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph8->GetYaxis()->SetTitleFont(22);
   Graph_Graph8->GetZaxis()->SetLabelFont(22);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.03);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph8);
   
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
