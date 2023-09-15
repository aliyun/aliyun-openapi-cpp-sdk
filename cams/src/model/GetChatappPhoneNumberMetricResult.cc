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

#include <alibabacloud/cams/model/GetChatappPhoneNumberMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

GetChatappPhoneNumberMetricResult::GetChatappPhoneNumberMetricResult() :
	ServiceResult()
{}

GetChatappPhoneNumberMetricResult::GetChatappPhoneNumberMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetChatappPhoneNumberMetricResult::~GetChatappPhoneNumberMetricResult()
{}

void GetChatappPhoneNumberMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["返回数据"];
	for (auto valueData返回数据 : allDataNode)
	{
		返回数据 dataObject;
		if(!valueData返回数据["SentCount"].isNull())
			dataObject.sentCount = std::stoi(valueData返回数据["SentCount"].asString());
		if(!valueData返回数据["DeliveredCount"].isNull())
			dataObject.deliveredCount = std::stoi(valueData返回数据["DeliveredCount"].asString());
		if(!valueData返回数据["Start"].isNull())
			dataObject.start = std::stol(valueData返回数据["Start"].asString());
		if(!valueData返回数据["End"].isNull())
			dataObject.end = std::stol(valueData返回数据["End"].asString());
		if(!valueData返回数据["PhoneNumber"].isNull())
			dataObject.phoneNumber = valueData返回数据["PhoneNumber"].asString();
		if(!valueData返回数据["Granularity"].isNull())
			dataObject.granularity = valueData返回数据["Granularity"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string GetChatappPhoneNumberMetricResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string GetChatappPhoneNumberMetricResult::getMessage()const
{
	return message_;
}

std::vector<GetChatappPhoneNumberMetricResult::返回数据> GetChatappPhoneNumberMetricResult::getData()const
{
	return data_;
}

std::string GetChatappPhoneNumberMetricResult::getCode()const
{
	return code_;
}

