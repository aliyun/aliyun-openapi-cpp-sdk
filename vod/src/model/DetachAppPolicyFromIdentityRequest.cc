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

#include <alibabacloud/vod/model/DetachAppPolicyFromIdentityRequest.h>

using AlibabaCloud::Vod::Model::DetachAppPolicyFromIdentityRequest;

DetachAppPolicyFromIdentityRequest::DetachAppPolicyFromIdentityRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DetachAppPolicyFromIdentity")
{
	setMethod(HttpRequest::Method::Post);
}

DetachAppPolicyFromIdentityRequest::~DetachAppPolicyFromIdentityRequest()
{}

long DetachAppPolicyFromIdentityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachAppPolicyFromIdentityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachAppPolicyFromIdentityRequest::getPolicyNames()const
{
	return policyNames_;
}

void DetachAppPolicyFromIdentityRequest::setPolicyNames(const std::string& policyNames)
{
	policyNames_ = policyNames;
	setParameter("PolicyNames", policyNames);
}

std::string DetachAppPolicyFromIdentityRequest::getIdentityName()const
{
	return identityName_;
}

void DetachAppPolicyFromIdentityRequest::setIdentityName(const std::string& identityName)
{
	identityName_ = identityName;
	setParameter("IdentityName", identityName);
}

std::string DetachAppPolicyFromIdentityRequest::getIdentityType()const
{
	return identityType_;
}

void DetachAppPolicyFromIdentityRequest::setIdentityType(const std::string& identityType)
{
	identityType_ = identityType;
	setParameter("IdentityType", identityType);
}

std::string DetachAppPolicyFromIdentityRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachAppPolicyFromIdentityRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DetachAppPolicyFromIdentityRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachAppPolicyFromIdentityRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DetachAppPolicyFromIdentityRequest::getAppId()const
{
	return appId_;
}

void DetachAppPolicyFromIdentityRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

