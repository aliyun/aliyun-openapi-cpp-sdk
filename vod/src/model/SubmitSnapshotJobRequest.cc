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

#include <alibabacloud/vod/model/SubmitSnapshotJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitSnapshotJobRequest;

SubmitSnapshotJobRequest::SubmitSnapshotJobRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SubmitSnapshotJob")
{}

SubmitSnapshotJobRequest::~SubmitSnapshotJobRequest()
{}

long SubmitSnapshotJobRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SubmitSnapshotJobRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SubmitSnapshotJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SubmitSnapshotJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long SubmitSnapshotJobRequest::getCount()const
{
	return count_;
}

void SubmitSnapshotJobRequest::setCount(long count)
{
	count_ = count;
	setParameter("Count", std::to_string(count));
}

std::string SubmitSnapshotJobRequest::getVideoId()const
{
	return videoId_;
}

void SubmitSnapshotJobRequest::setVideoId(const std::string& videoId)
{
	videoId_ = videoId;
	setParameter("VideoId", videoId);
}

long SubmitSnapshotJobRequest::getOwnerId()const
{
	return ownerId_;
}

void SubmitSnapshotJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SubmitSnapshotJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitSnapshotJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long SubmitSnapshotJobRequest::getSpecifiedOffsetTime()const
{
	return specifiedOffsetTime_;
}

void SubmitSnapshotJobRequest::setSpecifiedOffsetTime(long specifiedOffsetTime)
{
	specifiedOffsetTime_ = specifiedOffsetTime;
	setParameter("SpecifiedOffsetTime", std::to_string(specifiedOffsetTime));
}

std::string SubmitSnapshotJobRequest::getWidth()const
{
	return width_;
}

void SubmitSnapshotJobRequest::setWidth(const std::string& width)
{
	width_ = width;
	setParameter("Width", width);
}

long SubmitSnapshotJobRequest::getInterval()const
{
	return interval_;
}

void SubmitSnapshotJobRequest::setInterval(long interval)
{
	interval_ = interval;
	setParameter("Interval", std::to_string(interval));
}

std::string SubmitSnapshotJobRequest::getSpriteSnapshotConfig()const
{
	return spriteSnapshotConfig_;
}

void SubmitSnapshotJobRequest::setSpriteSnapshotConfig(const std::string& spriteSnapshotConfig)
{
	spriteSnapshotConfig_ = spriteSnapshotConfig;
	setParameter("SpriteSnapshotConfig", spriteSnapshotConfig);
}

std::string SubmitSnapshotJobRequest::getSnapshotTemplateId()const
{
	return snapshotTemplateId_;
}

void SubmitSnapshotJobRequest::setSnapshotTemplateId(const std::string& snapshotTemplateId)
{
	snapshotTemplateId_ = snapshotTemplateId;
	setParameter("SnapshotTemplateId", snapshotTemplateId);
}

std::string SubmitSnapshotJobRequest::getHeight()const
{
	return height_;
}

void SubmitSnapshotJobRequest::setHeight(const std::string& height)
{
	height_ = height;
	setParameter("Height", height);
}

