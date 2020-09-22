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

#include <alibabacloud/vs/model/ForbidVsStreamRequest.h>

using AlibabaCloud::Vs::Model::ForbidVsStreamRequest;

ForbidVsStreamRequest::ForbidVsStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ForbidVsStream")
{
	setMethod(HttpRequest::Method::Post);
}

ForbidVsStreamRequest::~ForbidVsStreamRequest()
{}

std::string ForbidVsStreamRequest::getAppName()const
{
	return appName_;
}

void ForbidVsStreamRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string ForbidVsStreamRequest::getStreamName()const
{
	return streamName_;
}

void ForbidVsStreamRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string ForbidVsStreamRequest::getShowLog()const
{
	return showLog_;
}

void ForbidVsStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ForbidVsStreamRequest::getControlStreamAction()const
{
	return controlStreamAction_;
}

void ForbidVsStreamRequest::setControlStreamAction(const std::string& controlStreamAction)
{
	controlStreamAction_ = controlStreamAction;
	setParameter("ControlStreamAction", controlStreamAction);
}

std::string ForbidVsStreamRequest::getResumeTime()const
{
	return resumeTime_;
}

void ForbidVsStreamRequest::setResumeTime(const std::string& resumeTime)
{
	resumeTime_ = resumeTime;
	setParameter("ResumeTime", resumeTime);
}

std::string ForbidVsStreamRequest::getLiveStreamType()const
{
	return liveStreamType_;
}

void ForbidVsStreamRequest::setLiveStreamType(const std::string& liveStreamType)
{
	liveStreamType_ = liveStreamType;
	setParameter("LiveStreamType", liveStreamType);
}

std::string ForbidVsStreamRequest::getDomainName()const
{
	return domainName_;
}

void ForbidVsStreamRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long ForbidVsStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void ForbidVsStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ForbidVsStreamRequest::getOneshot()const
{
	return oneshot_;
}

void ForbidVsStreamRequest::setOneshot(const std::string& oneshot)
{
	oneshot_ = oneshot;
	setParameter("Oneshot", oneshot);
}

