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

#include <alibabacloud/smartag/model/DescribeQosCarsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeQosCarsRequest;

DescribeQosCarsRequest::DescribeQosCarsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeQosCars")
{}

DescribeQosCarsRequest::~DescribeQosCarsRequest()
{}

long DescribeQosCarsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeQosCarsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeQosCarsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeQosCarsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeQosCarsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeQosCarsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeQosCarsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeQosCarsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DescribeQosCarsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeQosCarsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeQosCarsRequest::getDescription()const
{
	return description_;
}

void DescribeQosCarsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long DescribeQosCarsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeQosCarsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeQosCarsRequest::getQosId()const
{
	return qosId_;
}

void DescribeQosCarsRequest::setQosId(const std::string& qosId)
{
	qosId_ = qosId;
	setCoreParameter("QosId", qosId);
}

std::string DescribeQosCarsRequest::getQosCarId()const
{
	return qosCarId_;
}

void DescribeQosCarsRequest::setQosCarId(const std::string& qosCarId)
{
	qosCarId_ = qosCarId;
	setCoreParameter("QosCarId", qosCarId);
}

int DescribeQosCarsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeQosCarsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeQosCarsRequest::getOrder()const
{
	return order_;
}

void DescribeQosCarsRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", order);
}

