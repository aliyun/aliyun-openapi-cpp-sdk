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

#include <alibabacloud/vod/model/DeleteTranscodeTemplateGroupRequest.h>

using AlibabaCloud::Vod::Model::DeleteTranscodeTemplateGroupRequest;

DeleteTranscodeTemplateGroupRequest::DeleteTranscodeTemplateGroupRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteTranscodeTemplateGroup")
{}

DeleteTranscodeTemplateGroupRequest::~DeleteTranscodeTemplateGroupRequest()
{}

long DeleteTranscodeTemplateGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteTranscodeTemplateGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteTranscodeTemplateGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteTranscodeTemplateGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteTranscodeTemplateGroupRequest::getTranscodeTemplateIds()const
{
	return transcodeTemplateIds_;
}

void DeleteTranscodeTemplateGroupRequest::setTranscodeTemplateIds(const std::string& transcodeTemplateIds)
{
	transcodeTemplateIds_ = transcodeTemplateIds;
	setCoreParameter("TranscodeTemplateIds", transcodeTemplateIds);
}

long DeleteTranscodeTemplateGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTranscodeTemplateGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteTranscodeTemplateGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTranscodeTemplateGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteTranscodeTemplateGroupRequest::getTranscodeTemplateGroupId()const
{
	return transcodeTemplateGroupId_;
}

void DeleteTranscodeTemplateGroupRequest::setTranscodeTemplateGroupId(const std::string& transcodeTemplateGroupId)
{
	transcodeTemplateGroupId_ = transcodeTemplateGroupId;
	setCoreParameter("TranscodeTemplateGroupId", transcodeTemplateGroupId);
}

std::string DeleteTranscodeTemplateGroupRequest::getForceDelGroup()const
{
	return forceDelGroup_;
}

void DeleteTranscodeTemplateGroupRequest::setForceDelGroup(const std::string& forceDelGroup)
{
	forceDelGroup_ = forceDelGroup;
	setCoreParameter("ForceDelGroup", forceDelGroup);
}

