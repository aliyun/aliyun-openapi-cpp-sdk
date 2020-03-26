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

#include <alibabacloud/dyvmsapi/model/QueryVoipNumberBindInfosRequest.h>

using AlibabaCloud::Dyvmsapi::Model::QueryVoipNumberBindInfosRequest;

QueryVoipNumberBindInfosRequest::QueryVoipNumberBindInfosRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "QueryVoipNumberBindInfos")
{
	setMethod(HttpRequest::Method::Post);
}

QueryVoipNumberBindInfosRequest::~QueryVoipNumberBindInfosRequest()
{}

long QueryVoipNumberBindInfosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryVoipNumberBindInfosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryVoipNumberBindInfosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryVoipNumberBindInfosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryVoipNumberBindInfosRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void QueryVoipNumberBindInfosRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

long QueryVoipNumberBindInfosRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryVoipNumberBindInfosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryVoipNumberBindInfosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryVoipNumberBindInfosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryVoipNumberBindInfosRequest::getVoipId()const
{
	return voipId_;
}

void QueryVoipNumberBindInfosRequest::setVoipId(const std::string& voipId)
{
	voipId_ = voipId;
	setParameter("VoipId", voipId);
}

