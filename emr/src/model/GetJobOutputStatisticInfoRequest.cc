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

#include <alibabacloud/emr/model/GetJobOutputStatisticInfoRequest.h>

using AlibabaCloud::Emr::Model::GetJobOutputStatisticInfoRequest;

GetJobOutputStatisticInfoRequest::GetJobOutputStatisticInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetJobOutputStatisticInfo")
{
	setMethod(HttpRequest::Method::Post);
}

GetJobOutputStatisticInfoRequest::~GetJobOutputStatisticInfoRequest()
{}

std::string GetJobOutputStatisticInfoRequest::getFromDatetime()const
{
	return fromDatetime_;
}

void GetJobOutputStatisticInfoRequest::setFromDatetime(const std::string& fromDatetime)
{
	fromDatetime_ = fromDatetime;
	setParameter("FromDatetime", fromDatetime);
}

long GetJobOutputStatisticInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetJobOutputStatisticInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetJobOutputStatisticInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetJobOutputStatisticInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetJobOutputStatisticInfoRequest::getToDatetime()const
{
	return toDatetime_;
}

void GetJobOutputStatisticInfoRequest::setToDatetime(const std::string& toDatetime)
{
	toDatetime_ = toDatetime;
	setParameter("ToDatetime", toDatetime);
}

int GetJobOutputStatisticInfoRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetJobOutputStatisticInfoRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetJobOutputStatisticInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetJobOutputStatisticInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetJobOutputStatisticInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetJobOutputStatisticInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int GetJobOutputStatisticInfoRequest::getPageSize()const
{
	return pageSize_;
}

void GetJobOutputStatisticInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

