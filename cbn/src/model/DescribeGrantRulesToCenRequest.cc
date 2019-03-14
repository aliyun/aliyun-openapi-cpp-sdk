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

#include <alibabacloud/cbn/model/DescribeGrantRulesToCenRequest.h>

using AlibabaCloud::Cbn::Model::DescribeGrantRulesToCenRequest;

DescribeGrantRulesToCenRequest::DescribeGrantRulesToCenRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DescribeGrantRulesToCen")
{}

DescribeGrantRulesToCenRequest::~DescribeGrantRulesToCenRequest()
{}

long DescribeGrantRulesToCenRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeGrantRulesToCenRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeGrantRulesToCenRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeGrantRulesToCenRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeGrantRulesToCenRequest::getRegionId()const
{
	return regionId_;
}

void DescribeGrantRulesToCenRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeGrantRulesToCenRequest::getCenId()const
{
	return cenId_;
}

void DescribeGrantRulesToCenRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string DescribeGrantRulesToCenRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeGrantRulesToCenRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeGrantRulesToCenRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeGrantRulesToCenRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeGrantRulesToCenRequest::getProductType()const
{
	return productType_;
}

void DescribeGrantRulesToCenRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

