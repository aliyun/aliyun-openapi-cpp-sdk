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

#include <alibabacloud/emr/model/DescribeClusterServiceRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterServiceRequest;

DescribeClusterServiceRequest::DescribeClusterServiceRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterService")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClusterServiceRequest::~DescribeClusterServiceRequest()
{}

long DescribeClusterServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeClusterServiceRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterServiceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeClusterServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeClusterServiceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterServiceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeClusterServiceRequest::getServiceName()const
{
	return serviceName_;
}

void DescribeClusterServiceRequest::setServiceName(const std::string& serviceName)
{
	serviceName_ = serviceName;
	setParameter("ServiceName", serviceName);
}

