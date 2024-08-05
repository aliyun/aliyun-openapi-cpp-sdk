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

#include <alibabacloud/arms/model/QueryCommercialUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

QueryCommercialUsageResult::QueryCommercialUsageResult() :
	ServiceResult()
{}

QueryCommercialUsageResult::QueryCommercialUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCommercialUsageResult::~QueryCommercialUsageResult()
{}

void QueryCommercialUsageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Complete"].isNull())
		data_.complete = dataNode["Complete"].asString() == "true";
		auto allItems = dataNode["Items"]["items"];
		for (auto value : allItems)
			data_.items.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryCommercialUsageResult::getMessage()const
{
	return message_;
}

int QueryCommercialUsageResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

QueryCommercialUsageResult::Data QueryCommercialUsageResult::getData()const
{
	return data_;
}

int QueryCommercialUsageResult::getCode()const
{
	return code_;
}

bool QueryCommercialUsageResult::getSuccess()const
{
	return success_;
}

