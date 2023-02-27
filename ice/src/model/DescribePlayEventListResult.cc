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

#include <alibabacloud/ice/model/DescribePlayEventListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DescribePlayEventListResult::DescribePlayEventListResult() :
	ServiceResult()
{}

DescribePlayEventListResult::DescribePlayEventListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayEventListResult::~DescribePlayEventListResult()
{}

void DescribePlayEventListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventListNode = value["EventList"]["Data"];
	for (auto valueEventListData : allEventListNode)
	{
		Data eventListObject;
		if(!valueEventListData["Description"].isNull())
			eventListObject.description = valueEventListData["Description"].asString();
		if(!valueEventListData["EventName"].isNull())
			eventListObject.eventName = valueEventListData["EventName"].asString();
		if(!valueEventListData["Duration"].isNull())
			eventListObject.duration = std::stof(valueEventListData["Duration"].asString());
		if(!valueEventListData["Time"].isNull())
			eventListObject.time = std::stol(valueEventListData["Time"].asString());
		if(!valueEventListData["Topic"].isNull())
			eventListObject.topic = valueEventListData["Topic"].asString();
		eventList_.push_back(eventListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribePlayEventListResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePlayEventListResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribePlayEventListResult::Data> DescribePlayEventListResult::getEventList()const
{
	return eventList_;
}

long DescribePlayEventListResult::getPageNo()const
{
	return pageNo_;
}

