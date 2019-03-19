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

#include <alibabacloud/bssopenapi/model/QueryAccountBookListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::BssOpenApi;
using namespace AlibabaCloud::BssOpenApi::Model;

QueryAccountBookListResult::QueryAccountBookListResult() :
	ServiceResult()
{}

QueryAccountBookListResult::QueryAccountBookListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryAccountBookListResult::~QueryAccountBookListResult()
{}

void QueryAccountBookListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDatas = value["Datas"]["Data"];
	for (auto value : allDatas)
	{
		Data datasObject;
		if(!value["UserId"].isNull())
			datasObject.userId = std::stol(value["UserId"].asString());
		if(!value["Bid"].isNull())
			datasObject.bid = value["Bid"].asString();
		if(!value["ItemCode"].isNull())
			datasObject.itemCode = value["ItemCode"].asString();
		if(!value["Amount"].isNull())
			datasObject.amount = value["Amount"].asString();
		if(!value["EffectTimeStamp"].isNull())
			datasObject.effectTimeStamp = std::stol(value["EffectTimeStamp"].asString());
		if(!value["InvalidTimeStamp"].isNull())
			datasObject.invalidTimeStamp = std::stol(value["InvalidTimeStamp"].asString());
		if(!value["Currency"].isNull())
			datasObject.currency = value["Currency"].asString();
		datas_.push_back(datasObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string QueryAccountBookListResult::getMessage()const
{
	return message_;
}

std::vector<QueryAccountBookListResult::Data> QueryAccountBookListResult::getDatas()const
{
	return datas_;
}

int QueryAccountBookListResult::getCount()const
{
	return count_;
}

std::string QueryAccountBookListResult::getCode()const
{
	return code_;
}

bool QueryAccountBookListResult::getSuccess()const
{
	return success_;
}

