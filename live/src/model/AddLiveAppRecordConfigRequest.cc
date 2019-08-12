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

#include <alibabacloud/live/model/AddLiveAppRecordConfigRequest.h>

using AlibabaCloud::Live::Model::AddLiveAppRecordConfigRequest;

AddLiveAppRecordConfigRequest::AddLiveAppRecordConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddLiveAppRecordConfig")
{}

AddLiveAppRecordConfigRequest::~AddLiveAppRecordConfigRequest()
{}

std::string AddLiveAppRecordConfigRequest::getOssBucket()const
{
	return ossBucket_;
}

void AddLiveAppRecordConfigRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setCoreParameter("OssBucket", ossBucket);
}

std::string AddLiveAppRecordConfigRequest::getAppName()const
{
	return appName_;
}

void AddLiveAppRecordConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string AddLiveAppRecordConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveAppRecordConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::vector<AddLiveAppRecordConfigRequest::RecordFormat> AddLiveAppRecordConfigRequest::getRecordFormat()const
{
	return recordFormat_;
}

void AddLiveAppRecordConfigRequest::setRecordFormat(const std::vector<RecordFormat>& recordFormat)
{
	recordFormat_ = recordFormat;
	int i = 0;
	for(int i = 0; i!= recordFormat.size(); i++)	{
		auto obj = recordFormat.at(i);
		std::string str ="RecordFormat."+ std::to_string(i);
		setCoreParameter(str + ".SliceOssObjectPrefix", std::to_string(obj.sliceOssObjectPrefix));
		setCoreParameter(str + ".Format", std::to_string(obj.format));
		setCoreParameter(str + ".OssObjectPrefix", std::to_string(obj.ossObjectPrefix));
		setCoreParameter(str + ".CycleDuration", obj.cycleDuration);
	}
}

std::string AddLiveAppRecordConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddLiveAppRecordConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string AddLiveAppRecordConfigRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void AddLiveAppRecordConfigRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setCoreParameter("OssEndpoint", ossEndpoint);
}

std::string AddLiveAppRecordConfigRequest::getEndTime()const
{
	return endTime_;
}

void AddLiveAppRecordConfigRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string AddLiveAppRecordConfigRequest::getStartTime()const
{
	return startTime_;
}

void AddLiveAppRecordConfigRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long AddLiveAppRecordConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveAppRecordConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int AddLiveAppRecordConfigRequest::getOnDemand()const
{
	return onDemand_;
}

void AddLiveAppRecordConfigRequest::setOnDemand(int onDemand)
{
	onDemand_ = onDemand;
	setCoreParameter("OnDemand", onDemand);
}

std::string AddLiveAppRecordConfigRequest::getStreamName()const
{
	return streamName_;
}

void AddLiveAppRecordConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

