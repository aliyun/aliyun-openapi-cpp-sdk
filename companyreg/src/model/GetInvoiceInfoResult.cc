/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/companyreg/model/GetInvoiceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetInvoiceInfoResult::GetInvoiceInfoResult() :
	ServiceResult()
{}

GetInvoiceInfoResult::GetInvoiceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInvoiceInfoResult::~GetInvoiceInfoResult()
{}

void GetInvoiceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDetailsNode = value["Details"]["DetailsItem"];
	for (auto valueDetailsDetailsItem : allDetailsNode)
	{
		DetailsItem detailsObject;
		auto productNode = value["Product"];
		if(!productNode["Id"].isNull())
			detailsObject.product.id = std::stol(productNode["Id"].asString());
		if(!productNode["Name"].isNull())
			detailsObject.product.name = productNode["Name"].asString();
		details_.push_back(detailsObject);
	}
	auto allVoucherTransListNode = value["VoucherTransList"]["AcctgTransList"];
	for (auto valueVoucherTransListAcctgTransList : allVoucherTransListNode)
	{
		AcctgTransList voucherTransListObject;
		auto voucherTransIdNode = value["VoucherTransId"];
		if(!voucherTransIdNode["Id"].isNull())
			voucherTransListObject.voucherTransId.id = std::stol(voucherTransIdNode["Id"].asString());
		if(!voucherTransIdNode["RefVoucherIds"].isNull())
			voucherTransListObject.voucherTransId.refVoucherIds = voucherTransIdNode["RefVoucherIds"].asString();
		voucherTransList_.push_back(voucherTransListObject);
	}
	auto buyMethodNode = value["BuyMethod"];
	if(!buyMethodNode["Key"].isNull())
		buyMethod_.key = buyMethodNode["Key"].asString();
	if(!buyMethodNode["Value"].isNull())
		buyMethod_.value = buyMethodNode["Value"].asString();
	auto buyTargetNode = value["BuyTarget"];
	if(!buyTargetNode["Key"].isNull())
		buyTarget_.key = buyTargetNode["Key"].asString();
	if(!buyTargetNode["Value"].isNull())
		buyTarget_.value = buyTargetNode["Value"].asString();
	auto custVendorIdNode = value["CustVendorId"];
	if(!custVendorIdNode["PartyName"].isNull())
		custVendorId_.partyName = custVendorIdNode["PartyName"].asString();
	auto fixedAssetTypeNode = value["FixedAssetType"];
	if(!fixedAssetTypeNode["Key"].isNull())
		fixedAssetType_.key = fixedAssetTypeNode["Key"].asString();
	if(!fixedAssetTypeNode["Value"].isNull())
		fixedAssetType_.value = fixedAssetTypeNode["Value"].asString();
	auto incomeOutTypeNode = value["IncomeOutType"];
	if(!incomeOutTypeNode["Label"].isNull())
		incomeOutType_.label = incomeOutTypeNode["Label"].asString();
	if(!incomeOutTypeNode["Value"].isNull())
		incomeOutType_.value = incomeOutTypeNode["Value"].asString();
	auto kindNode = value["Kind"];
	if(!kindNode["Key"].isNull())
		kind_.key = kindNode["Key"].asString();
	if(!kindNode["Value"].isNull())
		kind_.value = kindNode["Value"].asString();
	auto payMethodNode = value["PayMethod"];
	if(!payMethodNode["Key"].isNull())
		payMethod_.key = payMethodNode["Key"].asString();
	if(!payMethodNode["Value"].isNull())
		payMethod_.value = payMethodNode["Value"].asString();
	auto shellMethodNode = value["ShellMethod"];
	if(!shellMethodNode["Key"].isNull())
		shellMethod_.key = shellMethodNode["Key"].asString();
	if(!shellMethodNode["Value"].isNull())
		shellMethod_.value = shellMethodNode["Value"].asString();
	auto useNode = value["Use"];
	if(!useNode["Key"].isNull())
		use_.key = useNode["Key"].asString();
	if(!useNode["Value"].isNull())
		use_.value = useNode["Value"].asString();
	if(!value["AcctgPeriod"].isNull())
		acctgPeriod_ = value["AcctgPeriod"].asString();
	if(!value["BaseTotalAmountWithTax"].isNull())
		baseTotalAmountWithTax_ = value["BaseTotalAmountWithTax"].asString();
	if(!value["BaseTotalAmountWithoutTax"].isNull())
		baseTotalAmountWithoutTax_ = value["BaseTotalAmountWithoutTax"].asString();
	if(!value["BaseTotalTax"].isNull())
		baseTotalTax_ = value["BaseTotalTax"].asString();
	if(!value["BizDate"].isNull())
		bizDate_ = std::stol(value["BizDate"].asString());
	if(!value["Comments"].isNull())
		comments_ = value["Comments"].asString();
	if(!value["CreatedStamp"].isNull())
		createdStamp_ = std::stol(value["CreatedStamp"].asString());
	if(!value["DueDate"].isNull())
		dueDate_ = std::stol(value["DueDate"].asString());
	if(!value["ElecInvoiceUrl"].isNull())
		elecInvoiceUrl_ = value["ElecInvoiceUrl"].asString();
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["InvoiceCode"].isNull())
		invoiceCode_ = value["InvoiceCode"].asString();
	if(!value["InvoiceNo"].isNull())
		invoiceNo_ = value["InvoiceNo"].asString();
	if(!value["IsElectronic"].isNull())
		isElectronic_ = value["IsElectronic"].asString() == "true";
	if(!value["IsAuth"].isNull())
		isAuth_ = value["IsAuth"].asString() == "true";
	if(!value["IsFee"].isNull())
		isFee_ = value["IsFee"].asString() == "true";
	if(!value["OrgName"].isNull())
		orgName_ = value["OrgName"].asString();
	if(!value["SimulationCertified"].isNull())
		simulationCertified_ = value["SimulationCertified"].asString() == "true";
	if(!value["TaxNo"].isNull())
		taxNo_ = value["TaxNo"].asString();
	if(!value["TaxPct"].isNull())
		taxPct_ = value["TaxPct"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Payer"].isNull())
		payer_ = value["Payer"].asString();
	if(!value["CanUpdate"].isNull())
		canUpdate_ = value["CanUpdate"].asString() == "true";
	if(!value["LabelData"].isNull())
		labelData_ = value["LabelData"].asString();

}

