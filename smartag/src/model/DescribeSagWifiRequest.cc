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

#include <alibabacloud/smartag/model/DescribeSagWifiRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagWifiRequest;

DescribeSagWifiRequest::DescribeSagWifiRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSagWifi")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSagWifiRequest::~DescribeSagWifiRequest()
{}

long DescribeSagWifiRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSagWifiRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSagWifiRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSagWifiRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSagWifiRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSagWifiRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSagWifiRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSagWifiRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSagWifiRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSagWifiRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSagWifiRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSagWifiRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string DescribeSagWifiRequest::getSmartAGSn()const
{
	return smartAGSn_;
}

void DescribeSagWifiRequest::setSmartAGSn(const std::string& smartAGSn)
{
	smartAGSn_ = smartAGSn;
	setParameter("SmartAGSn", smartAGSn);
}

