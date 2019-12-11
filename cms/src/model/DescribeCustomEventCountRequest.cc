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

#include <alibabacloud/cms/model/DescribeCustomEventCountRequest.h>

using AlibabaCloud::Cms::Model::DescribeCustomEventCountRequest;

DescribeCustomEventCountRequest::DescribeCustomEventCountRequest() :
	RpcServiceRequest("cms", "2019-01-01", "DescribeCustomEventCount")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCustomEventCountRequest::~DescribeCustomEventCountRequest()
{}

std::string DescribeCustomEventCountRequest::getEventId()const
{
	return eventId_;
}

void DescribeCustomEventCountRequest::setEventId(const std::string& eventId)
{
	eventId_ = eventId;
	setCoreParameter("EventId", eventId);
}

std::string DescribeCustomEventCountRequest::getLevel()const
{
	return level_;
}

void DescribeCustomEventCountRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", level);
}

std::string DescribeCustomEventCountRequest::getGroupId()const
{
	return groupId_;
}

void DescribeCustomEventCountRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeCustomEventCountRequest::getEndTime()const
{
	return endTime_;
}

void DescribeCustomEventCountRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeCustomEventCountRequest::getStartTime()const
{
	return startTime_;
}

void DescribeCustomEventCountRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeCustomEventCountRequest::getSearchKeywords()const
{
	return searchKeywords_;
}

void DescribeCustomEventCountRequest::setSearchKeywords(const std::string& searchKeywords)
{
	searchKeywords_ = searchKeywords;
	setCoreParameter("SearchKeywords", searchKeywords);
}

std::string DescribeCustomEventCountRequest::getName()const
{
	return name_;
}

void DescribeCustomEventCountRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

