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

#include <alibabacloud/live/model/DeleteLiveSnapshotDetectPornConfigRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveSnapshotDetectPornConfigRequest;

DeleteLiveSnapshotDetectPornConfigRequest::DeleteLiveSnapshotDetectPornConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteLiveSnapshotDetectPornConfig")
{}

DeleteLiveSnapshotDetectPornConfigRequest::~DeleteLiveSnapshotDetectPornConfigRequest()
{}

std::string DeleteLiveSnapshotDetectPornConfigRequest::getAppName()const
{
	return appName_;
}

void DeleteLiveSnapshotDetectPornConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string DeleteLiveSnapshotDetectPornConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLiveSnapshotDetectPornConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DeleteLiveSnapshotDetectPornConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteLiveSnapshotDetectPornConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long DeleteLiveSnapshotDetectPornConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLiveSnapshotDetectPornConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

