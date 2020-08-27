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

#include <alibabacloud/vcs/model/ListCorpMetricsRequest.h>

using AlibabaCloud::Vcs::Model::ListCorpMetricsRequest;

ListCorpMetricsRequest::ListCorpMetricsRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "ListCorpMetrics")
{
	setMethod(HttpRequest::Method::Post);
}

ListCorpMetricsRequest::~ListCorpMetricsRequest()
{}

std::string ListCorpMetricsRequest::getCorpId()const
{
	return corpId_;
}

void ListCorpMetricsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListCorpMetricsRequest::getEndTime()const
{
	return endTime_;
}

void ListCorpMetricsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListCorpMetricsRequest::getStartTime()const
{
	return startTime_;
}

void ListCorpMetricsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListCorpMetricsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCorpMetricsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListCorpMetricsRequest::getDeviceGroupList()const
{
	return deviceGroupList_;
}

void ListCorpMetricsRequest::setDeviceGroupList(const std::string& deviceGroupList)
{
	deviceGroupList_ = deviceGroupList;
	setBodyParameter("DeviceGroupList", deviceGroupList);
}

std::string ListCorpMetricsRequest::getTagCode()const
{
	return tagCode_;
}

void ListCorpMetricsRequest::setTagCode(const std::string& tagCode)
{
	tagCode_ = tagCode;
	setBodyParameter("TagCode", tagCode);
}

std::string ListCorpMetricsRequest::getUserGroupList()const
{
	return userGroupList_;
}

void ListCorpMetricsRequest::setUserGroupList(const std::string& userGroupList)
{
	userGroupList_ = userGroupList;
	setBodyParameter("UserGroupList", userGroupList);
}

std::string ListCorpMetricsRequest::getPageSize()const
{
	return pageSize_;
}

void ListCorpMetricsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListCorpMetricsRequest::getDeviceIdList()const
{
	return deviceIdList_;
}

void ListCorpMetricsRequest::setDeviceIdList(const std::string& deviceIdList)
{
	deviceIdList_ = deviceIdList;
	setBodyParameter("DeviceIdList", deviceIdList);
}

