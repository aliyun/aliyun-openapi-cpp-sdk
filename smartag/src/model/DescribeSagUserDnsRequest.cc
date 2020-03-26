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

#include <alibabacloud/smartag/model/DescribeSagUserDnsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagUserDnsRequest;

DescribeSagUserDnsRequest::DescribeSagUserDnsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSagUserDns")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSagUserDnsRequest::~DescribeSagUserDnsRequest()
{}

long DescribeSagUserDnsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSagUserDnsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSagUserDnsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSagUserDnsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSagUserDnsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSagUserDnsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSagUserDnsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSagUserDnsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSagUserDnsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSagUserDnsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSagUserDnsRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSagUserDnsRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string DescribeSagUserDnsRequest::getSmartAGSn()const
{
	return smartAGSn_;
}

void DescribeSagUserDnsRequest::setSmartAGSn(const std::string& smartAGSn)
{
	smartAGSn_ = smartAGSn;
	setParameter("SmartAGSn", smartAGSn);
}

