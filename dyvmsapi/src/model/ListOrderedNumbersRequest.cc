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

#include <alibabacloud/dyvmsapi/model/ListOrderedNumbersRequest.h>

using AlibabaCloud::Dyvmsapi::Model::ListOrderedNumbersRequest;

ListOrderedNumbersRequest::ListOrderedNumbersRequest() :
	RpcServiceRequest("dyvmsapi", "2017-05-25", "ListOrderedNumbers")
{
	setMethod(HttpRequest::Method::Post);
}

ListOrderedNumbersRequest::~ListOrderedNumbersRequest()
{}

long ListOrderedNumbersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListOrderedNumbersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListOrderedNumbersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListOrderedNumbersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListOrderedNumbersRequest::getProdCode()const
{
	return prodCode_;
}

void ListOrderedNumbersRequest::setProdCode(const std::string& prodCode)
{
	prodCode_ = prodCode;
	setParameter("ProdCode", prodCode);
}

long ListOrderedNumbersRequest::getOwnerId()const
{
	return ownerId_;
}

void ListOrderedNumbersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListOrderedNumbersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListOrderedNumbersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

