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

#include <alibabacloud/live/model/ForbidLiveCustomStreamRequest.h>

using AlibabaCloud::Live::Model::ForbidLiveCustomStreamRequest;

ForbidLiveCustomStreamRequest::ForbidLiveCustomStreamRequest() :
	RpcServiceRequest("live", "2016-11-01", "ForbidLiveCustomStream")
{
	setMethod(HttpRequest::Method::Post);
}

ForbidLiveCustomStreamRequest::~ForbidLiveCustomStreamRequest()
{}

std::string ForbidLiveCustomStreamRequest::getStyp()const
{
	return styp_;
}

void ForbidLiveCustomStreamRequest::setStyp(const std::string& styp)
{
	styp_ = styp;
	setParameter("Styp", styp);
}

std::string ForbidLiveCustomStreamRequest::getAppName()const
{
	return appName_;
}

void ForbidLiveCustomStreamRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string ForbidLiveCustomStreamRequest::getStreamName()const
{
	return streamName_;
}

void ForbidLiveCustomStreamRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string ForbidLiveCustomStreamRequest::getControlStreamAction()const
{
	return controlStreamAction_;
}

void ForbidLiveCustomStreamRequest::setControlStreamAction(const std::string& controlStreamAction)
{
	controlStreamAction_ = controlStreamAction;
	setParameter("ControlStreamAction", controlStreamAction);
}

std::string ForbidLiveCustomStreamRequest::getNeedwm()const
{
	return needwm_;
}

void ForbidLiveCustomStreamRequest::setNeedwm(const std::string& needwm)
{
	needwm_ = needwm;
	setParameter("Needwm", needwm);
}

std::string ForbidLiveCustomStreamRequest::getResumeTime()const
{
	return resumeTime_;
}

void ForbidLiveCustomStreamRequest::setResumeTime(const std::string& resumeTime)
{
	resumeTime_ = resumeTime;
	setParameter("ResumeTime", resumeTime);
}

std::string ForbidLiveCustomStreamRequest::getLiveStreamType()const
{
	return liveStreamType_;
}

void ForbidLiveCustomStreamRequest::setLiveStreamType(const std::string& liveStreamType)
{
	liveStreamType_ = liveStreamType;
	setParameter("LiveStreamType", liveStreamType);
}

std::string ForbidLiveCustomStreamRequest::getDomainName()const
{
	return domainName_;
}

void ForbidLiveCustomStreamRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long ForbidLiveCustomStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void ForbidLiveCustomStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ForbidLiveCustomStreamRequest::getSphd()const
{
	return sphd_;
}

void ForbidLiveCustomStreamRequest::setSphd(const std::string& sphd)
{
	sphd_ = sphd;
	setParameter("Sphd", sphd);
}

std::string ForbidLiveCustomStreamRequest::getOneshot()const
{
	return oneshot_;
}

void ForbidLiveCustomStreamRequest::setOneshot(const std::string& oneshot)
{
	oneshot_ = oneshot;
	setParameter("Oneshot", oneshot);
}

std::string ForbidLiveCustomStreamRequest::getAppid()const
{
	return appid_;
}

void ForbidLiveCustomStreamRequest::setAppid(const std::string& appid)
{
	appid_ = appid;
	setParameter("Appid", appid);
}

std::string ForbidLiveCustomStreamRequest::getRatio()const
{
	return ratio_;
}

void ForbidLiveCustomStreamRequest::setRatio(const std::string& ratio)
{
	ratio_ = ratio;
	setParameter("Ratio", ratio);
}

