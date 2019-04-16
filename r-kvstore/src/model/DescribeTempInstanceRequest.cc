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

#include <alibabacloud/r-kvstore/model/DescribeTempInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeTempInstanceRequest;

DescribeTempInstanceRequest::DescribeTempInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeTempInstance")
{}

DescribeTempInstanceRequest::~DescribeTempInstanceRequest()
{}

long DescribeTempInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTempInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeTempInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeTempInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeTempInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeTempInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeTempInstanceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTempInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeTempInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeTempInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeTempInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTempInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTempInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTempInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

