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

#include <alibabacloud/sgw/model/SwitchCSGClientsReverseSyncConfigurationRequest.h>

using AlibabaCloud::Sgw::Model::SwitchCSGClientsReverseSyncConfigurationRequest;

SwitchCSGClientsReverseSyncConfigurationRequest::SwitchCSGClientsReverseSyncConfigurationRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "SwitchCSGClientsReverseSyncConfiguration")
{
	setMethod(HttpRequest::Method::Post);
}

SwitchCSGClientsReverseSyncConfigurationRequest::~SwitchCSGClientsReverseSyncConfigurationRequest()
{}

int SwitchCSGClientsReverseSyncConfigurationRequest::getReverseSyncInternalSecond()const
{
	return reverseSyncInternalSecond_;
}

void SwitchCSGClientsReverseSyncConfigurationRequest::setReverseSyncInternalSecond(int reverseSyncInternalSecond)
{
	reverseSyncInternalSecond_ = reverseSyncInternalSecond;
	setParameter("ReverseSyncInternalSecond", std::to_string(reverseSyncInternalSecond));
}

std::string SwitchCSGClientsReverseSyncConfigurationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchCSGClientsReverseSyncConfigurationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

Array SwitchCSGClientsReverseSyncConfigurationRequest::getClientIds()const
{
	return clientIds_;
}

void SwitchCSGClientsReverseSyncConfigurationRequest::setClientIds(const Array& clientIds)
{
	clientIds_ = clientIds;
	setParameter("ClientIds", std::to_string(clientIds));
}

std::string SwitchCSGClientsReverseSyncConfigurationRequest::getClientRegionId()const
{
	return clientRegionId_;
}

void SwitchCSGClientsReverseSyncConfigurationRequest::setClientRegionId(const std::string& clientRegionId)
{
	clientRegionId_ = clientRegionId;
	setParameter("ClientRegionId", clientRegionId);
}

bool SwitchCSGClientsReverseSyncConfigurationRequest::getIsReverseSync()const
{
	return isReverseSync_;
}

void SwitchCSGClientsReverseSyncConfigurationRequest::setIsReverseSync(bool isReverseSync)
{
	isReverseSync_ = isReverseSync;
	setParameter("IsReverseSync", isReverseSync ? "true" : "false");
}

std::string SwitchCSGClientsReverseSyncConfigurationRequest::getSecurityToken()const
{
	return securityToken_;
}

void SwitchCSGClientsReverseSyncConfigurationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

