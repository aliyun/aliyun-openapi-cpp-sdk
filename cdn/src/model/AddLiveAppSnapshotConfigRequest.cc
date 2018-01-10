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

#include <alibabacloud/cdn/model/AddLiveAppSnapshotConfigRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

AddLiveAppSnapshotConfigRequest::AddLiveAppSnapshotConfigRequest() :
	CdnRequest("AddLiveAppSnapshotConfig")
{}

AddLiveAppSnapshotConfigRequest::~AddLiveAppSnapshotConfigRequest()
{}

int AddLiveAppSnapshotConfigRequest::getTimeInterval()const
{
	return timeInterval_;
}

void AddLiveAppSnapshotConfigRequest::setTimeInterval(int timeInterval)
{
	timeInterval_ = timeInterval;
	setParameter("TimeInterval", std::to_string(timeInterval));
}

std::string AddLiveAppSnapshotConfigRequest::getOssBucket()const
{
	return ossBucket_;
}

void AddLiveAppSnapshotConfigRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setParameter("OssBucket", ossBucket);
}

std::string AddLiveAppSnapshotConfigRequest::getAppName()const
{
	return appName_;
}

void AddLiveAppSnapshotConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string AddLiveAppSnapshotConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveAppSnapshotConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AddLiveAppSnapshotConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddLiveAppSnapshotConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string AddLiveAppSnapshotConfigRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void AddLiveAppSnapshotConfigRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setParameter("OssEndpoint", ossEndpoint);
}

std::string AddLiveAppSnapshotConfigRequest::getSequenceOssObject()const
{
	return sequenceOssObject_;
}

void AddLiveAppSnapshotConfigRequest::setSequenceOssObject(const std::string& sequenceOssObject)
{
	sequenceOssObject_ = sequenceOssObject;
	setParameter("SequenceOssObject", sequenceOssObject);
}

std::string AddLiveAppSnapshotConfigRequest::getOverwriteOssObject()const
{
	return overwriteOssObject_;
}

void AddLiveAppSnapshotConfigRequest::setOverwriteOssObject(const std::string& overwriteOssObject)
{
	overwriteOssObject_ = overwriteOssObject;
	setParameter("OverwriteOssObject", overwriteOssObject);
}

long AddLiveAppSnapshotConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveAppSnapshotConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddLiveAppSnapshotConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddLiveAppSnapshotConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

