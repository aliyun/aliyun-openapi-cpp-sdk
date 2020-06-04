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

#include <alibabacloud/vod/model/ListMediaDNADeleteJobRequest.h>

using AlibabaCloud::Vod::Model::ListMediaDNADeleteJobRequest;

ListMediaDNADeleteJobRequest::ListMediaDNADeleteJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "ListMediaDNADeleteJob")
{
	setMethod(HttpRequest::Method::Post);
}

ListMediaDNADeleteJobRequest::~ListMediaDNADeleteJobRequest()
{}

std::string ListMediaDNADeleteJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListMediaDNADeleteJobRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListMediaDNADeleteJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListMediaDNADeleteJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListMediaDNADeleteJobRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListMediaDNADeleteJobRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ListMediaDNADeleteJobRequest::getOwnerId()const
{
	return ownerId_;
}

void ListMediaDNADeleteJobRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListMediaDNADeleteJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListMediaDNADeleteJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListMediaDNADeleteJobRequest::getJobIds()const
{
	return jobIds_;
}

void ListMediaDNADeleteJobRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setParameter("JobIds", jobIds);
}

