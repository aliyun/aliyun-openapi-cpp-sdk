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

#include <alibabacloud/smartag/model/DescribeRegionsRequest.h>

using AlibabaCloud::Smartag::Model::DescribeRegionsRequest;

DescribeRegionsRequest::DescribeRegionsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DescribeRegions")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRegionsRequest::~DescribeRegionsRequest()
{}

long DescribeRegionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRegionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeRegionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRegionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRegionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRegionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeRegionsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRegionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRegionsRequest::getAcceptLanguage()const
{
	return acceptLanguage_;
}

void DescribeRegionsRequest::setAcceptLanguage(const std::string& acceptLanguage)
{
	acceptLanguage_ = acceptLanguage;
	setParameter("AcceptLanguage", acceptLanguage);
}

