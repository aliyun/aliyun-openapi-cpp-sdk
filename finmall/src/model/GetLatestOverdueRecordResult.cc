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

#include <alibabacloud/finmall/model/GetLatestOverdueRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Finmall;
using namespace AlibabaCloud::Finmall::Model;

GetLatestOverdueRecordResult::GetLatestOverdueRecordResult() :
	ServiceResult()
{}

GetLatestOverdueRecordResult::GetLatestOverdueRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLatestOverdueRecordResult::~GetLatestOverdueRecordResult()
{}

void GetLatestOverdueRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["OverdueId"].isNull())
		data_.overdueId = dataNode["OverdueId"].asString();
	if(!dataNode["CreditId"].isNull())
		data_.creditId = dataNode["CreditId"].asString();
	if(!dataNode["OverdueType"].isNull())
		data_.overdueType = dataNode["OverdueType"].asString();
	if(!dataNode["CreditAccount"].isNull())
		data_.creditAccount = dataNode["CreditAccount"].asString();
	if(!dataNode["Principal"].isNull())
		data_.principal = dataNode["Principal"].asString();
	if(!dataNode["InterestAmount"].isNull())
		data_.interestAmount = dataNode["InterestAmount"].asString();
	if(!dataNode["InterestOfInterest"].isNull())
		data_.interestOfInterest = dataNode["InterestOfInterest"].asString();
	if(!dataNode["FineAmount"].isNull())
		data_.fineAmount = dataNode["FineAmount"].asString();
	if(!dataNode["FineInterest"].isNull())
		data_.fineInterest = dataNode["FineInterest"].asString();
	if(!dataNode["OverdueStartDate"].isNull())
		data_.overdueStartDate = dataNode["OverdueStartDate"].asString();
	if(!dataNode["OverdueDays"].isNull())
		data_.overdueDays = dataNode["OverdueDays"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetLatestOverdueRecordResult::getMessage()const
{
	return message_;
}

GetLatestOverdueRecordResult::Data GetLatestOverdueRecordResult::getData()const
{
	return data_;
}

std::string GetLatestOverdueRecordResult::getCode()const
{
	return code_;
}

