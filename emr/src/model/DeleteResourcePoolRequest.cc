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

#include <alibabacloud/emr/model/DeleteResourcePoolRequest.h>

using AlibabaCloud::Emr::Model::DeleteResourcePoolRequest;

DeleteResourcePoolRequest::DeleteResourcePoolRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteResourcePool")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteResourcePoolRequest::~DeleteResourcePoolRequest()
{}

long DeleteResourcePoolRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteResourcePoolRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteResourcePoolRequest::getResourcePoolId()const
{
	return resourcePoolId_;
}

void DeleteResourcePoolRequest::setResourcePoolId(const std::string& resourcePoolId)
{
	resourcePoolId_ = resourcePoolId;
	setParameter("ResourcePoolId", resourcePoolId);
}

std::string DeleteResourcePoolRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteResourcePoolRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteResourcePoolRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteResourcePoolRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteResourcePoolRequest::getRegionId()const
{
	return regionId_;
}

void DeleteResourcePoolRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

