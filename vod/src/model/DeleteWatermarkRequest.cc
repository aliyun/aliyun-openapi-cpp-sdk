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

#include <alibabacloud/vod/model/DeleteWatermarkRequest.h>

using AlibabaCloud::Vod::Model::DeleteWatermarkRequest;

DeleteWatermarkRequest::DeleteWatermarkRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DeleteWatermark")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteWatermarkRequest::~DeleteWatermarkRequest()
{}

long DeleteWatermarkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteWatermarkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteWatermarkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteWatermarkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DeleteWatermarkRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteWatermarkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteWatermarkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteWatermarkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteWatermarkRequest::getWatermarkId()const
{
	return watermarkId_;
}

void DeleteWatermarkRequest::setWatermarkId(const std::string& watermarkId)
{
	watermarkId_ = watermarkId;
	setCoreParameter("WatermarkId", watermarkId);
}

