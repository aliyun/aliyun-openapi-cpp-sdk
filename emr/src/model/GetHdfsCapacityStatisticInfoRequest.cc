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

#include <alibabacloud/emr/model/GetHdfsCapacityStatisticInfoRequest.h>

using AlibabaCloud::Emr::Model::GetHdfsCapacityStatisticInfoRequest;

GetHdfsCapacityStatisticInfoRequest::GetHdfsCapacityStatisticInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "GetHdfsCapacityStatisticInfo")
{}

GetHdfsCapacityStatisticInfoRequest::~GetHdfsCapacityStatisticInfoRequest()
{}

std::string GetHdfsCapacityStatisticInfoRequest::getFromDatetime()const
{
	return fromDatetime_;
}

void GetHdfsCapacityStatisticInfoRequest::setFromDatetime(const std::string& fromDatetime)
{
	fromDatetime_ = fromDatetime;
	setParameter("FromDatetime", fromDatetime);
}

long GetHdfsCapacityStatisticInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetHdfsCapacityStatisticInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetHdfsCapacityStatisticInfoRequest::getRegionId()const
{
	return regionId_;
}

void GetHdfsCapacityStatisticInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetHdfsCapacityStatisticInfoRequest::getClusterId()const
{
	return clusterId_;
}

void GetHdfsCapacityStatisticInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetHdfsCapacityStatisticInfoRequest::getToDatetime()const
{
	return toDatetime_;
}

void GetHdfsCapacityStatisticInfoRequest::setToDatetime(const std::string& toDatetime)
{
	toDatetime_ = toDatetime;
	setParameter("ToDatetime", toDatetime);
}

std::string GetHdfsCapacityStatisticInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetHdfsCapacityStatisticInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

