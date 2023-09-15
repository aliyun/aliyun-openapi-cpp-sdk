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

#include <alibabacloud/cams/model/GetChatappTemplateMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

GetChatappTemplateMetricResult::GetChatappTemplateMetricResult() :
	ServiceResult()
{}

GetChatappTemplateMetricResult::GetChatappTemplateMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetChatappTemplateMetricResult::~GetChatappTemplateMetricResult()
{}

void GetChatappTemplateMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["返回数据"];
	for (auto valueData返回数据 : allDataNode)
	{
		返回数据 dataObject;
		if(!valueData返回数据["TemplateCode"].isNull())
			dataObject.templateCode = valueData返回数据["TemplateCode"].asString();
		if(!valueData返回数据["Language"].isNull())
			dataObject.language = valueData返回数据["Language"].asString();
		if(!valueData返回数据["SentCount"].isNull())
			dataObject.sentCount = std::stoi(valueData返回数据["SentCount"].asString());
		if(!valueData返回数据["ReadCount"].isNull())
			dataObject.readCount = std::stoi(valueData返回数据["ReadCount"].asString());
		if(!valueData返回数据["DeliveredCount"].isNull())
			dataObject.deliveredCount = std::stoi(valueData返回数据["DeliveredCount"].asString());
		if(!valueData返回数据["Start"].isNull())
			dataObject.start = std::stol(valueData返回数据["Start"].asString());
		if(!valueData返回数据["End"].isNull())
			dataObject.end = std::stol(valueData返回数据["End"].asString());
		auto allClientedNode = valueData返回数据["Cliented"]["按钮点击数据"];
		for (auto valueData返回数据Cliented按钮点击数据 : allClientedNode)
		{
			返回数据::按钮点击数据 clientedObject;
			if(!valueData返回数据Cliented按钮点击数据["Type"].isNull())
				clientedObject.type = valueData返回数据Cliented按钮点击数据["Type"].asString();
			if(!valueData返回数据Cliented按钮点击数据["ButtonContent"].isNull())
				clientedObject.buttonContent = valueData返回数据Cliented按钮点击数据["ButtonContent"].asString();
			if(!valueData返回数据Cliented按钮点击数据["Count"].isNull())
				clientedObject.count = std::stoi(valueData返回数据Cliented按钮点击数据["Count"].asString());
			dataObject.cliented.push_back(clientedObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string GetChatappTemplateMetricResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string GetChatappTemplateMetricResult::getMessage()const
{
	return message_;
}

std::vector<GetChatappTemplateMetricResult::返回数据> GetChatappTemplateMetricResult::getData()const
{
	return data_;
}

std::string GetChatappTemplateMetricResult::getCode()const
{
	return code_;
}

