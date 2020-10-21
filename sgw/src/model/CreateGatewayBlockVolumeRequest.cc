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

#include <alibabacloud/sgw/model/CreateGatewayBlockVolumeRequest.h>

using AlibabaCloud::Sgw::Model::CreateGatewayBlockVolumeRequest;

CreateGatewayBlockVolumeRequest::CreateGatewayBlockVolumeRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CreateGatewayBlockVolume")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGatewayBlockVolumeRequest::~CreateGatewayBlockVolumeRequest()
{}

std::string CreateGatewayBlockVolumeRequest::getOssEndpoint()const
{
	return ossEndpoint_;
}

void CreateGatewayBlockVolumeRequest::setOssEndpoint(const std::string& ossEndpoint)
{
	ossEndpoint_ = ossEndpoint;
	setParameter("OssEndpoint", ossEndpoint);
}

bool CreateGatewayBlockVolumeRequest::getRecovery()const
{
	return recovery_;
}

void CreateGatewayBlockVolumeRequest::setRecovery(bool recovery)
{
	recovery_ = recovery;
	setParameter("Recovery", recovery ? "true" : "false");
}

std::string CreateGatewayBlockVolumeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGatewayBlockVolumeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGatewayBlockVolumeRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGatewayBlockVolumeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int CreateGatewayBlockVolumeRequest::getChunkSize()const
{
	return chunkSize_;
}

void CreateGatewayBlockVolumeRequest::setChunkSize(int chunkSize)
{
	chunkSize_ = chunkSize;
	setParameter("ChunkSize", std::to_string(chunkSize));
}

std::string CreateGatewayBlockVolumeRequest::getGatewayId()const
{
	return gatewayId_;
}

void CreateGatewayBlockVolumeRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

std::string CreateGatewayBlockVolumeRequest::getVolumeProtocol()const
{
	return volumeProtocol_;
}

void CreateGatewayBlockVolumeRequest::setVolumeProtocol(const std::string& volumeProtocol)
{
	volumeProtocol_ = volumeProtocol;
	setParameter("VolumeProtocol", volumeProtocol);
}

bool CreateGatewayBlockVolumeRequest::getChapEnabled()const
{
	return chapEnabled_;
}

void CreateGatewayBlockVolumeRequest::setChapEnabled(bool chapEnabled)
{
	chapEnabled_ = chapEnabled;
	setParameter("ChapEnabled", chapEnabled ? "true" : "false");
}

std::string CreateGatewayBlockVolumeRequest::getCacheMode()const
{
	return cacheMode_;
}

void CreateGatewayBlockVolumeRequest::setCacheMode(const std::string& cacheMode)
{
	cacheMode_ = cacheMode;
	setParameter("CacheMode", cacheMode);
}

std::string CreateGatewayBlockVolumeRequest::getLocalFilePath()const
{
	return localFilePath_;
}

void CreateGatewayBlockVolumeRequest::setLocalFilePath(const std::string& localFilePath)
{
	localFilePath_ = localFilePath;
	setParameter("LocalFilePath", localFilePath);
}

bool CreateGatewayBlockVolumeRequest::getOssBucketSsl()const
{
	return ossBucketSsl_;
}

void CreateGatewayBlockVolumeRequest::setOssBucketSsl(bool ossBucketSsl)
{
	ossBucketSsl_ = ossBucketSsl;
	setParameter("OssBucketSsl", ossBucketSsl ? "true" : "false");
}

long CreateGatewayBlockVolumeRequest::getSize()const
{
	return size_;
}

void CreateGatewayBlockVolumeRequest::setSize(long size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string CreateGatewayBlockVolumeRequest::getChapInUser()const
{
	return chapInUser_;
}

void CreateGatewayBlockVolumeRequest::setChapInUser(const std::string& chapInUser)
{
	chapInUser_ = chapInUser;
	setParameter("ChapInUser", chapInUser);
}

std::string CreateGatewayBlockVolumeRequest::getName()const
{
	return name_;
}

void CreateGatewayBlockVolumeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateGatewayBlockVolumeRequest::getOssBucketName()const
{
	return ossBucketName_;
}

void CreateGatewayBlockVolumeRequest::setOssBucketName(const std::string& ossBucketName)
{
	ossBucketName_ = ossBucketName;
	setParameter("OssBucketName", ossBucketName);
}

std::string CreateGatewayBlockVolumeRequest::getChapInPassword()const
{
	return chapInPassword_;
}

void CreateGatewayBlockVolumeRequest::setChapInPassword(const std::string& chapInPassword)
{
	chapInPassword_ = chapInPassword;
	setParameter("ChapInPassword", chapInPassword);
}

