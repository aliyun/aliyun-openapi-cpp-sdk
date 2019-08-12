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

#include <alibabacloud/emr/model/DescribeClusterServiceConfigTagForAdminRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterServiceConfigTagForAdminRequest;

DescribeClusterServiceConfigTagForAdminRequest::DescribeClusterServiceConfigTagForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterServiceConfigTagForAdmin")
{}

DescribeClusterServiceConfigTagForAdminRequest::~DescribeClusterServiceConfigTagForAdminRequest()
{}

long DescribeClusterServiceConfigTagForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterServiceConfigTagForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeClusterServiceConfigTagForAdminRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterServiceConfigTagForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeClusterServiceConfigTagForAdminRequest::getConfigTag()const
{
	return configTag_;
}

void DescribeClusterServiceConfigTagForAdminRequest::setConfigTag(const std::string& configTag)
{
	configTag_ = configTag;
	setCoreParameter("ConfigTag", std::to_string(configTag));
}

std::string DescribeClusterServiceConfigTagForAdminRequest::getServiceName()const
{
	return serviceName_;
}

void DescribeClusterServiceConfigTagForAdminRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", std::to_string(serviceName));
}

std::string DescribeClusterServiceConfigTagForAdminRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterServiceConfigTagForAdminRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string DescribeClusterServiceConfigTagForAdminRequest::getUserId()const
{
	return userId_;
}

void DescribeClusterServiceConfigTagForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", std::to_string(userId));
}

std::string DescribeClusterServiceConfigTagForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterServiceConfigTagForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

