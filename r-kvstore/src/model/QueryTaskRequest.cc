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

#include <alibabacloud/r-kvstore/model/QueryTaskRequest.h>

using AlibabaCloud::R_kvstore::Model::QueryTaskRequest;

QueryTaskRequest::QueryTaskRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "QueryTask")
{}

QueryTaskRequest::~QueryTaskRequest()
{}

long QueryTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryTaskRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryTaskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string QueryTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryTaskRequest::getRegionId()const
{
	return regionId_;
}

void QueryTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string QueryTaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryTaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string QueryTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

