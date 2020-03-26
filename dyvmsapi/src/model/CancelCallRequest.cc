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

#include <alibabacloud/dyvmsapi/model/CancelCallRequest.h>

using AlibabaCloud::Dyvmsapi::Model::CancelCallRequest;

CancelCallRequest::CancelCallRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "CancelCall")
{
	setMethod(HttpRequest::Method::Post);
}

CancelCallRequest::~CancelCallRequest()
{}

std::string CancelCallRequest::getCallId()const
{
	return callId_;
}

void CancelCallRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setParameter("CallId", callId);
}

long CancelCallRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelCallRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CancelCallRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelCallRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CancelCallRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelCallRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CancelCallRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CancelCallRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

