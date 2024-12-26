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

#include <alibabacloud/schedulerx3/model/ListRegionZoneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListRegionZoneResult::ListRegionZoneResult() :
	ServiceResult()
{}

ListRegionZoneResult::ListRegionZoneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRegionZoneResult::~ListRegionZoneResult()
{}

void ListRegionZoneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["ZoneId"].isNull())
			dataObject.zoneId = valueDatadataItem["ZoneId"].asString();
		if(!valueDatadataItem["LocalName"].isNull())
			dataObject.localName = valueDatadataItem["LocalName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListRegionZoneResult::getMessage()const
{
	return message_;
}

std::vector<ListRegionZoneResult::DataItem> ListRegionZoneResult::getData()const
{
	return data_;
}

std::string ListRegionZoneResult::getErrorCode()const
{
	return errorCode_;
}

int ListRegionZoneResult::getCode()const
{
	return code_;
}

bool ListRegionZoneResult::getSuccess()const
{
	return success_;
}

