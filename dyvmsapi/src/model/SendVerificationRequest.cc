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

#include <alibabacloud/dyvmsapi/model/SendVerificationRequest.h>

using AlibabaCloud::Dyvmsapi::Model::SendVerificationRequest;

SendVerificationRequest::SendVerificationRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "SendVerification")
{
	setMethod(HttpRequest::Method::Post);
}

SendVerificationRequest::~SendVerificationRequest()
{}

long SendVerificationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SendVerificationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SendVerificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SendVerificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SendVerificationRequest::getVerifyType()const
{
	return verifyType_;
}

void SendVerificationRequest::setVerifyType(const std::string& verifyType)
{
	verifyType_ = verifyType;
	setParameter("VerifyType", verifyType);
}

std::string SendVerificationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SendVerificationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SendVerificationRequest::getOwnerId()const
{
	return ownerId_;
}

void SendVerificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SendVerificationRequest::getTarget()const
{
	return target_;
}

void SendVerificationRequest::setTarget(const std::string& target)
{
	target_ = target;
	setParameter("Target", target);
}

std::string SendVerificationRequest::getBizType()const
{
	return bizType_;
}

void SendVerificationRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setParameter("BizType", bizType);
}

