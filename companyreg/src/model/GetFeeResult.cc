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

#include <alibabacloud/companyreg/model/GetFeeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetFeeResult::GetFeeResult() :
	ServiceResult()
{}

GetFeeResult::GetFeeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFeeResult::~GetFeeResult()
{}

void GetFeeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
	auto feeTypeEnumNode = value["FeeTypeEnum"];
	if(!feeTypeEnumNode["Label"].isNull())
		feeTypeEnum_.label = feeTypeEnumNode["Label"].asString();
	if(!feeTypeEnumNode["Value"].isNull())
		feeTypeEnum_.value = feeTypeEnumNode["Value"].asString();
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
	auto useNode = value["Use"];
	if(!useNode["Key"].isNull())
		use_.key = useNode["Key"].asString();
	if(!useNode["Value"].isNull())
		use_.value = useNode["Value"].asString();
	if(!value["AcctgPeriod"].isNull())
		acctgPeriod_ = value["AcctgPeriod"].asString();
	if(!value["BaseTotalAmount"].isNull())
		baseTotalAmount_ = value["BaseTotalAmount"].asString();
	if(!value["BaseTotalAmountWithoutTax"].isNull())
		baseTotalAmountWithoutTax_ = value["BaseTotalAmountWithoutTax"].asString();
	if(!value["BaseTotalTax"].isNull())
		baseTotalTax_ = value["BaseTotalTax"].asString();
	if(!value["CreatedStamp"].isNull())
		createdStamp_ = std::stol(value["CreatedStamp"].asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["Payer"].isNull())
		payer_ = value["Payer"].asString();
	if(!value["CanUpdate"].isNull())
		canUpdate_ = value["CanUpdate"].asString() == "true";
	if(!value["LabelData"].isNull())
		labelData_ = value["LabelData"].asString();

}

std::string GetFeeResult::getPayer()const
{
	return payer_;
}

GetFeeResult::Use GetFeeResult::getUse()const
{
	return use_;
}

GetFeeResult::FeeTypeEnum GetFeeResult::getFeeTypeEnum()const
{
	return feeTypeEnum_;
}

std::string GetFeeResult::getUrl()const
{
	return url_;
}

std::string GetFeeResult::getBaseTotalAmount()const
{
	return baseTotalAmount_;
}

std::string GetFeeResult::getLabelData()const
{
	return labelData_;
}

std::vector<GetFeeResult::AcctgTransList> GetFeeResult::getVoucherTransList()const
{
	return voucherTransList_;
}

std::string GetFeeResult::getAcctgPeriod()const
{
	return acctgPeriod_;
}

bool GetFeeResult::getCanUpdate()const
{
	return canUpdate_;
}

GetFeeResult::Kind GetFeeResult::getKind()const
{
	return kind_;
}

GetFeeResult::PayMethod GetFeeResult::getPayMethod()const
{
	return payMethod_;
}

std::string GetFeeResult::getBaseTotalAmountWithoutTax()const
{
	return baseTotalAmountWithoutTax_;
}

std::string GetFeeResult::getBaseTotalTax()const
{
	return baseTotalTax_;
}

long GetFeeResult::getId()const
{
	return id_;
}

long GetFeeResult::getCreatedStamp()const
{
	return createdStamp_;
}

