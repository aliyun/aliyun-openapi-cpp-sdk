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

#include <alibabacloud/dyvmsapi/model/ListOutboundStrategiesRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ListOutboundStrategiesRequest;

ListOutboundStrategiesRequest::ListOutboundStrategiesRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ListOutboundStrategies")
{
	setMethod(HttpRequest::Method::Post);
}

ListOutboundStrategiesRequest::~ListOutboundStrategiesRequest()
{}

long ListOutboundStrategiesRequest::getBuId()const
{
	return buId_;
}

void ListOutboundStrategiesRequest::setBuId(long buId)
{
	buId_ = buId;
	setParameter("BuId", std::to_string(buId));
}

long ListOutboundStrategiesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListOutboundStrategiesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListOutboundStrategiesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListOutboundStrategiesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListOutboundStrategiesRequest::getKeyword()const
{
	return keyword_;
}

void ListOutboundStrategiesRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string ListOutboundStrategiesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListOutboundStrategiesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListOutboundStrategiesRequest::getProdCode()const
{
	return prodCode_;
}

void ListOutboundStrategiesRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

long ListOutboundStrategiesRequest::getOwnerId()const
{
	return ownerId_;
}

void ListOutboundStrategiesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

