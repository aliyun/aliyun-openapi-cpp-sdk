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

#include <alibabacloud/emr/model/GetQueueInputStatisticInfoRequest.h>

using AlibabaCloud::Emr::Model::GetQueueInputStatisticInfoRequest;

GetQueueInputStatisticInfoRequest::GetQueueInputStatisticInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetQueueInputStatisticInfo")
{}

GetQueueInputStatisticInfoRequest::~GetQueueInputStatisticInfoRequest()
{}

std::string GetQueueInputStatisticInfoRequest::getFromDatetime()const
{
	return fromDatetime_;
}

void GetQueueInputStatisticInfoRequest::setFromDatetime(const std::string& fromDatetime)
{
	fromDatetime_ = fromDatetime;
	setCoreParameter("FromDatetime", std::to_string(fromDatetime));
}

long GetQueueInputStatisticInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetQueueInputStatisticInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string GetQueueInputStatisticInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetQueueInputStatisticInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string GetQueueInputStatisticInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetQueueInputStatisticInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string GetQueueInputStatisticInfoRequest::getToDatetime()const
{
	return toDatetime_;
}

void GetQueueInputStatisticInfoRequest::setToDatetime(const std::string& toDatetime)
{
	toDatetime_ = toDatetime;
	setCoreParameter("ToDatetime", std::to_string(toDatetime));
}

std::string GetQueueInputStatisticInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetQueueInputStatisticInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

