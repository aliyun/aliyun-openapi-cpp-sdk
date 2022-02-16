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

#include <alibabacloud/emr/model/DescribeClusterServiceConfigRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterServiceConfigRequest;

DescribeClusterServiceConfigRequest::DescribeClusterServiceConfigRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterServiceConfig")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClusterServiceConfigRequest::~DescribeClusterServiceConfigRequest()
{}

long DescribeClusterServiceConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterServiceConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeClusterServiceConfigRequest::getHostInstanceId()const
{
	return hostInstanceId_;
}

void DescribeClusterServiceConfigRequest::setHostInstanceId(const std::string& hostInstanceId)
{
	hostInstanceId_ = hostInstanceId;
	setParameter("HostInstanceId", hostInstanceId);
}

std::string DescribeClusterServiceConfigRequest::getTagValue()const
{
	return tagValue_;
}

void DescribeClusterServiceConfigRequest::setTagValue(const std::string& tagValue)
{
	tagValue_ = tagValue;
	setParameter("TagValue", tagValue);
}

std::string DescribeClusterServiceConfigRequest::getGroupId()const
{
	return groupId_;
}

void DescribeClusterServiceConfigRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string DescribeClusterServiceConfigRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterServiceConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeClusterServiceConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterServiceConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeClusterServiceConfigRequest::getConfigVersion()const
{
	return configVersion_;
}

void DescribeClusterServiceConfigRequest::setConfigVersion(const std::string& configVersion)
{
	configVersion_ = configVersion;
	setParameter("ConfigVersion", configVersion);
}

std::string DescribeClusterServiceConfigRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterServiceConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeClusterServiceConfigRequest::getServiceName()const
{
	return serviceName_;
}

void DescribeClusterServiceConfigRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

