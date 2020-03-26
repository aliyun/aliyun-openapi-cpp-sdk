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

#include <alibabacloud/dyvmsapi/model/StartMicroOutboundRequest.h>

using AlibabaCloud::Dyvmsapi::Model::StartMicroOutboundRequest;

StartMicroOutboundRequest::StartMicroOutboundRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "StartMicroOutbound")
{
	setMethod(HttpRequest::Method::Post);
}

StartMicroOutboundRequest::~StartMicroOutboundRequest()
{}

long StartMicroOutboundRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StartMicroOutboundRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StartMicroOutboundRequest::getAccountType()const
{
	return accountType_;
}

void StartMicroOutboundRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setParameter("AccountType", accountType);
}

std::string StartMicroOutboundRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartMicroOutboundRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string StartMicroOutboundRequest::getAccountId()const
{
	return accountId_;
}

void StartMicroOutboundRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

std::string StartMicroOutboundRequest::getAppName()const
{
	return appName_;
}

void StartMicroOutboundRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string StartMicroOutboundRequest::getCommandCode()const
{
	return commandCode_;
}

void StartMicroOutboundRequest::setCommandCode(const std::string& commandCode)
{
	commandCode_ = commandCode;
	setParameter("CommandCode", commandCode);
}

std::string StartMicroOutboundRequest::getCalledNumber()const
{
	return calledNumber_;
}

void StartMicroOutboundRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setParameter("CalledNumber", calledNumber);
}

std::string StartMicroOutboundRequest::getExtInfo()const
{
	return extInfo_;
}

void StartMicroOutboundRequest::setExtInfo(const std::string& extInfo)
{
	extInfo_ = extInfo;
	setParameter("ExtInfo", extInfo);
}

std::string StartMicroOutboundRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StartMicroOutboundRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StartMicroOutboundRequest::getProdCode()const
{
	return prodCode_;
}

void StartMicroOutboundRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

long StartMicroOutboundRequest::getOwnerId()const
{
	return ownerId_;
}

void StartMicroOutboundRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartMicroOutboundRequest::getCallingNumber()const
{
	return callingNumber_;
}

void StartMicroOutboundRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setParameter("CallingNumber", callingNumber);
}

