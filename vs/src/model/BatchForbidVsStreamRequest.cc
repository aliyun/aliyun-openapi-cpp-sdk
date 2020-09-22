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

#include <alibabacloud/vs/model/BatchForbidVsStreamRequest.h>

using AlibabaCloud::Vs::Model::BatchForbidVsStreamRequest;

BatchForbidVsStreamRequest::BatchForbidVsStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchForbidVsStream")
{
	setMethod(HttpRequest::Method::Post);
}

BatchForbidVsStreamRequest::~BatchForbidVsStreamRequest()
{}

std::string BatchForbidVsStreamRequest::getChannel()const
{
	return channel_;
}

void BatchForbidVsStreamRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string BatchForbidVsStreamRequest::getShowLog()const
{
	return showLog_;
}

void BatchForbidVsStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string BatchForbidVsStreamRequest::getControlStreamAction()const
{
	return controlStreamAction_;
}

void BatchForbidVsStreamRequest::setControlStreamAction(const std::string& controlStreamAction)
{
	controlStreamAction_ = controlStreamAction;
	setParameter("ControlStreamAction", controlStreamAction);
}

std::string BatchForbidVsStreamRequest::getResumeTime()const
{
	return resumeTime_;
}

void BatchForbidVsStreamRequest::setResumeTime(const std::string& resumeTime)
{
	resumeTime_ = resumeTime;
	setParameter("ResumeTime", resumeTime);
}

std::string BatchForbidVsStreamRequest::getLiveStreamType()const
{
	return liveStreamType_;
}

void BatchForbidVsStreamRequest::setLiveStreamType(const std::string& liveStreamType)
{
	liveStreamType_ = liveStreamType;
	setParameter("LiveStreamType", liveStreamType);
}

std::string BatchForbidVsStreamRequest::getDomainName()const
{
	return domainName_;
}

void BatchForbidVsStreamRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long BatchForbidVsStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchForbidVsStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchForbidVsStreamRequest::getOneshot()const
{
	return oneshot_;
}

void BatchForbidVsStreamRequest::setOneshot(const std::string& oneshot)
{
	oneshot_ = oneshot;
	setParameter("Oneshot", oneshot);
}

