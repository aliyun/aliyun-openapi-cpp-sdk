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

#include <alibabacloud/emr/model/OfflineKafkaBrokerRequest.h>

using AlibabaCloud::Emr::Model::OfflineKafkaBrokerRequest;

OfflineKafkaBrokerRequest::OfflineKafkaBrokerRequest() :
	RpcServiceRequest("emr", "2016-04-08", "OfflineKafkaBroker")
{}

OfflineKafkaBrokerRequest::~OfflineKafkaBrokerRequest()
{}

long OfflineKafkaBrokerRequest::getThrottle()const
{
	return throttle_;
}

void OfflineKafkaBrokerRequest::setThrottle(long throttle)
{
	throttle_ = throttle;
	setCoreParameter("Throttle", throttle);
}

long OfflineKafkaBrokerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OfflineKafkaBrokerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string OfflineKafkaBrokerRequest::getRegionId()const
{
	return regionId_;
}

void OfflineKafkaBrokerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string OfflineKafkaBrokerRequest::getHostId()const
{
	return hostId_;
}

void OfflineKafkaBrokerRequest::setHostId(const std::string& hostId)
{
	hostId_ = hostId;
	setCoreParameter("HostId", hostId);
}

std::string OfflineKafkaBrokerRequest::getClusterId()const
{
	return clusterId_;
}

void OfflineKafkaBrokerRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string OfflineKafkaBrokerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OfflineKafkaBrokerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

