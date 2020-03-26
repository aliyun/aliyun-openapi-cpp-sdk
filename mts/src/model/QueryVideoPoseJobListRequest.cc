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

#include <alibabacloud/mts/model/QueryVideoPoseJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryVideoPoseJobListRequest;

QueryVideoPoseJobListRequest::QueryVideoPoseJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryVideoPoseJobList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryVideoPoseJobListRequest::~QueryVideoPoseJobListRequest()
{}

long QueryVideoPoseJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryVideoPoseJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryVideoPoseJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryVideoPoseJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryVideoPoseJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryVideoPoseJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long QueryVideoPoseJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryVideoPoseJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryVideoPoseJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryVideoPoseJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryVideoPoseJobListRequest::getJobIds()const
{
	return jobIds_;
}

void QueryVideoPoseJobListRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setParameter("JobIds", jobIds);
}

