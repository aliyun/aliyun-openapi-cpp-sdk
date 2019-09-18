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

#include <alibabacloud/mts/model/ActivateMediaWorkflowRequest.h>

using AlibabaCloud::Mts::Model::ActivateMediaWorkflowRequest;

ActivateMediaWorkflowRequest::ActivateMediaWorkflowRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ActivateMediaWorkflow")
{}

ActivateMediaWorkflowRequest::~ActivateMediaWorkflowRequest()
{}

long ActivateMediaWorkflowRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ActivateMediaWorkflowRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ActivateMediaWorkflowRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ActivateMediaWorkflowRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ActivateMediaWorkflowRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ActivateMediaWorkflowRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ActivateMediaWorkflowRequest::getOwnerId()const
{
	return ownerId_;
}

void ActivateMediaWorkflowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ActivateMediaWorkflowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ActivateMediaWorkflowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ActivateMediaWorkflowRequest::getMediaWorkflowId()const
{
	return mediaWorkflowId_;
}

void ActivateMediaWorkflowRequest::setMediaWorkflowId(const std::string& mediaWorkflowId)
{
	mediaWorkflowId_ = mediaWorkflowId;
	setCoreParameter("MediaWorkflowId", mediaWorkflowId);
}

