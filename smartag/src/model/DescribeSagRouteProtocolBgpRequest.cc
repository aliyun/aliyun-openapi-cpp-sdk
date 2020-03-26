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

#include <alibabacloud/smartag/model/DescribeSagRouteProtocolBgpRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagRouteProtocolBgpRequest;

DescribeSagRouteProtocolBgpRequest::DescribeSagRouteProtocolBgpRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSagRouteProtocolBgp")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSagRouteProtocolBgpRequest::~DescribeSagRouteProtocolBgpRequest()
{}

long DescribeSagRouteProtocolBgpRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSagRouteProtocolBgpRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSagRouteProtocolBgpRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSagRouteProtocolBgpRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSagRouteProtocolBgpRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSagRouteProtocolBgpRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSagRouteProtocolBgpRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSagRouteProtocolBgpRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSagRouteProtocolBgpRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSagRouteProtocolBgpRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSagRouteProtocolBgpRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSagRouteProtocolBgpRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string DescribeSagRouteProtocolBgpRequest::getSmartAGSn()const
{
	return smartAGSn_;
}

void DescribeSagRouteProtocolBgpRequest::setSmartAGSn(const std::string& smartAGSn)
{
	smartAGSn_ = smartAGSn;
	setParameter("SmartAGSn", smartAGSn);
}

