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

#include <alibabacloud/mts/model/RefreshCdnDomainConfigsCacheRequest.h>

using AlibabaCloud::Mts::Model::RefreshCdnDomainConfigsCacheRequest;

RefreshCdnDomainConfigsCacheRequest::RefreshCdnDomainConfigsCacheRequest() :
	RpcServiceRequest("mts", "2014-06-18", "RefreshCdnDomainConfigsCache")
{}

RefreshCdnDomainConfigsCacheRequest::~RefreshCdnDomainConfigsCacheRequest()
{}

std::string RefreshCdnDomainConfigsCacheRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RefreshCdnDomainConfigsCacheRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RefreshCdnDomainConfigsCacheRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RefreshCdnDomainConfigsCacheRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RefreshCdnDomainConfigsCacheRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RefreshCdnDomainConfigsCacheRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RefreshCdnDomainConfigsCacheRequest::getDomains()const
{
	return domains_;
}

void RefreshCdnDomainConfigsCacheRequest::setDomains(const std::string& domains)
{
	domains_ = domains;
	setParameter("Domains", domains);
}

std::string RefreshCdnDomainConfigsCacheRequest::getOwnerId()const
{
	return ownerId_;
}

void RefreshCdnDomainConfigsCacheRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string RefreshCdnDomainConfigsCacheRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RefreshCdnDomainConfigsCacheRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

