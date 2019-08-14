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

#include <alibabacloud/emr/model/StartKafkaBrokerDiskBalancerRequest.h>

using AlibabaCloud::Emr::Model::StartKafkaBrokerDiskBalancerRequest;

StartKafkaBrokerDiskBalancerRequest::StartKafkaBrokerDiskBalancerRequest() :
	RpcServiceRequest("emr", "2016-04-08", "StartKafkaBrokerDiskBalancer")
{}

StartKafkaBrokerDiskBalancerRequest::~StartKafkaBrokerDiskBalancerRequest()
{}

long StartKafkaBrokerDiskBalancerRequest::getThrottle()const
{
	return throttle_;
}

void StartKafkaBrokerDiskBalancerRequest::setThrottle(long throttle)
{
	throttle_ = throttle;
	setCoreParameter("Throttle", std::to_string(throttle));
}

long StartKafkaBrokerDiskBalancerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartKafkaBrokerDiskBalancerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int StartKafkaBrokerDiskBalancerRequest::getBrokerId()const
{
	return brokerId_;
}

void StartKafkaBrokerDiskBalancerRequest::setBrokerId(int brokerId)
{
	brokerId_ = brokerId;
	setCoreParameter("BrokerId", std::to_string(brokerId));
}

std::string StartKafkaBrokerDiskBalancerRequest::getRegionId()const
{
	return regionId_;
}

void StartKafkaBrokerDiskBalancerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string StartKafkaBrokerDiskBalancerRequest::getClusterId()const
{
	return clusterId_;
}

void StartKafkaBrokerDiskBalancerRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string StartKafkaBrokerDiskBalancerRequest::getBalanceThreshold()const
{
	return balanceThreshold_;
}

void StartKafkaBrokerDiskBalancerRequest::setBalanceThreshold(const std::string& balanceThreshold)
{
	balanceThreshold_ = balanceThreshold;
	setCoreParameter("BalanceThreshold", balanceThreshold);
}

std::string StartKafkaBrokerDiskBalancerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartKafkaBrokerDiskBalancerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

