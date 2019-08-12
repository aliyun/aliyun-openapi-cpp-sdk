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

#include <alibabacloud/emr/model/DescribeClusterServiceConfigForAdminRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterServiceConfigForAdminRequest;

DescribeClusterServiceConfigForAdminRequest::DescribeClusterServiceConfigForAdminRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterServiceConfigForAdmin")
{}

DescribeClusterServiceConfigForAdminRequest::~DescribeClusterServiceConfigForAdminRequest()
{}

long DescribeClusterServiceConfigForAdminRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterServiceConfigForAdminRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeClusterServiceConfigForAdminRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void DescribeClusterServiceConfigForAdminRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setCoreParameter("HostInstanceId", std::to_string(hostInstanceId));
}

std::string DescribeClusterServiceConfigForAdminRequest::getTagValue()const
{
	return tagValue_;
}

void DescribeClusterServiceConfigForAdminRequest::setTagValue(const std::string& tagValue)
{
	tagValue_ = tagValue;
	setCoreParameter("TagValue", std::to_string(tagValue));
}

std::string DescribeClusterServiceConfigForAdminRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterServiceConfigForAdminRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeClusterServiceConfigForAdminRequest::getGroupId()const
{
	return groupId_;
}

void DescribeClusterServiceConfigForAdminRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string DescribeClusterServiceConfigForAdminRequest::getServiceName()const
{
	return serviceName_;
}

void DescribeClusterServiceConfigForAdminRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setCoreParameter("ServiceName", std::to_string(serviceName));
}

std::string DescribeClusterServiceConfigForAdminRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterServiceConfigForAdminRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::string DescribeClusterServiceConfigForAdminRequest::getUserId()const
{
	return userId_;
}

void DescribeClusterServiceConfigForAdminRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", std::to_string(userId));
}

std::string DescribeClusterServiceConfigForAdminRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterServiceConfigForAdminRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeClusterServiceConfigForAdminRequest::getConfigVersion()const
{
	return configVersion_;
}

void DescribeClusterServiceConfigForAdminRequest::setConfigVersion(const std::string& configVersion)
{
	configVersion_ = configVersion;
	setCoreParameter("ConfigVersion", std::to_string(configVersion));
}

