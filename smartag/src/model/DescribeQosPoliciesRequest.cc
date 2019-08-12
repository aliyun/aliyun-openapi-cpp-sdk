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

#include <alibabacloud/smartag/model/DescribeQosPoliciesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeQosPoliciesRequest;

DescribeQosPoliciesRequest::DescribeQosPoliciesRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeQosPolicies")
{}

DescribeQosPoliciesRequest::~DescribeQosPoliciesRequest()
{}

long DescribeQosPoliciesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeQosPoliciesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeQosPoliciesRequest::getQosPolicyId()const
{
	return qosPolicyId_;
}

void DescribeQosPoliciesRequest::setQosPolicyId(const std::string& qosPolicyId)
{
	qosPolicyId_ = qosPolicyId;
	setCoreParameter("QosPolicyId", std::to_string(qosPolicyId));
}

std::string DescribeQosPoliciesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeQosPoliciesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeQosPoliciesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeQosPoliciesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeQosPoliciesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeQosPoliciesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int DescribeQosPoliciesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeQosPoliciesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeQosPoliciesRequest::getDescription()const
{
	return description_;
}

void DescribeQosPoliciesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long DescribeQosPoliciesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeQosPoliciesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeQosPoliciesRequest::getQosId()const
{
	return qosId_;
}

void DescribeQosPoliciesRequest::setQosId(const std::string& qosId)
{
	qosId_ = qosId;
	setCoreParameter("QosId", std::to_string(qosId));
}

int DescribeQosPoliciesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeQosPoliciesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeQosPoliciesRequest::getOrder()const
{
	return order_;
}

void DescribeQosPoliciesRequest::setOrder(const std::string& order)
{
	order_ = order;
	setCoreParameter("Order", std::to_string(order));
}

