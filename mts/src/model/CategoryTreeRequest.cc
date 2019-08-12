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

#include <alibabacloud/mts/model/CategoryTreeRequest.h>

using AlibabaCloud::Mts::Model::CategoryTreeRequest;

CategoryTreeRequest::CategoryTreeRequest() :
	RpcServiceRequest("mts", "2014-06-18", "CategoryTree")
{}

CategoryTreeRequest::~CategoryTreeRequest()
{}

long CategoryTreeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CategoryTreeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CategoryTreeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CategoryTreeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CategoryTreeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CategoryTreeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CategoryTreeRequest::getOwnerId()const
{
	return ownerId_;
}

void CategoryTreeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CategoryTreeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CategoryTreeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

