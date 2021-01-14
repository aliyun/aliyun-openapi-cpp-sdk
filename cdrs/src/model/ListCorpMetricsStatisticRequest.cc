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

#include <alibabacloud/cdrs/model/ListCorpMetricsStatisticRequest.h>

using AlibabaCloud::CDRS::Model::ListCorpMetricsStatisticRequest;

ListCorpMetricsStatisticRequest::ListCorpMetricsStatisticRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListCorpMetricsStatistic")
{
	setMethod(HttpRequest::Method::Post);
}

ListCorpMetricsStatisticRequest::~ListCorpMetricsStatisticRequest()
{}

std::string ListCorpMetricsStatisticRequest::getSchema()const
{
	return schema_;
}

void ListCorpMetricsStatisticRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListCorpMetricsStatisticRequest::getCorpId()const
{
	return corpId_;
}

void ListCorpMetricsStatisticRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListCorpMetricsStatisticRequest::getEndTime()const
{
	return endTime_;
}

void ListCorpMetricsStatisticRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListCorpMetricsStatisticRequest::getStartTime()const
{
	return startTime_;
}

void ListCorpMetricsStatisticRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

long ListCorpMetricsStatisticRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListCorpMetricsStatisticRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListCorpMetricsStatisticRequest::getDeviceGroupList()const
{
	return deviceGroupList_;
}

void ListCorpMetricsStatisticRequest::setDeviceGroupList(const std::string& deviceGroupList)
{
	deviceGroupList_ = deviceGroupList;
	setBodyParameter("DeviceGroupList", deviceGroupList);
}

std::string ListCorpMetricsStatisticRequest::getTagCode()const
{
	return tagCode_;
}

void ListCorpMetricsStatisticRequest::setTagCode(const std::string& tagCode)
{
	tagCode_ = tagCode;
	setBodyParameter("TagCode", tagCode);
}

std::string ListCorpMetricsStatisticRequest::getUserGroupList()const
{
	return userGroupList_;
}

void ListCorpMetricsStatisticRequest::setUserGroupList(const std::string& userGroupList)
{
	userGroupList_ = userGroupList;
	setBodyParameter("UserGroupList", userGroupList);
}

long ListCorpMetricsStatisticRequest::getPageSize()const
{
	return pageSize_;
}

void ListCorpMetricsStatisticRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

std::string ListCorpMetricsStatisticRequest::getDeviceIdList()const
{
	return deviceIdList_;
}

void ListCorpMetricsStatisticRequest::setDeviceIdList(const std::string& deviceIdList)
{
	deviceIdList_ = deviceIdList;
	setBodyParameter("DeviceIdList", deviceIdList);
}

