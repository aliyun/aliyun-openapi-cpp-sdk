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

#include <alibabacloud/live/model/DescribeShowListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeShowListResult::DescribeShowListResult() :
	ServiceResult()
{}

DescribeShowListResult::DescribeShowListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShowListResult::~DescribeShowListResult()
{}

void DescribeShowListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto showListInfoNode = value["ShowListInfo"];
	if(!showListInfoNode["CurrentShowId"].isNull())
		showListInfo_.currentShowId = showListInfoNode["CurrentShowId"].asString();
	if(!showListInfoNode["Background"].isNull())
		showListInfo_.background = showListInfoNode["Background"].asString();
	if(!showListInfoNode["Watermark"].isNull())
		showListInfo_.watermark = showListInfoNode["Watermark"].asString();
	if(!showListInfoNode["HighPriorityShowId"].isNull())
		showListInfo_.highPriorityShowId = showListInfoNode["HighPriorityShowId"].asString();
	if(!showListInfoNode["HighPriorityShowStartTime"].isNull())
		showListInfo_.highPriorityShowStartTime = showListInfoNode["HighPriorityShowStartTime"].asString();
	if(!showListInfoNode["ShowListRepeatTimes"].isNull())
		showListInfo_.showListRepeatTimes = std::stoi(showListInfoNode["ShowListRepeatTimes"].asString());
	if(!showListInfoNode["TotalShowListRepeatTimes"].isNull())
		showListInfo_.totalShowListRepeatTimes = std::stoi(showListInfoNode["TotalShowListRepeatTimes"].asString());
	auto allShowListNode = showListInfoNode["ShowList"]["Show"];
	for (auto showListInfoNodeShowListShow : allShowListNode)
	{
		ShowListInfo::Show showObject;
		if(!showListInfoNodeShowListShow["Duration"].isNull())
			showObject.duration = std::stol(showListInfoNodeShowListShow["Duration"].asString());
		if(!showListInfoNodeShowListShow["RepeatTimes"].isNull())
			showObject.repeatTimes = std::stoi(showListInfoNodeShowListShow["RepeatTimes"].asString());
		if(!showListInfoNodeShowListShow["ShowId"].isNull())
			showObject.showId = showListInfoNodeShowListShow["ShowId"].asString();
		if(!showListInfoNodeShowListShow["ShowName"].isNull())
			showObject.showName = showListInfoNodeShowListShow["ShowName"].asString();
		auto resourceInfoNode = value["ResourceInfo"];
		if(!resourceInfoNode["LiveInputType"].isNull())
			showObject.resourceInfo.liveInputType = std::stoi(resourceInfoNode["LiveInputType"].asString());
		if(!resourceInfoNode["ResourceId"].isNull())
			showObject.resourceInfo.resourceId = resourceInfoNode["ResourceId"].asString();
		if(!resourceInfoNode["ResourceType"].isNull())
			showObject.resourceInfo.resourceType = resourceInfoNode["ResourceType"].asString();
		if(!resourceInfoNode["ResourceUrl"].isNull())
			showObject.resourceInfo.resourceUrl = resourceInfoNode["ResourceUrl"].asString();
		showListInfo_.showList.push_back(showObject);
	}
	if(!value["ShowList"].isNull())
		showList_ = value["ShowList"].asString();

}

DescribeShowListResult::ShowListInfo DescribeShowListResult::getShowListInfo()const
{
	return showListInfo_;
}

std::string DescribeShowListResult::getShowList()const
{
	return showList_;
}

