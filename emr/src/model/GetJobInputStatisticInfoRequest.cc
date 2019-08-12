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

#include <alibabacloud/emr/model/GetJobInputStatisticInfoRequest.h>

using AlibabaCloud::Emr::Model::GetJobInputStatisticInfoRequest;

GetJobInputStatisticInfoRequest::GetJobInputStatisticInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetJobInputStatisticInfo")
{}

GetJobInputStatisticInfoRequest::~GetJobInputStatisticInfoRequest()
{}

std::string GetJobInputStatisticInfoRequest::getFromDatetime()const
{
	return fromDatetime_;
}

void GetJobInputStatisticInfoRequest::setFromDatetime(const std::string& fromDatetime)
{
	fromDatetime_ = fromDatetime;
	setCoreParameter("FromDatetime", fromDatetime);
}

long GetJobInputStatisticInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetJobInputStatisticInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetJobInputStatisticInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetJobInputStatisticInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int GetJobInputStatisticInfoRequest::getPageSize()const
{
	return pageSize_;
}

void GetJobInputStatisticInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string GetJobInputStatisticInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetJobInputStatisticInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string GetJobInputStatisticInfoRequest::getToDatetime()const
{
	return toDatetime_;
}

void GetJobInputStatisticInfoRequest::setToDatetime(const std::string& toDatetime)
{
	toDatetime_ = toDatetime;
	setCoreParameter("ToDatetime", toDatetime);
}

int GetJobInputStatisticInfoRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetJobInputStatisticInfoRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetJobInputStatisticInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetJobInputStatisticInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

