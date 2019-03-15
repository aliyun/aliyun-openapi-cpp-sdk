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

#include <alibabacloud/finmall/model/GetCurrentTermRepayInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Finmall;
using namespace AlibabaCloud::Finmall::Model;

GetCurrentTermRepayInfoResult::GetCurrentTermRepayInfoResult() :
	ServiceResult()
{}

GetCurrentTermRepayInfoResult::GetCurrentTermRepayInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCurrentTermRepayInfoResult::~GetCurrentTermRepayInfoResult()
{}

void GetCurrentTermRepayInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CreditId"].isNull())
		data_.creditId = dataNode["CreditId"].asString();
	if(!dataNode["BalAmt"].isNull())
		data_.balAmt = dataNode["BalAmt"].asString();
	if(!dataNode["InterAmt"].isNull())
		data_.interAmt = dataNode["InterAmt"].asString();
	if(!dataNode["FineAmt"].isNull())
		data_.fineAmt = dataNode["FineAmt"].asString();
	if(!dataNode["InterInter"].isNull())
		data_.interInter = dataNode["InterInter"].asString();
	if(!dataNode["FineInter"].isNull())
		data_.fineInter = dataNode["FineInter"].asString();
	if(!dataNode["ExpiryDate"].isNull())
		data_.expiryDate = dataNode["ExpiryDate"].asString();
	if(!dataNode["LoanBalance"].isNull())
		data_.loanBalance = dataNode["LoanBalance"].asString();
	if(!dataNode["TotalLoanAmount"].isNull())
		data_.totalLoanAmount = dataNode["TotalLoanAmount"].asString();
	if(!dataNode["RepayPrincipalAmount"].isNull())
		data_.repayPrincipalAmount = dataNode["RepayPrincipalAmount"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetCurrentTermRepayInfoResult::getMessage()const
{
	return message_;
}

GetCurrentTermRepayInfoResult::Data GetCurrentTermRepayInfoResult::getData()const
{
	return data_;
}

std::string GetCurrentTermRepayInfoResult::getCode()const
{
	return code_;
}

