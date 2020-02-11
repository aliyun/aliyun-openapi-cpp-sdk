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

#include <alibabacloud/ecs/model/EipNotifyPaidRequest.h>

using AlibabaCloud::Ecs::Model::EipNotifyPaidRequest;

EipNotifyPaidRequest::EipNotifyPaidRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "EipNotifyPaid")
{
	setMethod(HttpRequest::Method::Post);
}

EipNotifyPaidRequest::~EipNotifyPaidRequest()
{}

long EipNotifyPaidRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EipNotifyPaidRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string EipNotifyPaidRequest::getData()const
{
	return data_;
}

void EipNotifyPaidRequest::setData(const std::string& data)
{
	data_ = data;
	setParameter("Data", data);
}

std::string EipNotifyPaidRequest::getClientToken()const
{
	return clientToken_;
}

void EipNotifyPaidRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string EipNotifyPaidRequest::getUserCidr()const
{
	return userCidr_;
}

void EipNotifyPaidRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setParameter("UserCidr", userCidr);
}

std::string EipNotifyPaidRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EipNotifyPaidRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string EipNotifyPaidRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EipNotifyPaidRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long EipNotifyPaidRequest::getOwnerId()const
{
	return ownerId_;
}

void EipNotifyPaidRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

