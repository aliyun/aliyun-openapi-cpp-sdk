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

#include <alibabacloud/cbn/model/WithdrawPublishedRouteEntriesRequest.h>

using AlibabaCloud::Cbn::Model::WithdrawPublishedRouteEntriesRequest;

WithdrawPublishedRouteEntriesRequest::WithdrawPublishedRouteEntriesRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "WithdrawPublishedRouteEntries")
{}

WithdrawPublishedRouteEntriesRequest::~WithdrawPublishedRouteEntriesRequest()
{}

std::string WithdrawPublishedRouteEntriesRequest::getChildInstanceId()const
{
	return childInstanceId_;
}

void WithdrawPublishedRouteEntriesRequest::setChildInstanceId(const std::string& childInstanceId)
{
	childInstanceId_ = childInstanceId;
	setCoreParameter("ChildInstanceId", childInstanceId);
}

long WithdrawPublishedRouteEntriesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void WithdrawPublishedRouteEntriesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string WithdrawPublishedRouteEntriesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void WithdrawPublishedRouteEntriesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string WithdrawPublishedRouteEntriesRequest::getCenId()const
{
	return cenId_;
}

void WithdrawPublishedRouteEntriesRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setCoreParameter("CenId", cenId);
}

std::string WithdrawPublishedRouteEntriesRequest::getDestinationCidrBlock()const
{
	return destinationCidrBlock_;
}

void WithdrawPublishedRouteEntriesRequest::setDestinationCidrBlock(const std::string& destinationCidrBlock)
{
	destinationCidrBlock_ = destinationCidrBlock;
	setCoreParameter("DestinationCidrBlock", destinationCidrBlock);
}

std::string WithdrawPublishedRouteEntriesRequest::getChildInstanceType()const
{
	return childInstanceType_;
}

void WithdrawPublishedRouteEntriesRequest::setChildInstanceType(const std::string& childInstanceType)
{
	childInstanceType_ = childInstanceType;
	setCoreParameter("ChildInstanceType", childInstanceType);
}

std::string WithdrawPublishedRouteEntriesRequest::getChildInstanceRouteTableId()const
{
	return childInstanceRouteTableId_;
}

void WithdrawPublishedRouteEntriesRequest::setChildInstanceRouteTableId(const std::string& childInstanceRouteTableId)
{
	childInstanceRouteTableId_ = childInstanceRouteTableId;
	setCoreParameter("ChildInstanceRouteTableId", childInstanceRouteTableId);
}

std::string WithdrawPublishedRouteEntriesRequest::getChildInstanceRegionId()const
{
	return childInstanceRegionId_;
}

void WithdrawPublishedRouteEntriesRequest::setChildInstanceRegionId(const std::string& childInstanceRegionId)
{
	childInstanceRegionId_ = childInstanceRegionId;
	setCoreParameter("ChildInstanceRegionId", childInstanceRegionId);
}

