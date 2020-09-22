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

#include <alibabacloud/vs/model/BatchResumeVsStreamRequest.h>

using AlibabaCloud::Vs::Model::BatchResumeVsStreamRequest;

BatchResumeVsStreamRequest::BatchResumeVsStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchResumeVsStream")
{
	setMethod(HttpRequest::Method::Post);
}

BatchResumeVsStreamRequest::~BatchResumeVsStreamRequest()
{}

std::string BatchResumeVsStreamRequest::getChannel()const
{
	return channel_;
}

void BatchResumeVsStreamRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setParameter("Channel", channel);
}

std::string BatchResumeVsStreamRequest::getShowLog()const
{
	return showLog_;
}

void BatchResumeVsStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string BatchResumeVsStreamRequest::getControlStreamAction()const
{
	return controlStreamAction_;
}

void BatchResumeVsStreamRequest::setControlStreamAction(const std::string& controlStreamAction)
{
	controlStreamAction_ = controlStreamAction;
	setParameter("ControlStreamAction", controlStreamAction);
}

std::string BatchResumeVsStreamRequest::getLiveStreamType()const
{
	return liveStreamType_;
}

void BatchResumeVsStreamRequest::setLiveStreamType(const std::string& liveStreamType)
{
	liveStreamType_ = liveStreamType;
	setParameter("LiveStreamType", liveStreamType);
}

std::string BatchResumeVsStreamRequest::getDomainName()const
{
	return domainName_;
}

void BatchResumeVsStreamRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long BatchResumeVsStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchResumeVsStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

