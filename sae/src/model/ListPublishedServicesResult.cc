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

#include <alibabacloud/sae/model/ListPublishedServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListPublishedServicesResult::ListPublishedServicesResult() :
	ServiceResult()
{}

ListPublishedServicesResult::ListPublishedServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPublishedServicesResult::~ListPublishedServicesResult()
{}

void ListPublishedServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Type"].isNull())
			dataObject.type = valueDataDataItem["Type"].asString();
		if(!valueDataDataItem["Version"].isNull())
			dataObject.version = valueDataDataItem["Version"].asString();
		if(!valueDataDataItem["AppId"].isNull())
			dataObject.appId = valueDataDataItem["AppId"].asString();
		if(!valueDataDataItem["Group2Ip"].isNull())
			dataObject.group2Ip = valueDataDataItem["Group2Ip"].asString();
		if(!valueDataDataItem["Name"].isNull())
			dataObject.name = valueDataDataItem["Name"].asString();
		auto allGroups = value["Groups"]["Group"];
		for (auto value : allGroups)
			dataObject.groups.push_back(value.asString());
		auto allIps = value["Ips"]["Ip"];
		for (auto value : allIps)
			dataObject.ips.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListPublishedServicesResult::getMessage()const
{
	return message_;
}

std::string ListPublishedServicesResult::getTraceId()const
{
	return traceId_;
}

std::vector<ListPublishedServicesResult::DataItem> ListPublishedServicesResult::getData()const
{
	return data_;
}

std::string ListPublishedServicesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListPublishedServicesResult::getCode()const
{
	return code_;
}

bool ListPublishedServicesResult::getSuccess()const
{
	return success_;
}

