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

#include <alibabacloud/cdn/model/CreateLiveStreamRecordIndexFilesRequest.h>

using AlibabaCloud::Cdn::Model::CreateLiveStreamRecordIndexFilesRequest;

CreateLiveStreamRecordIndexFilesRequest::CreateLiveStreamRecordIndexFilesRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "CreateLiveStreamRecordIndexFiles")
{}

CreateLiveStreamRecordIndexFilesRequest::~CreateLiveStreamRecordIndexFilesRequest()
{}

std::string CreateLiveStreamRecordIndexFilesRequest::getOssBucket()const
{
	return ossBucket_;
}

void CreateLiveStreamRecordIndexFilesRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setCoreParameter("OssBucket", ossBucket);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getAppName()const
{
	return appName_;
}

void CreateLiveStreamRecordIndexFilesRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateLiveStreamRecordIndexFilesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getDomainName()const
{
	return domainName_;
}

void CreateLiveStreamRecordIndexFilesRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void CreateLiveStreamRecordIndexFilesRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setCoreParameter("OssEndpoint", ossEndpoint);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getEndTime()const
{
	return endTime_;
}

void CreateLiveStreamRecordIndexFilesRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getStartTime()const
{
	return startTime_;
}

void CreateLiveStreamRecordIndexFilesRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long CreateLiveStreamRecordIndexFilesRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateLiveStreamRecordIndexFilesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateLiveStreamRecordIndexFilesRequest::getStreamName()const
{
	return streamName_;
}

void CreateLiveStreamRecordIndexFilesRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

std::string CreateLiveStreamRecordIndexFilesRequest::getOssObject()const
{
	return ossObject_;
}

void CreateLiveStreamRecordIndexFilesRequest::setOssObject(const std::string& ossObject)
{
	ossObject_ = ossObject;
	setCoreParameter("OssObject", ossObject);
}

