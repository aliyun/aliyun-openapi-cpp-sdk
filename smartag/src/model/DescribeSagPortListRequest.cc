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

#include <alibabacloud/smartag/model/DescribeSagPortListRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagPortListRequest;

DescribeSagPortListRequest::DescribeSagPortListRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSagPortList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSagPortListRequest::~DescribeSagPortListRequest()
{}

long DescribeSagPortListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSagPortListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSagPortListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSagPortListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSagPortListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSagPortListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSagPortListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSagPortListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeSagPortListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSagPortListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSagPortListRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DescribeSagPortListRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string DescribeSagPortListRequest::getSmartAGSn()const
{
	return smartAGSn_;
}

void DescribeSagPortListRequest::setSmartAGSn(const std::string& smartAGSn)
{
	smartAGSn_ = smartAGSn;
	setParameter("SmartAGSn", smartAGSn);
}

