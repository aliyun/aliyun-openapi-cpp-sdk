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

#include <alibabacloud/vod/model/GetVideoInfosRequest.h>

using AlibabaCloud::Vod::Model::GetVideoInfosRequest;

GetVideoInfosRequest::GetVideoInfosRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetVideoInfos")
{
	setMethod(HttpRequest::Method::Post);
}

GetVideoInfosRequest::~GetVideoInfosRequest()
{}

long GetVideoInfosRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetVideoInfosRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetVideoInfosRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetVideoInfosRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long GetVideoInfosRequest::getOwnerId()const
{
	return ownerId_;
}

void GetVideoInfosRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetVideoInfosRequest::getAdditionType()const
{
	return additionType_;
}

void GetVideoInfosRequest::setAdditionType(const std::string& additionType)
{
	additionType_ = additionType;
	setParameter("AdditionType", additionType);
}

std::string GetVideoInfosRequest::getVideoIds()const
{
	return videoIds_;
}

void GetVideoInfosRequest::setVideoIds(const std::string& videoIds)
{
	videoIds_ = videoIds;
	setParameter("VideoIds", videoIds);
}

