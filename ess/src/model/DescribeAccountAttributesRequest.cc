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

#include <alibabacloud/ess/model/DescribeAccountAttributesRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeAccountAttributesRequest::DescribeAccountAttributesRequest() :
	EssRequest("DescribeAccountAttributes")
{}

DescribeAccountAttributesRequest::~DescribeAccountAttributesRequest()
{}

std::string DescribeAccountAttributesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAccountAttributesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeAccountAttributesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAccountAttributesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAccountAttributesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAccountAttributesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

