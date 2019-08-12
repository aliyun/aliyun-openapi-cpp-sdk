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

#include <alibabacloud/emr/model/DescribeKafkaBrokerRequest.h>

using AlibabaCloud::Emr::Model::DescribeKafkaBrokerRequest;

DescribeKafkaBrokerRequest::DescribeKafkaBrokerRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeKafkaBroker")
{}

DescribeKafkaBrokerRequest::~DescribeKafkaBrokerRequest()
{}

long DescribeKafkaBrokerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeKafkaBrokerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeKafkaBrokerRequest::getRegionId()const
{
	return regionId_;
}

void DescribeKafkaBrokerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeKafkaBrokerRequest::getHostId()const
{
	return hostId_;
}

void DescribeKafkaBrokerRequest::setHostId(const std::string& hostId)
{
	hostId_ = hostId;
	setCoreParameter("HostId", hostId);
}

std::string DescribeKafkaBrokerRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeKafkaBrokerRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string DescribeKafkaBrokerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeKafkaBrokerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

