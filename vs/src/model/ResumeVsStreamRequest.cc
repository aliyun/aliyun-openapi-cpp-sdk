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

#include <alibabacloud/vs/model/ResumeVsStreamRequest.h>

using AlibabaCloud::Vs::Model::ResumeVsStreamRequest;

ResumeVsStreamRequest::ResumeVsStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "ResumeVsStream")
{
	setMethod(HttpRequest::Method::Post);
}

ResumeVsStreamRequest::~ResumeVsStreamRequest()
{}

std::string ResumeVsStreamRequest::getAppName()const
{
	return appName_;
}

void ResumeVsStreamRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string ResumeVsStreamRequest::getStreamName()const
{
	return streamName_;
}

void ResumeVsStreamRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string ResumeVsStreamRequest::getShowLog()const
{
	return showLog_;
}

void ResumeVsStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ResumeVsStreamRequest::getControlStreamAction()const
{
	return controlStreamAction_;
}

void ResumeVsStreamRequest::setControlStreamAction(const std::string& controlStreamAction)
{
	controlStreamAction_ = controlStreamAction;
	setParameter("ControlStreamAction", controlStreamAction);
}

std::string ResumeVsStreamRequest::getLiveStreamType()const
{
	return liveStreamType_;
}

void ResumeVsStreamRequest::setLiveStreamType(const std::string& liveStreamType)
{
	liveStreamType_ = liveStreamType;
	setParameter("LiveStreamType", liveStreamType);
}

std::string ResumeVsStreamRequest::getDomainName()const
{
	return domainName_;
}

void ResumeVsStreamRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long ResumeVsStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void ResumeVsStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

