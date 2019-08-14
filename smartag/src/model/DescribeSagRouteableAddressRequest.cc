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

#include <alibabacloud/smartag/model/DescribeSagRouteableAddressRequest.h>

using AlibabaCloud::Smartag::Model::DescribeSagRouteableAddressRequest;

DescribeSagRouteableAddressRequest::DescribeSagRouteableAddressRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeSagRouteableAddress")
{}

DescribeSagRouteableAddressRequest::~DescribeSagRouteableAddressRequest()
{}

long DescribeSagRouteableAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSagRouteableAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSagRouteableAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSagRouteableAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSagRouteableAddressRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSagRouteableAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeSagRouteableAddressRequest::getSagId()const
{
	return sagId_;
}

void DescribeSagRouteableAddressRequest::setSagId(const std::string& sagId)
{
	sagId_ = sagId;
	setCoreParameter("SagId", sagId);
}

std::string DescribeSagRouteableAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSagRouteableAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeSagRouteableAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSagRouteableAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

