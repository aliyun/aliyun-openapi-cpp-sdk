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

#include <alibabacloud/vs/model/AddVsPullStreamInfoConfigRequest.h>

using AlibabaCloud::Vs::Model::AddVsPullStreamInfoConfigRequest;

AddVsPullStreamInfoConfigRequest::AddVsPullStreamInfoConfigRequest() :
	RpcServiceRequest("vs", "2018-12-12", "AddVsPullStreamInfoConfig")
{
	setMethod(HttpRequest::Method::Post);
}

AddVsPullStreamInfoConfigRequest::~AddVsPullStreamInfoConfigRequest()
{}

std::string AddVsPullStreamInfoConfigRequest::getStartTime()const
{
	return startTime_;
}

void AddVsPullStreamInfoConfigRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string AddVsPullStreamInfoConfigRequest::getAppName()const
{
	return appName_;
}

void AddVsPullStreamInfoConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string AddVsPullStreamInfoConfigRequest::getStreamName()const
{
	return streamName_;
}

void AddVsPullStreamInfoConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string AddVsPullStreamInfoConfigRequest::getShowLog()const
{
	return showLog_;
}

void AddVsPullStreamInfoConfigRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string AddVsPullStreamInfoConfigRequest::getAlways()const
{
	return always_;
}

void AddVsPullStreamInfoConfigRequest::setAlways(const std::string& always)
{
	always_ = always;
	setParameter("Always", always);
}

std::string AddVsPullStreamInfoConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddVsPullStreamInfoConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string AddVsPullStreamInfoConfigRequest::getEndTime()const
{
	return endTime_;
}

void AddVsPullStreamInfoConfigRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long AddVsPullStreamInfoConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddVsPullStreamInfoConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddVsPullStreamInfoConfigRequest::getSourceUrl()const
{
	return sourceUrl_;
}

void AddVsPullStreamInfoConfigRequest::setSourceUrl(const std::string& sourceUrl)
{
	sourceUrl_ = sourceUrl;
	setParameter("SourceUrl", sourceUrl);
}

