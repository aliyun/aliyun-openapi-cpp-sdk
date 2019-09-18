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

#include <alibabacloud/rtc/model/DescribeRecordListRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRecordListRequest;

DescribeRecordListRequest::DescribeRecordListRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRecordList")
{}

DescribeRecordListRequest::~DescribeRecordListRequest()
{}

std::string DescribeRecordListRequest::getSortType()const
{
	return sortType_;
}

void DescribeRecordListRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setCoreParameter("SortType", sortType);
}

std::string DescribeRecordListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRecordListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeRecordListRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRecordListRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", serviceArea);
}

long DescribeRecordListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRecordListRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRecordListRequest::getId()const
{
	return id_;
}

void DescribeRecordListRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string DescribeRecordListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRecordListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeRecordListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecordListRequest::getIdType()const
{
	return idType_;
}

void DescribeRecordListRequest::setIdType(const std::string& idType)
{
	idType_ = idType;
	setCoreParameter("IdType", idType);
}

long DescribeRecordListRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeRecordListRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setCoreParameter("PageNo", std::to_string(pageNo));
}

std::string DescribeRecordListRequest::getAppId()const
{
	return appId_;
}

void DescribeRecordListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

