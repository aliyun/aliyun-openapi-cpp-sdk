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

#include <alibabacloud/vod/model/ListAIJobRequest.h>

using AlibabaCloud::Vod::Model::ListAIJobRequest;

ListAIJobRequest::ListAIJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListAIJob")
{}

ListAIJobRequest::~ListAIJobRequest()
{}

std::string ListAIJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListAIJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListAIJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListAIJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ListAIJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListAIJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ListAIJobRequest::getJobIds()const
{
	return jobIds_;
}

void ListAIJobRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", std::to_string(jobIds));
}

std::string ListAIJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAIJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ListAIJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAIJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

