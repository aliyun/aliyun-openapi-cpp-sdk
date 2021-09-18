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

#include <alibabacloud/vod/model/SubmitLiveEditingRequest.h>

using AlibabaCloud::Vod::Model::SubmitLiveEditingRequest;

SubmitLiveEditingRequest::SubmitLiveEditingRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitLiveEditing")
{
	setMethod(HttpRequest::Method::Post);
}

SubmitLiveEditingRequest::~SubmitLiveEditingRequest()
{}

long SubmitLiveEditingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitLiveEditingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitLiveEditingRequest::getClips()const
{
	return clips_;
}

void SubmitLiveEditingRequest::setClips(const std::string& clips)
{
	clips_ = clips;
	setParameter("Clips", clips);
}

std::string SubmitLiveEditingRequest::getDescription()const
{
	return description_;
}

void SubmitLiveEditingRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string SubmitLiveEditingRequest::getTitle()const
{
	return title_;
}

void SubmitLiveEditingRequest::setTitle(const std::string& title)
{
	title_ = title;
	setParameter("Title", title);
}

std::string SubmitLiveEditingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitLiveEditingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SubmitLiveEditingRequest::getCoverURL()const
{
	return coverURL_;
}

void SubmitLiveEditingRequest::setCoverURL(const std::string& coverURL)
{
	coverURL_ = coverURL;
	setParameter("CoverURL", coverURL);
}

std::string SubmitLiveEditingRequest::getUserData()const
{
	return userData_;
}

void SubmitLiveEditingRequest::setUserData(const std::string& userData)
{
	userData_ = userData;
	setParameter("UserData", userData);
}

std::string SubmitLiveEditingRequest::getAppName()const
{
	return appName_;
}

void SubmitLiveEditingRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string SubmitLiveEditingRequest::getProduceConfig()const
{
	return produceConfig_;
}

void SubmitLiveEditingRequest::setProduceConfig(const std::string& produceConfig)
{
	produceConfig_ = produceConfig;
	setParameter("ProduceConfig", produceConfig);
}

std::string SubmitLiveEditingRequest::getStreamName()const
{
	return streamName_;
}

void SubmitLiveEditingRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string SubmitLiveEditingRequest::getMediaMetadata()const
{
	return mediaMetadata_;
}

void SubmitLiveEditingRequest::setMediaMetadata(const std::string& mediaMetadata)
{
	mediaMetadata_ = mediaMetadata;
	setParameter("MediaMetadata", mediaMetadata);
}

std::string SubmitLiveEditingRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitLiveEditingRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SubmitLiveEditingRequest::getDomainName()const
{
	return domainName_;
}

void SubmitLiveEditingRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SubmitLiveEditingRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitLiveEditingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

