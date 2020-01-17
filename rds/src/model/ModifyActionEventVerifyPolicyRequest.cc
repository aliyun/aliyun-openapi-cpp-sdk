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

#include <alibabacloud/rds/model/ModifyActionEventVerifyPolicyRequest.h>

using AlibabaCloud::Rds::Model::ModifyActionEventVerifyPolicyRequest;

ModifyActionEventVerifyPolicyRequest::ModifyActionEventVerifyPolicyRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyActionEventVerifyPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyActionEventVerifyPolicyRequest::~ModifyActionEventVerifyPolicyRequest()
{}

long ModifyActionEventVerifyPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyActionEventVerifyPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyActionEventVerifyPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyActionEventVerifyPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long ModifyActionEventVerifyPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyActionEventVerifyPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyActionEventVerifyPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyActionEventVerifyPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyActionEventVerifyPolicyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyActionEventVerifyPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyActionEventVerifyPolicyRequest::getUserPublicKey()const
{
	return userPublicKey_;
}

void ModifyActionEventVerifyPolicyRequest::setUserPublicKey(const std::string& userPublicKey)
{
	userPublicKey_ = userPublicKey;
	setCoreParameter("UserPublicKey", userPublicKey);
}

