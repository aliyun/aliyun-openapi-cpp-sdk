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

#include <alibabacloud/cloudwf/model/SaveApPortalConfigRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveApPortalConfigRequest;

SaveApPortalConfigRequest::SaveApPortalConfigRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveApPortalConfig")
{}

SaveApPortalConfigRequest::~SaveApPortalConfigRequest()
{}

std::string SaveApPortalConfigRequest::getAuthKey()const
{
	return authKey_;
}

void SaveApPortalConfigRequest::setAuthKey(const std::string& authKey)
{
	authKey_ = authKey;
	setCoreParameter("AuthKey", authKey);
}

std::string SaveApPortalConfigRequest::getPortalUrl()const
{
	return portalUrl_;
}

void SaveApPortalConfigRequest::setPortalUrl(const std::string& portalUrl)
{
	portalUrl_ = portalUrl;
	setCoreParameter("PortalUrl", portalUrl);
}

bool SaveApPortalConfigRequest::getPortalStatus()const
{
	return portalStatus_;
}

void SaveApPortalConfigRequest::setPortalStatus(bool portalStatus)
{
	portalStatus_ = portalStatus;
	setCoreParameter("PortalStatus", portalStatus ? "true" : "false");
}

std::string SaveApPortalConfigRequest::getWhitelist()const
{
	return whitelist_;
}

void SaveApPortalConfigRequest::setWhitelist(const std::string& whitelist)
{
	whitelist_ = whitelist;
	setCoreParameter("Whitelist", whitelist);
}

std::string SaveApPortalConfigRequest::getCheckUrl()const
{
	return checkUrl_;
}

void SaveApPortalConfigRequest::setCheckUrl(const std::string& checkUrl)
{
	checkUrl_ = checkUrl;
	setCoreParameter("CheckUrl", checkUrl);
}

long SaveApPortalConfigRequest::getApConfigId()const
{
	return apConfigId_;
}

void SaveApPortalConfigRequest::setApConfigId(long apConfigId)
{
	apConfigId_ = apConfigId;
	setCoreParameter("ApConfigId", std::to_string(apConfigId));
}

std::string SaveApPortalConfigRequest::getAuthSecret()const
{
	return authSecret_;
}

void SaveApPortalConfigRequest::setAuthSecret(const std::string& authSecret)
{
	authSecret_ = authSecret;
	setCoreParameter("AuthSecret", authSecret);
}

std::string SaveApPortalConfigRequest::getWebAuthUrl()const
{
	return webAuthUrl_;
}

void SaveApPortalConfigRequest::setWebAuthUrl(const std::string& webAuthUrl)
{
	webAuthUrl_ = webAuthUrl;
	setCoreParameter("WebAuthUrl", webAuthUrl);
}

std::string SaveApPortalConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveApPortalConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int SaveApPortalConfigRequest::getNetwork()const
{
	return network_;
}

void SaveApPortalConfigRequest::setNetwork(int network)
{
	network_ = network;
	setCoreParameter("Network", std::to_string(network));
}

