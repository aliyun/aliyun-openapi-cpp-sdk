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

#include <alibabacloud/dypnsapi/model/DescribeVerifySchemeRequest.h>

using AlibabaCloud::Dypnsapi::Model::DescribeVerifySchemeRequest;

DescribeVerifySchemeRequest::DescribeVerifySchemeRequest() :
	RpcServiceRequest("dypnsapi", "2017-05-25", "DescribeVerifyScheme")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVerifySchemeRequest::~DescribeVerifySchemeRequest()
{}

long DescribeVerifySchemeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVerifySchemeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVerifySchemeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVerifySchemeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeVerifySchemeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVerifySchemeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVerifySchemeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVerifySchemeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVerifySchemeRequest::getSchemeCode()const
{
	return schemeCode_;
}

void DescribeVerifySchemeRequest::setSchemeCode(const std::string& schemeCode)
{
	schemeCode_ = schemeCode;
	setParameter("SchemeCode", schemeCode);
}

long DescribeVerifySchemeRequest::getCustomerId()const
{
	return customerId_;
}

void DescribeVerifySchemeRequest::setCustomerId(long customerId)
{
	customerId_ = customerId;
	setParameter("CustomerId", std::to_string(customerId));
}

