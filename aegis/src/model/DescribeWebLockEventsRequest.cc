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

#include <alibabacloud/aegis/model/DescribeWebLockEventsRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWebLockEventsRequest;

DescribeWebLockEventsRequest::DescribeWebLockEventsRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWebLockEvents")
{}

DescribeWebLockEventsRequest::~DescribeWebLockEventsRequest()
{}

std::string DescribeWebLockEventsRequest::getStatusList()const
{
	return statusList_;
}

void DescribeWebLockEventsRequest::setStatusList(const std::string& statusList)
{
	statusList_ = statusList;
	setCoreParameter("StatusList", std::to_string(statusList));
}

std::string DescribeWebLockEventsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWebLockEventsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string DescribeWebLockEventsRequest::getLevel()const
{
	return level_;
}

void DescribeWebLockEventsRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", std::to_string(level));
}

std::string DescribeWebLockEventsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeWebLockEventsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

int DescribeWebLockEventsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWebLockEventsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeWebLockEventsRequest::getRemark()const
{
	return remark_;
}

void DescribeWebLockEventsRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setCoreParameter("Remark", std::to_string(remark));
}

std::string DescribeWebLockEventsRequest::getDealed()const
{
	return dealed_;
}

void DescribeWebLockEventsRequest::setDealed(const std::string& dealed)
{
	dealed_ = dealed;
	setCoreParameter("Dealed", std::to_string(dealed));
}

int DescribeWebLockEventsRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeWebLockEventsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string DescribeWebLockEventsRequest::getTag()const
{
	return tag_;
}

void DescribeWebLockEventsRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", std::to_string(tag));
}

std::string DescribeWebLockEventsRequest::getLang()const
{
	return lang_;
}

void DescribeWebLockEventsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string DescribeWebLockEventsRequest::getEventName()const
{
	return eventName_;
}

void DescribeWebLockEventsRequest::setEventName(const std::string& eventName)
{
	eventName_ = eventName;
	setCoreParameter("EventName", std::to_string(eventName));
}

