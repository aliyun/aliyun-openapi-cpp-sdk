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

#include <alibabacloud/green/model/UpdateOssStockStatusRequest.h>

using AlibabaCloud::Green::Model::UpdateOssStockStatusRequest;

UpdateOssStockStatusRequest::UpdateOssStockStatusRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateOssStockStatus")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateOssStockStatusRequest::~UpdateOssStockStatusRequest()
{}

std::string UpdateOssStockStatusRequest::getResourceTypeList()const
{
	return resourceTypeList_;
}

void UpdateOssStockStatusRequest::setResourceTypeList(const std::string& resourceTypeList)
{
	resourceTypeList_ = resourceTypeList;
	setParameter("ResourceTypeList", resourceTypeList);
}

int UpdateOssStockStatusRequest::getVideoFrameInterval()const
{
	return videoFrameInterval_;
}

void UpdateOssStockStatusRequest::setVideoFrameInterval(int videoFrameInterval)
{
	videoFrameInterval_ = videoFrameInterval;
	setParameter("VideoFrameInterval", std::to_string(videoFrameInterval));
}

std::string UpdateOssStockStatusRequest::getStartDate()const
{
	return startDate_;
}

void UpdateOssStockStatusRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

std::string UpdateOssStockStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateOssStockStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateOssStockStatusRequest::getVideoAutoFreezeSceneList()const
{
	return videoAutoFreezeSceneList_;
}

void UpdateOssStockStatusRequest::setVideoAutoFreezeSceneList(const std::string& videoAutoFreezeSceneList)
{
	videoAutoFreezeSceneList_ = videoAutoFreezeSceneList;
	setParameter("VideoAutoFreezeSceneList", videoAutoFreezeSceneList);
}

int UpdateOssStockStatusRequest::getAudioMaxSize()const
{
	return audioMaxSize_;
}

void UpdateOssStockStatusRequest::setAudioMaxSize(int audioMaxSize)
{
	audioMaxSize_ = audioMaxSize;
	setParameter("AudioMaxSize", std::to_string(audioMaxSize));
}

std::string UpdateOssStockStatusRequest::getLang()const
{
	return lang_;
}

void UpdateOssStockStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string UpdateOssStockStatusRequest::getImageAutoFreeze()const
{
	return imageAutoFreeze_;
}

void UpdateOssStockStatusRequest::setImageAutoFreeze(const std::string& imageAutoFreeze)
{
	imageAutoFreeze_ = imageAutoFreeze;
	setParameter("ImageAutoFreeze", imageAutoFreeze);
}

std::string UpdateOssStockStatusRequest::getAudioAutoFreezeSceneList()const
{
	return audioAutoFreezeSceneList_;
}

void UpdateOssStockStatusRequest::setAudioAutoFreezeSceneList(const std::string& audioAutoFreezeSceneList)
{
	audioAutoFreezeSceneList_ = audioAutoFreezeSceneList;
	setParameter("AudioAutoFreezeSceneList", audioAutoFreezeSceneList);
}

int UpdateOssStockStatusRequest::getVideoMaxSize()const
{
	return videoMaxSize_;
}

void UpdateOssStockStatusRequest::setVideoMaxSize(int videoMaxSize)
{
	videoMaxSize_ = videoMaxSize;
	setParameter("VideoMaxSize", std::to_string(videoMaxSize));
}

std::string UpdateOssStockStatusRequest::getAutoFreezeType()const
{
	return autoFreezeType_;
}

void UpdateOssStockStatusRequest::setAutoFreezeType(const std::string& autoFreezeType)
{
	autoFreezeType_ = autoFreezeType;
	setParameter("AutoFreezeType", autoFreezeType);
}

std::string UpdateOssStockStatusRequest::getEndDate()const
{
	return endDate_;
}

void UpdateOssStockStatusRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string UpdateOssStockStatusRequest::getBucketConfigList()const
{
	return bucketConfigList_;
}

void UpdateOssStockStatusRequest::setBucketConfigList(const std::string& bucketConfigList)
{
	bucketConfigList_ = bucketConfigList;
	setParameter("BucketConfigList", bucketConfigList);
}

std::string UpdateOssStockStatusRequest::getSceneList()const
{
	return sceneList_;
}

void UpdateOssStockStatusRequest::setSceneList(const std::string& sceneList)
{
	sceneList_ = sceneList;
	setParameter("SceneList", sceneList);
}

int UpdateOssStockStatusRequest::getVideoMaxFrames()const
{
	return videoMaxFrames_;
}

void UpdateOssStockStatusRequest::setVideoMaxFrames(int videoMaxFrames)
{
	videoMaxFrames_ = videoMaxFrames;
	setParameter("VideoMaxFrames", std::to_string(videoMaxFrames));
}

std::string UpdateOssStockStatusRequest::getOperation()const
{
	return operation_;
}

void UpdateOssStockStatusRequest::setOperation(const std::string& operation)
{
	operation_ = operation;
	setParameter("Operation", operation);
}

