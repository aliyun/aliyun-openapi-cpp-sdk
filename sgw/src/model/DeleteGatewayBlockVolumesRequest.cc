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

#include <alibabacloud/sgw/model/DeleteGatewayBlockVolumesRequest.h>

using AlibabaCloud::Sgw::Model::DeleteGatewayBlockVolumesRequest;

DeleteGatewayBlockVolumesRequest::DeleteGatewayBlockVolumesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DeleteGatewayBlockVolumes")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteGatewayBlockVolumesRequest::~DeleteGatewayBlockVolumesRequest()
{}

std::string DeleteGatewayBlockVolumesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteGatewayBlockVolumesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DeleteGatewayBlockVolumesRequest::getIsSourceDeletion()const
{
	return isSourceDeletion_;
}

void DeleteGatewayBlockVolumesRequest::setIsSourceDeletion(bool isSourceDeletion)
{
	isSourceDeletion_ = isSourceDeletion;
	setParameter("IsSourceDeletion", isSourceDeletion ? "true" : "false");
}

std::string DeleteGatewayBlockVolumesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteGatewayBlockVolumesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteGatewayBlockVolumesRequest::getIndexId()const
{
	return indexId_;
}

void DeleteGatewayBlockVolumesRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

std::string DeleteGatewayBlockVolumesRequest::getGatewayId()const
{
	return gatewayId_;
}

void DeleteGatewayBlockVolumesRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

