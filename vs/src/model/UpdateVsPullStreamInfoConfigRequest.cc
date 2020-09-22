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

#include <alibabacloud/vs/model/UpdateVsPullStreamInfoConfigRequest.h>

using AlibabaCloud::Vs::Model::UpdateVsPullStreamInfoConfigRequest;

UpdateVsPullStreamInfoConfigRequest::UpdateVsPullStreamInfoConfigRequest() :
	RpcServiceRequest("vs", "2018-12-12", "UpdateVsPullStreamInfoConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateVsPullStreamInfoConfigRequest::~UpdateVsPullStreamInfoConfigRequest()
{}

std::string UpdateVsPullStreamInfoConfigRequest::getStartTime()const
{
	return startTime_;
}

void UpdateVsPullStreamInfoConfigRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string UpdateVsPullStreamInfoConfigRequest::getAppName()const
{
	return appName_;
}

void UpdateVsPullStreamInfoConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string UpdateVsPullStreamInfoConfigRequest::getStreamName()const
{
	return streamName_;
}

void UpdateVsPullStreamInfoConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string UpdateVsPullStreamInfoConfigRequest::getShowLog()const
{
	return showLog_;
}

void UpdateVsPullStreamInfoConfigRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string UpdateVsPullStreamInfoConfigRequest::getAlways()const
{
	return always_;
}

void UpdateVsPullStreamInfoConfigRequest::setAlways(const std::string& always)
{
	always_ = always;
	setParameter("Always", always);
}

std::string UpdateVsPullStreamInfoConfigRequest::getDomainName()const
{
	return domainName_;
}

void UpdateVsPullStreamInfoConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string UpdateVsPullStreamInfoConfigRequest::getEndTime()const
{
	return endTime_;
}

void UpdateVsPullStreamInfoConfigRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long UpdateVsPullStreamInfoConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateVsPullStreamInfoConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateVsPullStreamInfoConfigRequest::getSourceUrl()const
{
	return sourceUrl_;
}

void UpdateVsPullStreamInfoConfigRequest::setSourceUrl(const std::string& sourceUrl)
{
	sourceUrl_ = sourceUrl;
	setParameter("SourceUrl", sourceUrl);
}

