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

#include <alibabacloud/mts/model/ListMediaWorkflowExecutionsRequest.h>

using AlibabaCloud::Mts::Model::ListMediaWorkflowExecutionsRequest;

ListMediaWorkflowExecutionsRequest::ListMediaWorkflowExecutionsRequest() :
	RpcServiceRequest("mts", "2014-06-18", "ListMediaWorkflowExecutions")
{}

ListMediaWorkflowExecutionsRequest::~ListMediaWorkflowExecutionsRequest()
{}

long ListMediaWorkflowExecutionsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListMediaWorkflowExecutionsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListMediaWorkflowExecutionsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ListMediaWorkflowExecutionsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ListMediaWorkflowExecutionsRequest::getInputFileURL()const
{
	return inputFileURL_;
}

void ListMediaWorkflowExecutionsRequest::setInputFileURL(const std::string& inputFileURL)
{
	inputFileURL_ = inputFileURL;
	setCoreParameter("InputFileURL", inputFileURL);
}

std::string ListMediaWorkflowExecutionsRequest::getNextPageToken()const
{
	return nextPageToken_;
}

void ListMediaWorkflowExecutionsRequest::setNextPageToken(const std::string& nextPageToken)
{
	nextPageToken_ = nextPageToken;
	setCoreParameter("NextPageToken", nextPageToken);
}

std::string ListMediaWorkflowExecutionsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ListMediaWorkflowExecutionsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ListMediaWorkflowExecutionsRequest::getMaximumPageSize()const
{
	return maximumPageSize_;
}

void ListMediaWorkflowExecutionsRequest::setMaximumPageSize(long maximumPageSize)
{
	maximumPageSize_ = maximumPageSize;
	setCoreParameter("MaximumPageSize", std::to_string(maximumPageSize));
}

std::string ListMediaWorkflowExecutionsRequest::getMediaWorkflowId()const
{
	return mediaWorkflowId_;
}

void ListMediaWorkflowExecutionsRequest::setMediaWorkflowId(const std::string& mediaWorkflowId)
{
	mediaWorkflowId_ = mediaWorkflowId;
	setCoreParameter("MediaWorkflowId", mediaWorkflowId);
}

long ListMediaWorkflowExecutionsRequest::getOwnerId()const
{
	return ownerId_;
}

void ListMediaWorkflowExecutionsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ListMediaWorkflowExecutionsRequest::getMediaWorkflowName()const
{
	return mediaWorkflowName_;
}

void ListMediaWorkflowExecutionsRequest::setMediaWorkflowName(const std::string& mediaWorkflowName)
{
	mediaWorkflowName_ = mediaWorkflowName;
	setCoreParameter("MediaWorkflowName", mediaWorkflowName);
}

std::string ListMediaWorkflowExecutionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListMediaWorkflowExecutionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

