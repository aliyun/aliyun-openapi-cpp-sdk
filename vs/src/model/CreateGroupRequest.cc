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

#include <alibabacloud/vs/model/CreateGroupRequest.h>

using AlibabaCloud::Vs::Model::CreateGroupRequest;

CreateGroupRequest::CreateGroupRequest() :
	RpcServiceRequest("vs", "2018-12-12", "CreateGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGroupRequest::~CreateGroupRequest()
{}

int CreateGroupRequest::getCaptureVideo()const
{
	return captureVideo_;
}

void CreateGroupRequest::setCaptureVideo(int captureVideo)
{
	captureVideo_ = captureVideo;
	setParameter("CaptureVideo", std::to_string(captureVideo));
}

std::string CreateGroupRequest::getDescription()const
{
	return description_;
}

void CreateGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateGroupRequest::getCaptureOssPath()const
{
	return captureOssPath_;
}

void CreateGroupRequest::setCaptureOssPath(const std::string& captureOssPath)
{
	captureOssPath_ = captureOssPath;
	setParameter("CaptureOssPath", captureOssPath);
}

std::string CreateGroupRequest::getPushDomain()const
{
	return pushDomain_;
}

void CreateGroupRequest::setPushDomain(const std::string& pushDomain)
{
	pushDomain_ = pushDomain;
	setParameter("PushDomain", pushDomain);
}

int CreateGroupRequest::getCaptureImage()const
{
	return captureImage_;
}

void CreateGroupRequest::setCaptureImage(int captureImage)
{
	captureImage_ = captureImage;
	setParameter("CaptureImage", std::to_string(captureImage));
}

std::string CreateGroupRequest::getShowLog()const
{
	return showLog_;
}

void CreateGroupRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string CreateGroupRequest::getApp()const
{
	return app_;
}

void CreateGroupRequest::setApp(const std::string& app)
{
	app_ = app;
	setParameter("App", app);
}

std::string CreateGroupRequest::getPlayDomain()const
{
	return playDomain_;
}

void CreateGroupRequest::setPlayDomain(const std::string& playDomain)
{
	playDomain_ = playDomain;
	setParameter("PlayDomain", playDomain);
}

std::string CreateGroupRequest::getOutProtocol()const
{
	return outProtocol_;
}

void CreateGroupRequest::setOutProtocol(const std::string& outProtocol)
{
	outProtocol_ = outProtocol;
	setParameter("OutProtocol", outProtocol);
}

int CreateGroupRequest::getCaptureInterval()const
{
	return captureInterval_;
}

void CreateGroupRequest::setCaptureInterval(int captureInterval)
{
	captureInterval_ = captureInterval;
	setParameter("CaptureInterval", std::to_string(captureInterval));
}

long CreateGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateGroupRequest::getInProtocol()const
{
	return inProtocol_;
}

void CreateGroupRequest::setInProtocol(const std::string& inProtocol)
{
	inProtocol_ = inProtocol;
	setParameter("InProtocol", inProtocol);
}

bool CreateGroupRequest::getLazyPull()const
{
	return lazyPull_;
}

void CreateGroupRequest::setLazyPull(bool lazyPull)
{
	lazyPull_ = lazyPull;
	setParameter("LazyPull", lazyPull ? "true" : "false");
}

std::string CreateGroupRequest::getName()const
{
	return name_;
}

void CreateGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateGroupRequest::getCallback()const
{
	return callback_;
}

void CreateGroupRequest::setCallback(const std::string& callback)
{
	callback_ = callback;
	setParameter("Callback", callback);
}

std::string CreateGroupRequest::getRegion()const
{
	return region_;
}

void CreateGroupRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

std::string CreateGroupRequest::getCaptureOssBucket()const
{
	return captureOssBucket_;
}

void CreateGroupRequest::setCaptureOssBucket(const std::string& captureOssBucket)
{
	captureOssBucket_ = captureOssBucket;
	setParameter("CaptureOssBucket", captureOssBucket);
}