std::string GetInvoiceInfoResult::getBaseTotalAmountWithTax()const
{
	return baseTotalAmountWithTax_;
}

std::string GetInvoiceInfoResult::getOrgName()const
{
	return orgName_;
}

bool GetInvoiceInfoResult::getSimulationCertified()const
{
	return simulationCertified_;
}

std::vector<GetInvoiceInfoResult::AcctgTransList> GetInvoiceInfoResult::getVoucherTransList()const
{
	return voucherTransList_;
}

GetInvoiceInfoResult::BuyTarget GetInvoiceInfoResult::getBuyTarget()const
{
	return buyTarget_;
}

std::string GetInvoiceInfoResult::getAcctgPeriod()const
{
	return acctgPeriod_;
}

bool GetInvoiceInfoResult::getCanUpdate()const
{
	return canUpdate_;
}

GetInvoiceInfoResult::Kind GetInvoiceInfoResult::getKind()const
{
	return kind_;
}

GetInvoiceInfoResult::ShellMethod GetInvoiceInfoResult::getShellMethod()const
{
	return shellMethod_;
}

bool GetInvoiceInfoResult::getIsAuth()const
{
	return isAuth_;
}

std::string GetInvoiceInfoResult::getBaseTotalAmountWithoutTax()const
{
	return baseTotalAmountWithoutTax_;
}

std::string GetInvoiceInfoResult::getInvoiceCode()const
{
	return invoiceCode_;
}

long GetInvoiceInfoResult::getCreatedStamp()const
{
	return createdStamp_;
}

long GetInvoiceInfoResult::getDueDate()const
{
	return dueDate_;
}

std::string GetInvoiceInfoResult::getElecInvoiceUrl()const
{
	return elecInvoiceUrl_;
}

long GetInvoiceInfoResult::getBizDate()const
{
	return bizDate_;
}

std::string GetInvoiceInfoResult::getPayer()const
{
	return payer_;
}

std::string GetInvoiceInfoResult::getTaxNo()const
{
	return taxNo_;
}

GetInvoiceInfoResult::Use GetInvoiceInfoResult::getUse()const
{
	return use_;
}

std::string GetInvoiceInfoResult::getComments()const
{
	return comments_;
}

bool GetInvoiceInfoResult::getIsFee()const
{
	return isFee_;
}

std::string GetInvoiceInfoResult::getInvoiceNo()const
{
	return invoiceNo_;
}

GetInvoiceInfoResult::IncomeOutType GetInvoiceInfoResult::getIncomeOutType()const
{
	return incomeOutType_;
}

GetInvoiceInfoResult::BuyMethod GetInvoiceInfoResult::getBuyMethod()const
{
	return buyMethod_;
}

std::string GetInvoiceInfoResult::getLabelData()const
{
	return labelData_;
}

std::string GetInvoiceInfoResult::getType()const
{
	return type_;
}

std::vector<GetInvoiceInfoResult::DetailsItem> GetInvoiceInfoResult::getDetails()const
{
	return details_;
}

std::string GetInvoiceInfoResult::getTaxPct()const
{
	return taxPct_;
}

GetInvoiceInfoResult::PayMethod GetInvoiceInfoResult::getPayMethod()const
{
	return payMethod_;
}

std::string GetInvoiceInfoResult::getBaseTotalTax()const
{
	return baseTotalTax_;
}

long GetInvoiceInfoResult::getId()const
{
	return id_;
}

GetInvoiceInfoResult::FixedAssetType GetInvoiceInfoResult::getFixedAssetType()const
{
	return fixedAssetType_;
}

bool GetInvoiceInfoResult::getIsElectronic()const
{
	return isElectronic_;
}

GetInvoiceInfoResult::CustVendorId GetInvoiceInfoResult::getCustVendorId()const
{
	return custVendorId_;
}

