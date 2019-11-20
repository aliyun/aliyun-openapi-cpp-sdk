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

#include <alibabacloud/vod/model/GetURLUploadInfosRequest.h>

using AlibabaCloud::Vod::Model::GetURLUploadInfosRequest;

GetURLUploadInfosRequest::GetURLUploadInfosRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetURLUploadInfos")
{
	setMethod(HttpRequest::Method::Post);
}

GetURLUploadInfosRequest::~GetURLUploadInfosRequest()
{}

long GetURLUploadInfosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetURLUploadInfosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetURLUploadInfosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetURLUploadInfosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetURLUploadInfosRequest::getOwnerId()const
{
	return ownerId_;
}

void GetURLUploadInfosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetURLUploadInfosRequest::getJobIds()const
{
	return jobIds_;
}

void GetURLUploadInfosRequest::setJobIds(const std::string& jobIds)
{
	jobIds_ = jobIds;
	setCoreParameter("JobIds", jobIds);
}

std::string GetURLUploadInfosRequest::getUploadURLs()const
{
	return uploadURLs_;
}

void GetURLUploadInfosRequest::setUploadURLs(const std::string& uploadURLs)
{
	uploadURLs_ = uploadURLs;
	setCoreParameter("UploadURLs", uploadURLs);
}

