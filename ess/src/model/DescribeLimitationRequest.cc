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

#include <alibabacloud/ess/model/DescribeLimitationRequest.h>

using AlibabaCloud::Ess::Model::DescribeLimitationRequest;

DescribeLimitationRequest::DescribeLimitationRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DescribeLimitation")
{}

DescribeLimitationRequest::~DescribeLimitationRequest()
{}

std::string DescribeLimitationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLimitationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

long DescribeLimitationRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLimitationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeLimitationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLimitationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

