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

#include <alibabacloud/emr/model/DescribeClusterMetaCollectRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterMetaCollectRequest;

DescribeClusterMetaCollectRequest::DescribeClusterMetaCollectRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterMetaCollect")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClusterMetaCollectRequest::~DescribeClusterMetaCollectRequest()
{}

long DescribeClusterMetaCollectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterMetaCollectRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeClusterMetaCollectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterMetaCollectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeClusterMetaCollectRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterMetaCollectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeClusterMetaCollectRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeClusterMetaCollectRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

