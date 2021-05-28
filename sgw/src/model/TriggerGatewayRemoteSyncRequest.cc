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

#include <alibabacloud/sgw/model/TriggerGatewayRemoteSyncRequest.h>

using AlibabaCloud::Sgw::Model::TriggerGatewayRemoteSyncRequest;

TriggerGatewayRemoteSyncRequest::TriggerGatewayRemoteSyncRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "TriggerGatewayRemoteSync")
{
	setMethod(HttpRequest::Method::Post);
}

TriggerGatewayRemoteSyncRequest::~TriggerGatewayRemoteSyncRequest()
{}

std::string TriggerGatewayRemoteSyncRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void TriggerGatewayRemoteSyncRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string TriggerGatewayRemoteSyncRequest::getPath()const
{
	return path_;
}

void TriggerGatewayRemoteSyncRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string TriggerGatewayRemoteSyncRequest::getSecurityToken()const
{
	return securityToken_;
}

void TriggerGatewayRemoteSyncRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string TriggerGatewayRemoteSyncRequest::getIndexId()const
{
	return indexId_;
}

void TriggerGatewayRemoteSyncRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

std::string TriggerGatewayRemoteSyncRequest::getGatewayId()const
{
	return gatewayId_;
}

void TriggerGatewayRemoteSyncRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

