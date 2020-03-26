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

#include <alibabacloud/emr/model/RefreshClusterResourcePoolRequest.h>

using AlibabaCloud::Emr::Model::RefreshClusterResourcePoolRequest;

RefreshClusterResourcePoolRequest::RefreshClusterResourcePoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RefreshClusterResourcePool")
{
	setMethod(HttpRequest::Method::Post);
}

RefreshClusterResourcePoolRequest::~RefreshClusterResourcePoolRequest()
{}

long RefreshClusterResourcePoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RefreshClusterResourcePoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long RefreshClusterResourcePoolRequest::getResourcePoolId()const
{
	return resourcePoolId_;
}

void RefreshClusterResourcePoolRequest::setResourcePoolId(long resourcePoolId)
{
	resourcePoolId_ = resourcePoolId;
	setParameter("ResourcePoolId", std::to_string(resourcePoolId));
}

std::string RefreshClusterResourcePoolRequest::getClusterId()const
{
	return clusterId_;
}

void RefreshClusterResourcePoolRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string RefreshClusterResourcePoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RefreshClusterResourcePoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string RefreshClusterResourcePoolRequest::getRegionId()const
{
	return regionId_;
}

void RefreshClusterResourcePoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

