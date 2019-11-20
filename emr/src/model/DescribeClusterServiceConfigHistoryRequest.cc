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

#include <alibabacloud/emr/model/DescribeClusterServiceConfigHistoryRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterServiceConfigHistoryRequest;

DescribeClusterServiceConfigHistoryRequest::DescribeClusterServiceConfigHistoryRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterServiceConfigHistory")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClusterServiceConfigHistoryRequest::~DescribeClusterServiceConfigHistoryRequest()
{}

long DescribeClusterServiceConfigHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterServiceConfigHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeClusterServiceConfigHistoryRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterServiceConfigHistoryRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string DescribeClusterServiceConfigHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterServiceConfigHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeClusterServiceConfigHistoryRequest::getConfigVersion()const
{
	return configVersion_;
}

void DescribeClusterServiceConfigHistoryRequest::setConfigVersion(const std::string& configVersion)
{
	configVersion_ = configVersion;
	setCoreParameter("ConfigVersion", configVersion);
}

std::string DescribeClusterServiceConfigHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterServiceConfigHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeClusterServiceConfigHistoryRequest::getServiceName()const
{
	return serviceName_;
}

void DescribeClusterServiceConfigHistoryRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", serviceName);
}

