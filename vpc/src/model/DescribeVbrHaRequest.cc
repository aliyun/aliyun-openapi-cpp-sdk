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

#include <alibabacloud/vpc/model/DescribeVbrHaRequest.h>

using AlibabaCloud::Vpc::Model::DescribeVbrHaRequest;

DescribeVbrHaRequest::DescribeVbrHaRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeVbrHa")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVbrHaRequest::~DescribeVbrHaRequest()
{}

long DescribeVbrHaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVbrHaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVbrHaRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeVbrHaRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeVbrHaRequest::getVbrHaId()const
{
	return vbrHaId_;
}

void DescribeVbrHaRequest::setVbrHaId(const std::string& vbrHaId)
{
	vbrHaId_ = vbrHaId;
	setParameter("VbrHaId", vbrHaId);
}

std::string DescribeVbrHaRequest::getVbrId()const
{
	return vbrId_;
}

void DescribeVbrHaRequest::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
	setParameter("VbrId", vbrId);
}

std::string DescribeVbrHaRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVbrHaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DescribeVbrHaRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeVbrHaRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeVbrHaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVbrHaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVbrHaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVbrHaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeVbrHaRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVbrHaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

