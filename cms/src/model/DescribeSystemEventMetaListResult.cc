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

#include <alibabacloud/cms/model/DescribeSystemEventMetaListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeSystemEventMetaListResult::DescribeSystemEventMetaListResult() :
	ServiceResult()
{}

DescribeSystemEventMetaListResult::DescribeSystemEventMetaListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSystemEventMetaListResult::~DescribeSystemEventMetaListResult()
{}

void DescribeSystemEventMetaListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Resource"];
	for (auto valueDataResource : allDataNode)
	{
		Resource dataObject;
		if(!valueDataResource["Status"].isNull())
			dataObject.status = valueDataResource["Status"].asString();
		if(!valueDataResource["EventType"].isNull())
			dataObject.eventType = valueDataResource["EventType"].asString();
		if(!valueDataResource["Product"].isNull())
			dataObject.product = valueDataResource["Product"].asString();
		if(!valueDataResource["NameDesc"].isNull())
			dataObject.nameDesc = valueDataResource["NameDesc"].asString();
		if(!valueDataResource["NameDesc.En"].isNull())
			dataObject.nameDescEn = valueDataResource["NameDesc.En"].asString();
		if(!valueDataResource["Name"].isNull())
			dataObject.name = valueDataResource["Name"].asString();
		if(!valueDataResource["StatusDesc"].isNull())
			dataObject.statusDesc = valueDataResource["StatusDesc"].asString();
		if(!valueDataResource["Level"].isNull())
			dataObject.level = valueDataResource["Level"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeSystemEventMetaListResult::getMessage()const
{
	return message_;
}

std::vector<DescribeSystemEventMetaListResult::Resource> DescribeSystemEventMetaListResult::getData()const
{
	return data_;
}

int DescribeSystemEventMetaListResult::getCode()const
{
	return code_;
}

bool DescribeSystemEventMetaListResult::getSuccess()const
{
	return success_;
}

