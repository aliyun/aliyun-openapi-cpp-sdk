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

#include <alibabacloud/live/model/UpdateLiveSnapshotDetectPornConfigRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveSnapshotDetectPornConfigRequest;

UpdateLiveSnapshotDetectPornConfigRequest::UpdateLiveSnapshotDetectPornConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "UpdateLiveSnapshotDetectPornConfig")
{}

UpdateLiveSnapshotDetectPornConfigRequest::~UpdateLiveSnapshotDetectPornConfigRequest()
{}

std::string UpdateLiveSnapshotDetectPornConfigRequest::getOssBucket()const
{
	return ossBucket_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setCoreParameter("OssBucket", ossBucket);
}

std::string UpdateLiveSnapshotDetectPornConfigRequest::getAppName()const
{
	return appName_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string UpdateLiveSnapshotDetectPornConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UpdateLiveSnapshotDetectPornConfigRequest::getDomainName()const
{
	return domainName_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string UpdateLiveSnapshotDetectPornConfigRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setCoreParameter("OssEndpoint", ossEndpoint);
}

int UpdateLiveSnapshotDetectPornConfigRequest::getInterval()const
{
	return interval_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setInterval(int interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

long UpdateLiveSnapshotDetectPornConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateLiveSnapshotDetectPornConfigRequest::getOssObject()const
{
	return ossObject_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setOssObject(const std::string& ossObject)
{
	ossObject_ = ossObject;
	setCoreParameter("OssObject", ossObject);
}

std::vector<std::string> UpdateLiveSnapshotDetectPornConfigRequest::getScene()const
{
	return scene_;
}

void UpdateLiveSnapshotDetectPornConfigRequest::setScene(const std::vector<std::string>& scene)
{
	scene_ = scene;
	for(int i = 0; i!= scene.size(); i++)
		setCoreParameter("Scene."+ std::to_string(i), scene.at(i));
}

