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

#include <alibabacloud/live/model/StartLiveIndexRequest.h>

using AlibabaCloud::Live::Model::StartLiveIndexRequest;

StartLiveIndexRequest::StartLiveIndexRequest() :
	RpcServiceRequest("live", "2016-11-01", "StartLiveIndex")
{}

StartLiveIndexRequest::~StartLiveIndexRequest()
{}

std::string StartLiveIndexRequest::getOssBucket()const
{
	return ossBucket_;
}

void StartLiveIndexRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setCoreParameter("OssBucket", std::to_string(ossBucket));
}

std::string StartLiveIndexRequest::getTokenId()const
{
	return tokenId_;
}

void StartLiveIndexRequest::setTokenId(const std::string& tokenId)
{
	tokenId_ = tokenId;
	setCoreParameter("TokenId", std::to_string(tokenId));
}

std::string StartLiveIndexRequest::getDomainName()const
{
	return domainName_;
}

void StartLiveIndexRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string StartLiveIndexRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void StartLiveIndexRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setCoreParameter("OssEndpoint", std::to_string(ossEndpoint));
}

std::string StartLiveIndexRequest::getInputUrl()const
{
	return inputUrl_;
}

void StartLiveIndexRequest::setInputUrl(const std::string& inputUrl)
{
	inputUrl_ = inputUrl;
	setCoreParameter("InputUrl", std::to_string(inputUrl));
}

long StartLiveIndexRequest::getOwnerId()const
{
	return ownerId_;
}

void StartLiveIndexRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string StartLiveIndexRequest::getAppName()const
{
	return appName_;
}

void StartLiveIndexRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string StartLiveIndexRequest::getRegionId()const
{
	return regionId_;
}

void StartLiveIndexRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int StartLiveIndexRequest::getInterval()const
{
	return interval_;
}

void StartLiveIndexRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string StartLiveIndexRequest::getOssRamRole()const
{
	return ossRamRole_;
}

void StartLiveIndexRequest::setOssRamRole(const std::string& ossRamRole)
{
	ossRamRole_ = ossRamRole;
	setCoreParameter("OssRamRole", std::to_string(ossRamRole));
}

std::string StartLiveIndexRequest::getStreamName()const
{
	return streamName_;
}

void StartLiveIndexRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", std::to_string(streamName));
}

std::string StartLiveIndexRequest::getOssUserId()const
{
	return ossUserId_;
}

void StartLiveIndexRequest::setOssUserId(const std::string& ossUserId)
{
	ossUserId_ = ossUserId;
	setCoreParameter("OssUserId", std::to_string(ossUserId));
}

