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

#include <alibabacloud/vcs/model/ListCorpGroupMetricsRequest.h>

using AlibabaCloud::Vcs::Model::ListCorpGroupMetricsRequest;

ListCorpGroupMetricsRequest::ListCorpGroupMetricsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListCorpGroupMetrics")
{
	setMethod(HttpRequest::Method::Post);
}

ListCorpGroupMetricsRequest::~ListCorpGroupMetricsRequest()
{}

std::string ListCorpGroupMetricsRequest::getCorpId()const
{
	return corpId_;
}

void ListCorpGroupMetricsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListCorpGroupMetricsRequest::getGroupId()const
{
	return groupId_;
}

void ListCorpGroupMetricsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

std::string ListCorpGroupMetricsRequest::getEndTime()const
{
	return endTime_;
}

void ListCorpGroupMetricsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListCorpGroupMetricsRequest::getStartTime()const
{
	return startTime_;
}

void ListCorpGroupMetricsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListCorpGroupMetricsRequest::getDeviceId()const
{
	return deviceId_;
}

void ListCorpGroupMetricsRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setBodyParameter("DeviceId", deviceId);
}

std::string ListCorpGroupMetricsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCorpGroupMetricsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListCorpGroupMetricsRequest::getDeviceGroup()const
{
	return deviceGroup_;
}

void ListCorpGroupMetricsRequest::setDeviceGroup(const std::string& deviceGroup)
{
	deviceGroup_ = deviceGroup;
	setBodyParameter("DeviceGroup", deviceGroup);
}

std::string ListCorpGroupMetricsRequest::getTagCode()const
{
	return tagCode_;
}

void ListCorpGroupMetricsRequest::setTagCode(const std::string& tagCode)
{
	tagCode_ = tagCode;
	setBodyParameter("TagCode", tagCode);
}

std::string ListCorpGroupMetricsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCorpGroupMetricsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListCorpGroupMetricsRequest::getUserGroup()const
{
	return userGroup_;
}

void ListCorpGroupMetricsRequest::setUserGroup(const std::string& userGroup)
{
	userGroup_ = userGroup;
	setBodyParameter("UserGroup", userGroup);
}

