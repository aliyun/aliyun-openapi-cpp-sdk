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

#include <alibabacloud/vod/model/UpdateAttachedMediaInfosRequest.h>

using AlibabaCloud::Vod::Model::UpdateAttachedMediaInfosRequest;

UpdateAttachedMediaInfosRequest::UpdateAttachedMediaInfosRequest() :
	RpcServiceRequest("vod", "2017-03-21", "UpdateAttachedMediaInfos")
{}

UpdateAttachedMediaInfosRequest::~UpdateAttachedMediaInfosRequest()
{}

long UpdateAttachedMediaInfosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateAttachedMediaInfosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateAttachedMediaInfosRequest::getUpdateContent()const
{
	return updateContent_;
}

void UpdateAttachedMediaInfosRequest::setUpdateContent(const std::string& updateContent)
{
	updateContent_ = updateContent;
	setCoreParameter("UpdateContent", updateContent);
}

std::string UpdateAttachedMediaInfosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateAttachedMediaInfosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long UpdateAttachedMediaInfosRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void UpdateAttachedMediaInfosRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

long UpdateAttachedMediaInfosRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateAttachedMediaInfosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateAttachedMediaInfosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateAttachedMediaInfosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

