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

#include <alibabacloud/aegis/model/DescribeWebLockEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWebLockEventsResult::DescribeWebLockEventsResult() :
	ServiceResult()
{}

DescribeWebLockEventsResult::DescribeWebLockEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebLockEventsResult::~DescribeWebLockEventsResult()
{}

void DescribeWebLockEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventListNode = value["EventList"]["EventInfo"];
	for (auto valueEventListEventInfo : allEventListNode)
	{
		EventInfo eventListObject;
		if(!valueEventListEventInfo["Id"].isNull())
			eventListObject.id = std::stol(valueEventListEventInfo["Id"].asString());
		if(!valueEventListEventInfo["Uuid"].isNull())
			eventListObject.uuid = valueEventListEventInfo["Uuid"].asString();
		if(!valueEventListEventInfo["Ip"].isNull())
			eventListObject.ip = valueEventListEventInfo["Ip"].asString();
		if(!valueEventListEventInfo["InternetIp"].isNull())
			eventListObject.internetIp = valueEventListEventInfo["InternetIp"].asString();
		if(!valueEventListEventInfo["IntranetIp"].isNull())
			eventListObject.intranetIp = valueEventListEventInfo["IntranetIp"].asString();
		if(!valueEventListEventInfo["InstanceName"].isNull())
			eventListObject.instanceName = valueEventListEventInfo["InstanceName"].asString();
		if(!valueEventListEventInfo["EventType"].isNull())
			eventListObject.eventType = valueEventListEventInfo["EventType"].asString();
		if(!valueEventListEventInfo["EventName"].isNull())
			eventListObject.eventName = valueEventListEventInfo["EventName"].asString();
		if(!valueEventListEventInfo["Level"].isNull())
			eventListObject.level = valueEventListEventInfo["Level"].asString();
		if(!valueEventListEventInfo["Status"].isNull())
			eventListObject.status = valueEventListEventInfo["Status"].asString();
		if(!valueEventListEventInfo["GmtEvent"].isNull())
			eventListObject.gmtEvent = std::stol(valueEventListEventInfo["GmtEvent"].asString());
		if(!valueEventListEventInfo["Path"].isNull())
			eventListObject.path = valueEventListEventInfo["Path"].asString();
		if(!valueEventListEventInfo["Solution"].isNull())
			eventListObject.solution = valueEventListEventInfo["Solution"].asString();
		eventList_.push_back(eventListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeWebLockEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWebLockEventsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeWebLockEventsResult::EventInfo> DescribeWebLockEventsResult::getEventList()const
{
	return eventList_;
}

int DescribeWebLockEventsResult::getCurrentPage()const
{
	return currentPage_;
}

