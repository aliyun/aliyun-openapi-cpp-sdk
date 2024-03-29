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

#include <alibabacloud/dyvmsapi/model/CloseSipAccountRequest.h>

using AlibabaCloud::Dyvmsapi::Model::CloseSipAccountRequest;

CloseSipAccountRequest::CloseSipAccountRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "CloseSipAccount")
{
	setMethod(HttpRequest::Method::Post);
}

CloseSipAccountRequest::~CloseSipAccountRequest()
{}

long CloseSipAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CloseSipAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CloseSipAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CloseSipAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long CloseSipAccountRequest::getPartnerId()const
{
	return partnerId_;
}

void CloseSipAccountRequest::setPartnerId(long partnerId)
{
	partnerId_ = partnerId;
	setParameter("PartnerId", std::to_string(partnerId));
}

std::string CloseSipAccountRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CloseSipAccountRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CloseSipAccountRequest::getOwnerId()const
{
	return ownerId_;
}

void CloseSipAccountRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CloseSipAccountRequest::getSipAccountID()const
{
	return sipAccountID_;
}

void CloseSipAccountRequest::setSipAccountID(const std::string& sipAccountID)
{
	sipAccountID_ = sipAccountID;
	setParameter("SipAccountID", sipAccountID);
}

