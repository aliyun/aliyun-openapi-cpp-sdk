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

#include <alibabacloud/vs/model/ModifyGroupRequest.h>

using AlibabaCloud::Vs::Model::ModifyGroupRequest;

ModifyGroupRequest::ModifyGroupRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ModifyGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGroupRequest::~ModifyGroupRequest()
{}

int ModifyGroupRequest::getCaptureVideo()const
{
	return captureVideo_;
}

void ModifyGroupRequest::setCaptureVideo(int captureVideo)
{
	captureVideo_ = captureVideo;
	setParameter("CaptureVideo", std::to_string(captureVideo));
}

std::string ModifyGroupRequest::getDescription()const
{
	return description_;
}

void ModifyGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

bool ModifyGroupRequest::getEnabled()const
{
	return enabled_;
}

void ModifyGroupRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string ModifyGroupRequest::getCaptureOssPath()const
{
	return captureOssPath_;
}

void ModifyGroupRequest::setCaptureOssPath(const std::string& captureOssPath)
{
	captureOssPath_ = captureOssPath;
	setParameter("CaptureOssPath", captureOssPath);
}

std::string ModifyGroupRequest::getPushDomain()const
{
	return pushDomain_;
}

void ModifyGroupRequest::setPushDomain(const std::string& pushDomain)
{
	pushDomain_ = pushDomain;
	setParameter("PushDomain", pushDomain);
}

int ModifyGroupRequest::getCaptureImage()const
{
	return captureImage_;
}

void ModifyGroupRequest::setCaptureImage(int captureImage)
{
	captureImage_ = captureImage;
	setParameter("CaptureImage", std::to_string(captureImage));
}

std::string ModifyGroupRequest::getId()const
{
	return id_;
}

void ModifyGroupRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string ModifyGroupRequest::getShowLog()const
{
	return showLog_;
}

void ModifyGroupRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ModifyGroupRequest::getPlayDomain()const
{
	return playDomain_;
}

void ModifyGroupRequest::setPlayDomain(const std::string& playDomain)
{
	playDomain_ = playDomain;
	setParameter("PlayDomain", playDomain);
}

std::string ModifyGroupRequest::getOutProtocol()const
{
	return outProtocol_;
}

void ModifyGroupRequest::setOutProtocol(const std::string& outProtocol)
{
	outProtocol_ = outProtocol;
	setParameter("OutProtocol", outProtocol);
}

int ModifyGroupRequest::getCaptureInterval()const
{
	return captureInterval_;
}

void ModifyGroupRequest::setCaptureInterval(int captureInterval)
{
	captureInterval_ = captureInterval;
	setParameter("CaptureInterval", std::to_string(captureInterval));
}

long ModifyGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyGroupRequest::getInProtocol()const
{
	return inProtocol_;
}

void ModifyGroupRequest::setInProtocol(const std::string& inProtocol)
{
	inProtocol_ = inProtocol;
	setParameter("InProtocol", inProtocol);
}

bool ModifyGroupRequest::getLazyPull()const
{
	return lazyPull_;
}

void ModifyGroupRequest::setLazyPull(bool lazyPull)
{
	lazyPull_ = lazyPull;
	setParameter("LazyPull", lazyPull ? "true" : "false");
}

std::string ModifyGroupRequest::getName()const
{
	return name_;
}

void ModifyGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyGroupRequest::getCallback()const
{
	return callback_;
}

void ModifyGroupRequest::setCallback(const std::string& callback)
{
	callback_ = callback;
	setParameter("Callback", callback);
}

std::string ModifyGroupRequest::getRegion()const
{
	return region_;
}

void ModifyGroupRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string ModifyGroupRequest::getCaptureOssBucket()const
{
	return captureOssBucket_;
}

void ModifyGroupRequest::setCaptureOssBucket(const std::string& captureOssBucket)
{
	captureOssBucket_ = captureOssBucket;
	setParameter("CaptureOssBucket", captureOssBucket);
}

