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

#include <alibabacloud/vod/model/UpdateImageInfosRequest.h>

using AlibabaCloud::Vod::Model::UpdateImageInfosRequest;

UpdateImageInfosRequest::UpdateImageInfosRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateImageInfos")
{}

UpdateImageInfosRequest::~UpdateImageInfosRequest()
{}

long UpdateImageInfosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateImageInfosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateImageInfosRequest::getUpdateContent()const
{
	return updateContent_;
}

void UpdateImageInfosRequest::setUpdateContent(const std::string& updateContent)
{
	updateContent_ = updateContent;
	setParameter("UpdateContent", updateContent);
}

std::string UpdateImageInfosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateImageInfosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long UpdateImageInfosRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void UpdateImageInfosRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

long UpdateImageInfosRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateImageInfosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateImageInfosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateImageInfosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

