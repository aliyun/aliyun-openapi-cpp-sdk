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

#include <alibabacloud/dyplsapi/model/QuerySubscriptionDetailRequest.h>

using AlibabaCloud::Dyplsapi::Model::QuerySubscriptionDetailRequest;

QuerySubscriptionDetailRequest::QuerySubscriptionDetailRequest() :
	RpcServiceRequest("dyplsapi", "2017-05-25", "QuerySubscriptionDetail")
{
	setMethod(HttpRequest::Method::Post);
}

QuerySubscriptionDetailRequest::~QuerySubscriptionDetailRequest()
{}

long QuerySubscriptionDetailRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QuerySubscriptionDetailRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QuerySubscriptionDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QuerySubscriptionDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string QuerySubscriptionDetailRequest::getProductType()const
{
	return productType_;
}

void QuerySubscriptionDetailRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setCoreParameter("ProductType", productType);
}

std::string QuerySubscriptionDetailRequest::getSubsId()const
{
	return subsId_;
}

void QuerySubscriptionDetailRequest::setSubsId(const std::string& subsId)
{
	subsId_ = subsId;
	setCoreParameter("SubsId", subsId);
}

std::string QuerySubscriptionDetailRequest::getPhoneNoX()const
{
	return phoneNoX_;
}

void QuerySubscriptionDetailRequest::setPhoneNoX(const std::string& phoneNoX)
{
	phoneNoX_ = phoneNoX;
	setCoreParameter("PhoneNoX", phoneNoX);
}

std::string QuerySubscriptionDetailRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QuerySubscriptionDetailRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long QuerySubscriptionDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void QuerySubscriptionDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QuerySubscriptionDetailRequest::getPoolKey()const
{
	return poolKey_;
}

void QuerySubscriptionDetailRequest::setPoolKey(const std::string& poolKey)
{
	poolKey_ = poolKey;
	setCoreParameter("PoolKey", poolKey);
}

