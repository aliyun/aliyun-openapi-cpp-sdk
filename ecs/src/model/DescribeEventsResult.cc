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

#include <alibabacloud/ecs/model/DescribeEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeEventsResult::DescribeEventsResult() :
	ServiceResult()
{}

DescribeEventsResult::DescribeEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventsResult::~DescribeEventsResult()
{}

void DescribeEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Events"];
	for (auto value : allData)
	{
		Events dataObject;
		if(!value["ResourceId"].isNull())
			dataObject.resourceId = value["ResourceId"].asString();
		if(!value["EventType"].isNull())
			dataObject.eventType = value["EventType"].asString();
		if(!value["EventCategory"].isNull())
			dataObject.eventCategory = value["EventCategory"].asString();
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		if(!value["SupportModify"].isNull())
			dataObject.supportModify = value["SupportModify"].asString();
		if(!value["PlanTime"].isNull())
			dataObject.planTime = value["PlanTime"].asString();
		if(!value["ExpireTime"].isNull())
			dataObject.expireTime = value["ExpireTime"].asString();
		if(!value["EventId"].isNull())
			dataObject.eventId = value["EventId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEventsResult::getTotal()const
{
	return total_;
}

std::vector<DescribeEventsResult::Events> DescribeEventsResult::getData()const
{
	return data_;
}

int DescribeEventsResult::getPageNo()const
{
	return pageNo_;
}

