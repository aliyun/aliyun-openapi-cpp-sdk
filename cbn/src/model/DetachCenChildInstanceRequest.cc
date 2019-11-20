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

#include <alibabacloud/cbn/model/DetachCenChildInstanceRequest.h>

using AlibabaCloud::Cbn::Model::DetachCenChildInstanceRequest;

DetachCenChildInstanceRequest::DetachCenChildInstanceRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DetachCenChildInstance")
{
	setMethod(HttpRequest::Method::Post);
}

DetachCenChildInstanceRequest::~DetachCenChildInstanceRequest()
{}

long DetachCenChildInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachCenChildInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachCenChildInstanceRequest::getCenId()const
{
	return cenId_;
}

void DetachCenChildInstanceRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

long DetachCenChildInstanceRequest::getCenOwnerId()const
{
	return cenOwnerId_;
}

void DetachCenChildInstanceRequest::setCenOwnerId(long cenOwnerId)
{
	cenOwnerId_ = cenOwnerId;
	setCoreParameter("CenOwnerId", std::to_string(cenOwnerId));
}

std::string DetachCenChildInstanceRequest::getChildInstanceRegionId()const
{
	return childInstanceRegionId_;
}

void DetachCenChildInstanceRequest::setChildInstanceRegionId(const std::string& childInstanceRegionId)
{
	childInstanceRegionId_ = childInstanceRegionId;
	setCoreParameter("ChildInstanceRegionId", childInstanceRegionId);
}

std::string DetachCenChildInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachCenChildInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachCenChildInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DetachCenChildInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DetachCenChildInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachCenChildInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DetachCenChildInstanceRequest::getChildInstanceType()const
{
	return childInstanceType_;
}

void DetachCenChildInstanceRequest::setChildInstanceType(const std::string& childInstanceType)
{
	childInstanceType_ = childInstanceType;
	setCoreParameter("ChildInstanceType", childInstanceType);
}

long DetachCenChildInstanceRequest::getChildInstanceOwnerId()const
{
	return childInstanceOwnerId_;
}

void DetachCenChildInstanceRequest::setChildInstanceOwnerId(long childInstanceOwnerId)
{
	childInstanceOwnerId_ = childInstanceOwnerId;
	setCoreParameter("ChildInstanceOwnerId", std::to_string(childInstanceOwnerId));
}

std::string DetachCenChildInstanceRequest::getChildInstanceId()const
{
	return childInstanceId_;
}

void DetachCenChildInstanceRequest::setChildInstanceId(const std::string& childInstanceId)
{
	childInstanceId_ = childInstanceId;
	setCoreParameter("ChildInstanceId", childInstanceId);
}

