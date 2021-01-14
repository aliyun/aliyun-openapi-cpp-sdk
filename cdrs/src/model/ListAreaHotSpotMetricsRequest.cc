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

#include <alibabacloud/cdrs/model/ListAreaHotSpotMetricsRequest.h>

using AlibabaCloud::CDRS::Model::ListAreaHotSpotMetricsRequest;

ListAreaHotSpotMetricsRequest::ListAreaHotSpotMetricsRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListAreaHotSpotMetrics")
{
	setMethod(HttpRequest::Method::Post);
}

ListAreaHotSpotMetricsRequest::~ListAreaHotSpotMetricsRequest()
{}

std::string ListAreaHotSpotMetricsRequest::getSchema()const
{
	return schema_;
}

void ListAreaHotSpotMetricsRequest::setSchema(const std::string& schema)
{
	schema_ = schema;
	setBodyParameter("Schema", schema);
}

std::string ListAreaHotSpotMetricsRequest::getCorpId()const
{
	return corpId_;
}

void ListAreaHotSpotMetricsRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string ListAreaHotSpotMetricsRequest::getEndTime()const
{
	return endTime_;
}

void ListAreaHotSpotMetricsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setBodyParameter("EndTime", endTime);
}

std::string ListAreaHotSpotMetricsRequest::getStartTime()const
{
	return startTime_;
}

void ListAreaHotSpotMetricsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setBodyParameter("StartTime", startTime);
}

std::string ListAreaHotSpotMetricsRequest::getDeviceId()const
{
	return deviceId_;
}

void ListAreaHotSpotMetricsRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setBodyParameter("DeviceId", deviceId);
}

std::string ListAreaHotSpotMetricsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListAreaHotSpotMetricsRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setBodyParameter("PageNumber", pageNumber);
}

std::string ListAreaHotSpotMetricsRequest::getPageSize()const
{
	return pageSize_;
}

void ListAreaHotSpotMetricsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", pageSize);
}

std::string ListAreaHotSpotMetricsRequest::getPersonId()const
{
	return personId_;
}

void ListAreaHotSpotMetricsRequest::setPersonId(const std::string& personId)
{
	personId_ = personId;
	setBodyParameter("PersonId", personId);
}

