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

#include <alibabacloud/emr/model/GetJobRunningTimeStatisticInfoRequest.h>

using AlibabaCloud::Emr::Model::GetJobRunningTimeStatisticInfoRequest;

GetJobRunningTimeStatisticInfoRequest::GetJobRunningTimeStatisticInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetJobRunningTimeStatisticInfo")
{}

GetJobRunningTimeStatisticInfoRequest::~GetJobRunningTimeStatisticInfoRequest()
{}

std::string GetJobRunningTimeStatisticInfoRequest::getFromDatetime()const
{
	return fromDatetime_;
}

void GetJobRunningTimeStatisticInfoRequest::setFromDatetime(const std::string& fromDatetime)
{
	fromDatetime_ = fromDatetime;
	setCoreParameter("FromDatetime", std::to_string(fromDatetime));
}

long GetJobRunningTimeStatisticInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetJobRunningTimeStatisticInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetJobRunningTimeStatisticInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetJobRunningTimeStatisticInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int GetJobRunningTimeStatisticInfoRequest::getPageSize()const
{
	return pageSize_;
}

void GetJobRunningTimeStatisticInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string GetJobRunningTimeStatisticInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetJobRunningTimeStatisticInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string GetJobRunningTimeStatisticInfoRequest::getToDatetime()const
{
	return toDatetime_;
}

void GetJobRunningTimeStatisticInfoRequest::setToDatetime(const std::string& toDatetime)
{
	toDatetime_ = toDatetime;
	setCoreParameter("ToDatetime", std::to_string(toDatetime));
}

int GetJobRunningTimeStatisticInfoRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetJobRunningTimeStatisticInfoRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string GetJobRunningTimeStatisticInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetJobRunningTimeStatisticInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

