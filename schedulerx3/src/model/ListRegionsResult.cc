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

#include <alibabacloud/schedulerx3/model/ListRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

ListRegionsResult::ListRegionsResult() :
	ServiceResult()
{}

ListRegionsResult::ListRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRegionsResult::~ListRegionsResult()
{}

void ListRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["Region"];
	for (auto valueRegionsRegion : allRegionsNode)
	{
		Region regionsObject;
		if(!valueRegionsRegion["RegionEndpoint"].isNull())
			regionsObject.regionEndpoint = valueRegionsRegion["RegionEndpoint"].asString();
		if(!valueRegionsRegion["LocalName"].isNull())
			regionsObject.localName = valueRegionsRegion["LocalName"].asString();
		if(!valueRegionsRegion["RegionId"].isNull())
			regionsObject.regionId = valueRegionsRegion["RegionId"].asString();
		regions_.push_back(regionsObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListRegionsResult::getMessage()const
{
	return message_;
}

std::vector<ListRegionsResult::Region> ListRegionsResult::getRegions()const
{
	return regions_;
}

int ListRegionsResult::getCode()const
{
	return code_;
}

bool ListRegionsResult::getSuccess()const
{
	return success_;
}

