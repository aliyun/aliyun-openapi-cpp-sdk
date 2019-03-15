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

#include <alibabacloud/finmall/model/GetProductDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Finmall;
using namespace AlibabaCloud::Finmall::Model;

GetProductDetailResult::GetProductDetailResult() :
	ServiceResult()
{}

GetProductDetailResult::GetProductDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProductDetailResult::~GetProductDetailResult()
{}

void GetProductDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ProductId"].isNull())
		data_.productId = dataNode["ProductId"].asString();
	if(!dataNode["ProductName"].isNull())
		data_.productName = dataNode["ProductName"].asString();
	if(!dataNode["LendingOrganizations"].isNull())
		data_.lendingOrganizations = dataNode["LendingOrganizations"].asString();
	if(!dataNode["Terms"].isNull())
		data_.terms = dataNode["Terms"].asString();
	if(!dataNode["DailyRate"].isNull())
		data_.dailyRate = dataNode["DailyRate"].asString();
	if(!dataNode["YearRate"].isNull())
		data_.yearRate = dataNode["YearRate"].asString();
	if(!dataNode["FoundPartyName"].isNull())
		data_.foundPartyName = dataNode["FoundPartyName"].asString();
	if(!dataNode["FoundPartyId"].isNull())
		data_.foundPartyId = dataNode["FoundPartyId"].asString();
	if(!dataNode["InterestRate"].isNull())
		data_.interestRate = dataNode["InterestRate"].asString();
	if(!dataNode["PrincipalLimit"].isNull())
		data_.principalLimit = dataNode["PrincipalLimit"].asString();
	if(!dataNode["FinancialInfo"].isNull())
		data_.financialInfo = dataNode["FinancialInfo"].asString();
	if(!dataNode["FineAmount"].isNull())
		data_.fineAmount = dataNode["FineAmount"].asString();
	if(!dataNode["Comment"].isNull())
		data_.comment = dataNode["Comment"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string GetProductDetailResult::getMessage()const
{
	return message_;
}

GetProductDetailResult::Data GetProductDetailResult::getData()const
{
	return data_;
}

std::string GetProductDetailResult::getCode()const
{
	return code_;
}

