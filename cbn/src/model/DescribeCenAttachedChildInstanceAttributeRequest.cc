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

#include <alibabacloud/cbn/model/DescribeCenAttachedChildInstanceAttributeRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenAttachedChildInstanceAttributeRequest;

DescribeCenAttachedChildInstanceAttributeRequest::DescribeCenAttachedChildInstanceAttributeRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeCenAttachedChildInstanceAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCenAttachedChildInstanceAttributeRequest::~DescribeCenAttachedChildInstanceAttributeRequest()
{}

long DescribeCenAttachedChildInstanceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCenAttachedChildInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCenAttachedChildInstanceAttributeRequest::getCenId()const
{
	return cenId_;
}

void DescribeCenAttachedChildInstanceAttributeRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string DescribeCenAttachedChildInstanceAttributeRequest::getChildInstanceRegionId()const
{
	return childInstanceRegionId_;
}

void DescribeCenAttachedChildInstanceAttributeRequest::setChildInstanceRegionId(const std::string& childInstanceRegionId)
{
	childInstanceRegionId_ = childInstanceRegionId;
	setParameter("ChildInstanceRegionId", childInstanceRegionId);
}

std::string DescribeCenAttachedChildInstanceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCenAttachedChildInstanceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCenAttachedChildInstanceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCenAttachedChildInstanceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeCenAttachedChildInstanceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCenAttachedChildInstanceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCenAttachedChildInstanceAttributeRequest::getChildInstanceType()const
{
	return childInstanceType_;
}

void DescribeCenAttachedChildInstanceAttributeRequest::setChildInstanceType(const std::string& childInstanceType)
{
	childInstanceType_ = childInstanceType;
	setParameter("ChildInstanceType", childInstanceType);
}

std::string DescribeCenAttachedChildInstanceAttributeRequest::getChildInstanceId()const
{
	return childInstanceId_;
}

void DescribeCenAttachedChildInstanceAttributeRequest::setChildInstanceId(const std::string& childInstanceId)
{
	childInstanceId_ = childInstanceId;
	setParameter("ChildInstanceId", childInstanceId);
}

