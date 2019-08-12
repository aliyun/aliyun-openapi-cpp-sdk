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

#include <alibabacloud/cbn/model/ModifyCenBandwidthPackageAttributeRequest.h>

using AlibabaCloud::Cbn::Model::ModifyCenBandwidthPackageAttributeRequest;

ModifyCenBandwidthPackageAttributeRequest::ModifyCenBandwidthPackageAttributeRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "ModifyCenBandwidthPackageAttribute")
{}

ModifyCenBandwidthPackageAttributeRequest::~ModifyCenBandwidthPackageAttributeRequest()
{}

long ModifyCenBandwidthPackageAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCenBandwidthPackageAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCenBandwidthPackageAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getCenBandwidthPackageId()const
{
	return cenBandwidthPackageId_;
}

void ModifyCenBandwidthPackageAttributeRequest::setCenBandwidthPackageId(const std::string& cenBandwidthPackageId)
{
	cenBandwidthPackageId_ = cenBandwidthPackageId;
	setCoreParameter("CenBandwidthPackageId", cenBandwidthPackageId);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCenBandwidthPackageAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getName()const
{
	return name_;
}

void ModifyCenBandwidthPackageAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyCenBandwidthPackageAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyCenBandwidthPackageAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long ModifyCenBandwidthPackageAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCenBandwidthPackageAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

