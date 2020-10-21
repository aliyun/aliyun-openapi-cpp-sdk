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

#include <alibabacloud/sgw/model/UpdateGatewayBlockVolumeRequest.h>

using AlibabaCloud::Sgw::Model::UpdateGatewayBlockVolumeRequest;

UpdateGatewayBlockVolumeRequest::UpdateGatewayBlockVolumeRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "UpdateGatewayBlockVolume")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateGatewayBlockVolumeRequest::~UpdateGatewayBlockVolumeRequest()
{}

bool UpdateGatewayBlockVolumeRequest::getChapEnabled()const
{
	return chapEnabled_;
}

void UpdateGatewayBlockVolumeRequest::setChapEnabled(bool chapEnabled)
{
	chapEnabled_ = chapEnabled;
	setParameter("ChapEnabled", chapEnabled ? "true" : "false");
}

std::string UpdateGatewayBlockVolumeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateGatewayBlockVolumeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long UpdateGatewayBlockVolumeRequest::getSize()const
{
	return size_;
}

void UpdateGatewayBlockVolumeRequest::setSize(long size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string UpdateGatewayBlockVolumeRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateGatewayBlockVolumeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UpdateGatewayBlockVolumeRequest::getChapInUser()const
{
	return chapInUser_;
}

void UpdateGatewayBlockVolumeRequest::setChapInUser(const std::string& chapInUser)
{
	chapInUser_ = chapInUser;
	setParameter("ChapInUser", chapInUser);
}

std::string UpdateGatewayBlockVolumeRequest::getIndexId()const
{
	return indexId_;
}

void UpdateGatewayBlockVolumeRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

std::string UpdateGatewayBlockVolumeRequest::getChapInPassword()const
{
	return chapInPassword_;
}

void UpdateGatewayBlockVolumeRequest::setChapInPassword(const std::string& chapInPassword)
{
	chapInPassword_ = chapInPassword;
	setParameter("ChapInPassword", chapInPassword);
}

std::string UpdateGatewayBlockVolumeRequest::getGatewayId()const
{
	return gatewayId_;
}

void UpdateGatewayBlockVolumeRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

