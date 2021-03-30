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

#include <alibabacloud/green/model/UpdateOssIncrementCheckSettingRequest.h>

using AlibabaCloud::Green::Model::UpdateOssIncrementCheckSettingRequest;

UpdateOssIncrementCheckSettingRequest::UpdateOssIncrementCheckSettingRequest() :
	RpcServiceRequest("green", "2017-08-23", "UpdateOssIncrementCheckSetting")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateOssIncrementCheckSettingRequest::~UpdateOssIncrementCheckSettingRequest()
{}

std::string UpdateOssIncrementCheckSettingRequest::getVideoSceneList()const
{
	return videoSceneList_;
}

void UpdateOssIncrementCheckSettingRequest::setVideoSceneList(const std::string& videoSceneList)
{
	videoSceneList_ = videoSceneList;
	setParameter("VideoSceneList", videoSceneList);
}

bool UpdateOssIncrementCheckSettingRequest::getScanImageNoFileType()const
{
	return scanImageNoFileType_;
}

void UpdateOssIncrementCheckSettingRequest::setScanImageNoFileType(bool scanImageNoFileType)
{
	scanImageNoFileType_ = scanImageNoFileType;
	setParameter("ScanImageNoFileType", scanImageNoFileType ? "true" : "false");
}

std::string UpdateOssIncrementCheckSettingRequest::getImageSceneList()const
{
	return imageSceneList_;
}

void UpdateOssIncrementCheckSettingRequest::setImageSceneList(const std::string& imageSceneList)
{
	imageSceneList_ = imageSceneList;
	setParameter("ImageSceneList", imageSceneList);
}

std::string UpdateOssIncrementCheckSettingRequest::getAudioSceneList()const
{
	return audioSceneList_;
}

void UpdateOssIncrementCheckSettingRequest::setAudioSceneList(const std::string& audioSceneList)
{
	audioSceneList_ = audioSceneList;
	setParameter("AudioSceneList", audioSceneList);
}

int UpdateOssIncrementCheckSettingRequest::getVideoFrameInterval()const
{
	return videoFrameInterval_;
}

void UpdateOssIncrementCheckSettingRequest::setVideoFrameInterval(int videoFrameInterval)
{
	videoFrameInterval_ = videoFrameInterval;
	setParameter("VideoFrameInterval", std::to_string(videoFrameInterval));
}

bool UpdateOssIncrementCheckSettingRequest::getAudioAutoFreezeOpened()const
{
	return audioAutoFreezeOpened_;
}

void UpdateOssIncrementCheckSettingRequest::setAudioAutoFreezeOpened(bool audioAutoFreezeOpened)
{
	audioAutoFreezeOpened_ = audioAutoFreezeOpened;
	setParameter("AudioAutoFreezeOpened", audioAutoFreezeOpened ? "true" : "false");
}

std::string UpdateOssIncrementCheckSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void UpdateOssIncrementCheckSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string UpdateOssIncrementCheckSettingRequest::getCallbackId()const
{
	return callbackId_;
}

void UpdateOssIncrementCheckSettingRequest::setCallbackId(const std::string& callbackId)
{
	callbackId_ = callbackId;
	setParameter("CallbackId", callbackId);
}

std::string UpdateOssIncrementCheckSettingRequest::getImageScanLimit()const
{
	return imageScanLimit_;
}

void UpdateOssIncrementCheckSettingRequest::setImageScanLimit(const std::string& imageScanLimit)
{
	imageScanLimit_ = imageScanLimit;
	setParameter("ImageScanLimit", imageScanLimit);
}

std::string UpdateOssIncrementCheckSettingRequest::getVideoAutoFreezeSceneList()const
{
	return videoAutoFreezeSceneList_;
}

void UpdateOssIncrementCheckSettingRequest::setVideoAutoFreezeSceneList(const std::string& videoAutoFreezeSceneList)
{
	videoAutoFreezeSceneList_ = videoAutoFreezeSceneList;
	setParameter("VideoAutoFreezeSceneList", videoAutoFreezeSceneList);
}

int UpdateOssIncrementCheckSettingRequest::getAudioMaxSize()const
{
	return audioMaxSize_;
}

void UpdateOssIncrementCheckSettingRequest::setAudioMaxSize(int audioMaxSize)
{
	audioMaxSize_ = audioMaxSize;
	setParameter("AudioMaxSize", std::to_string(audioMaxSize));
}

std::string UpdateOssIncrementCheckSettingRequest::getLang()const
{
	return lang_;
}

void UpdateOssIncrementCheckSettingRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string UpdateOssIncrementCheckSettingRequest::getImageAutoFreeze()const
{
	return imageAutoFreeze_;
}

void UpdateOssIncrementCheckSettingRequest::setImageAutoFreeze(const std::string& imageAutoFreeze)
{
	imageAutoFreeze_ = imageAutoFreeze;
	setParameter("ImageAutoFreeze", imageAutoFreeze);
}

std::string UpdateOssIncrementCheckSettingRequest::getAudioAntispamFreezeConfig()const
{
	return audioAntispamFreezeConfig_;
}

void UpdateOssIncrementCheckSettingRequest::setAudioAntispamFreezeConfig(const std::string& audioAntispamFreezeConfig)
{
	audioAntispamFreezeConfig_ = audioAntispamFreezeConfig;
	setParameter("AudioAntispamFreezeConfig", audioAntispamFreezeConfig);
}

int UpdateOssIncrementCheckSettingRequest::getVideoMaxSize()const
{
	return videoMaxSize_;
}

void UpdateOssIncrementCheckSettingRequest::setVideoMaxSize(int videoMaxSize)
{
	videoMaxSize_ = videoMaxSize;
	setParameter("VideoMaxSize", std::to_string(videoMaxSize));
}

std::string UpdateOssIncrementCheckSettingRequest::getAutoFreezeType()const
{
	return autoFreezeType_;
}

void UpdateOssIncrementCheckSettingRequest::setAutoFreezeType(const std::string& autoFreezeType)
{
	autoFreezeType_ = autoFreezeType;
	setParameter("AutoFreezeType", autoFreezeType);
}

std::string UpdateOssIncrementCheckSettingRequest::getBucketConfigList()const
{
	return bucketConfigList_;
}

void UpdateOssIncrementCheckSettingRequest::setBucketConfigList(const std::string& bucketConfigList)
{
	bucketConfigList_ = bucketConfigList;
	setParameter("BucketConfigList", bucketConfigList);
}

int UpdateOssIncrementCheckSettingRequest::getVideoMaxFrames()const
{
	return videoMaxFrames_;
}

void UpdateOssIncrementCheckSettingRequest::setVideoMaxFrames(int videoMaxFrames)
{
	videoMaxFrames_ = videoMaxFrames;
	setParameter("VideoMaxFrames", std::to_string(videoMaxFrames));
}

