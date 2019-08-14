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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEventList = value["EventList"]["EventInfo"];
	for (auto value : allEventList)
	{
		EventInfo eventListObject;
		if(!value["Id"].isNull())
			eventListObject.id = std::stol(value["Id"].asString());
		if(!value["Uuid"].isNull())
			eventListObject.uuid = value["Uuid"].asString();
		if(!value["Ip"].isNull())
			eventListObject.ip = value["Ip"].asString();
		if(!value["InternetIp"].isNull())
			eventListObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			eventListObject.intranetIp = value["IntranetIp"].asString();
		if(!value["InstanceName"].isNull())
			eventListObject.instanceName = value["InstanceName"].asString();
		if(!value["EventType"].isNull())
			eventListObject.eventType = value["EventType"].asString();
		if(!value["EventName"].isNull())
			eventListObject.eventName = value["EventName"].asString();
		if(!value["Level"].isNull())
			eventListObject.level = value["Level"].asString();
		if(!value["Status"].isNull())
			eventListObject.status = value["Status"].asString();
		if(!value["GmtEvent"].isNull())
			eventListObject.gmtEvent = std::stol(value["GmtEvent"].asString());
		if(!value["Path"].isNull())
			eventListObject.path = value["Path"].asString();
		if(!value["Solution"].isNull())
			eventListObject.solution = value["Solution"].asString();
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

