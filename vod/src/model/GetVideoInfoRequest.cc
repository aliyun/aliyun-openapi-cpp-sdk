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

#include <alibabacloud/vod/model/GetVideoInfoRequest.h>

using AlibabaCloud::Vod::Model::GetVideoInfoRequest;

GetVideoInfoRequest::GetVideoInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetVideoInfo")
{}

GetVideoInfoRequest::~GetVideoInfoRequest()
{}

long GetVideoInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetVideoInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetVideoInfoRequest::getResultTypes()const
{
	return resultTypes_;
}

void GetVideoInfoRequest::setResultTypes(const std::string& resultTypes)
{
	resultTypes_ = resultTypes;
	setCoreParameter("ResultTypes", resultTypes);
}

std::string GetVideoInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetVideoInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetVideoInfoRequest::getVideoId()const
{
	return videoId_;
}

void GetVideoInfoRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setCoreParameter("VideoId", videoId);
}

long GetVideoInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void GetVideoInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetVideoInfoRequest::getAdditionType()const
{
	return additionType_;
}

void GetVideoInfoRequest::setAdditionType(const std::string& additionType)
{
	additionType_ = additionType;
	setCoreParameter("AdditionType", additionType);
}

