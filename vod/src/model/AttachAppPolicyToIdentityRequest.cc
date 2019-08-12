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

#include <alibabacloud/vod/model/AttachAppPolicyToIdentityRequest.h>

using AlibabaCloud::Vod::Model::AttachAppPolicyToIdentityRequest;

AttachAppPolicyToIdentityRequest::AttachAppPolicyToIdentityRequest() :
	RpcServiceRequest("vod", "2017-03-21", "AttachAppPolicyToIdentity")
{}

AttachAppPolicyToIdentityRequest::~AttachAppPolicyToIdentityRequest()
{}

std::string AttachAppPolicyToIdentityRequest::getIdentityName()const
{
	return identityName_;
}

void AttachAppPolicyToIdentityRequest::setIdentityName(const std::string& identityName)
{
	identityName_ = identityName;
	setCoreParameter("IdentityName", identityName);
}

long AttachAppPolicyToIdentityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachAppPolicyToIdentityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AttachAppPolicyToIdentityRequest::getIdentityType()const
{
	return identityType_;
}

void AttachAppPolicyToIdentityRequest::setIdentityType(const std::string& identityType)
{
	identityType_ = identityType;
	setCoreParameter("IdentityType", identityType);
}

std::string AttachAppPolicyToIdentityRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachAppPolicyToIdentityRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AttachAppPolicyToIdentityRequest::getAppId()const
{
	return appId_;
}

void AttachAppPolicyToIdentityRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string AttachAppPolicyToIdentityRequest::getPolicyNames()const
{
	return policyNames_;
}

void AttachAppPolicyToIdentityRequest::setPolicyNames(const std::string& policyNames)
{
	policyNames_ = policyNames;
	setCoreParameter("PolicyNames", policyNames);
}

std::string AttachAppPolicyToIdentityRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void AttachAppPolicyToIdentityRequest::setResourceRealOwnerId(const std::string& resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", resourceRealOwnerId);
}

long AttachAppPolicyToIdentityRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachAppPolicyToIdentityRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

