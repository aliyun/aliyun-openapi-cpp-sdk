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

#include <alibabacloud/vod/model/SetDefaultTranscodeTemplateGroupRequest.h>

using AlibabaCloud::Vod::Model::SetDefaultTranscodeTemplateGroupRequest;

SetDefaultTranscodeTemplateGroupRequest::SetDefaultTranscodeTemplateGroupRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SetDefaultTranscodeTemplateGroup")
{}

SetDefaultTranscodeTemplateGroupRequest::~SetDefaultTranscodeTemplateGroupRequest()
{}

long SetDefaultTranscodeTemplateGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetDefaultTranscodeTemplateGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetDefaultTranscodeTemplateGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetDefaultTranscodeTemplateGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SetDefaultTranscodeTemplateGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDefaultTranscodeTemplateGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetDefaultTranscodeTemplateGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetDefaultTranscodeTemplateGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetDefaultTranscodeTemplateGroupRequest::getTranscodeTemplateGroupId()const
{
	return transcodeTemplateGroupId_;
}

void SetDefaultTranscodeTemplateGroupRequest::setTranscodeTemplateGroupId(const std::string& transcodeTemplateGroupId)
{
	transcodeTemplateGroupId_ = transcodeTemplateGroupId;
	setCoreParameter("TranscodeTemplateGroupId", transcodeTemplateGroupId);
}

