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

#include <alibabacloud/mts/model/QueryTagJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryTagJobListRequest;

QueryTagJobListRequest::QueryTagJobListRequest() :
	RpcServiceRequest("mts", "2014-06-18", "QueryTagJobList")
{}

QueryTagJobListRequest::~QueryTagJobListRequest()
{}

long QueryTagJobListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryTagJobListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string QueryTagJobListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryTagJobListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryTagJobListRequest::getTagJobIds()const
{
	return tagJobIds_;
}

void QueryTagJobListRequest::setTagJobIds(const std::string& tagJobIds)
{
	tagJobIds_ = tagJobIds;
	setCoreParameter("TagJobIds", tagJobIds);
}

std::string QueryTagJobListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryTagJobListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long QueryTagJobListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryTagJobListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryTagJobListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryTagJobListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

