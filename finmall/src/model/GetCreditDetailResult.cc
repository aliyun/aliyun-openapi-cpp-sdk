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

#include <alibabacloud/finmall/model/GetCreditDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Finmall;
using namespace AlibabaCloud::Finmall::Model;

GetCreditDetailResult::GetCreditDetailResult() :
	ServiceResult()
{}

GetCreditDetailResult::GetCreditDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCreditDetailResult::~GetCreditDetailResult()
{}

void GetCreditDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CreditId"].isNull())
		data_.creditId = dataNode["CreditId"].asString();
	if(!dataNode["ProductName"].isNull())
		data_.productName = dataNode["ProductName"].asString();
	if(!dataNode["LineOfCredit"].isNull())
		data_.lineOfCredit = dataNode["LineOfCredit"].asString();
	if(!dataNode["Amount"].isNull())
		data_.amount = dataNode["Amount"].asString();
	if(!dataNode["DebtorName"].isNull())
		data_.debtorName = dataNode["DebtorName"].asString();
	if(!dataNode["LoanBalance"].isNull())
		data_.loanBalance = dataNode["LoanBalance"].asString();
	if(!dataNode["RepayPhase"].isNull())
		data_.repayPhase = dataNode["RepayPhase"].asString();
	if(!dataNode["State"].isNull())
		data_.state = dataNode["State"].asString();
	if(!dataNode["CreateDate"].isNull())
		data_.createDate = dataNode["CreateDate"].asString();
	if(!dataNode["UpdateDate"].isNull())
		data_.updateDate = dataNode["UpdateDate"].asString();
	if(!dataNode["ProductId"].isNull())
		data_.productId = dataNode["ProductId"].asString();
	if(!dataNode["FundPartyId"].isNull())
		data_.fundPartyId = dataNode["FundPartyId"].asString();
	if(!dataNode["DownPaymentAmount"].isNull())
		data_.downPaymentAmount = dataNode["DownPaymentAmount"].asString();
	if(!dataNode["DownPaymentRate"].isNull())
		data_.downPaymentRate = dataNode["DownPaymentRate"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetCreditDetailResult::getMessage()const
{
	return message_;
}

GetCreditDetailResult::Data GetCreditDetailResult::getData()const
{
	return data_;
}

std::string GetCreditDetailResult::getCode()const
{
	return code_;
}

