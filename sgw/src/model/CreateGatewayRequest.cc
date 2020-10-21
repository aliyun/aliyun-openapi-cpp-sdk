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

#include <alibabacloud/sgw/model/CreateGatewayRequest.h>

using AlibabaCloud::Sgw::Model::CreateGatewayRequest;

CreateGatewayRequest::CreateGatewayRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CreateGateway")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGatewayRequest::~CreateGatewayRequest()
{}

std::string CreateGatewayRequest::getGatewayClass()const
{
	return gatewayClass_;
}

void CreateGatewayRequest::setGatewayClass(const std::string& gatewayClass)
{
	gatewayClass_ = gatewayClass;
	setParameter("GatewayClass", gatewayClass);
}

std::string CreateGatewayRequest::getGatewayVersion()const
{
	return gatewayVersion_;
}

void CreateGatewayRequest::setGatewayVersion(const std::string& gatewayVersion)
{
	gatewayVersion_ = gatewayVersion;
	setParameter("GatewayVersion", gatewayVersion);
}

long CreateGatewayRequest::getInitCacheSize()const
{
	return initCacheSize_;
}

void CreateGatewayRequest::setInitCacheSize(long initCacheSize)
{
	initCacheSize_ = initCacheSize;
	setParameter("InitCacheSize", std::to_string(initCacheSize));
}

bool CreateGatewayRequest::getPostPaid()const
{
	return postPaid_;
}

void CreateGatewayRequest::setPostPaid(bool postPaid)
{
	postPaid_ = postPaid;
	setParameter("PostPaid", postPaid ? "true" : "false");
}

std::string CreateGatewayRequest::getDescription()const
{
	return description_;
}

void CreateGatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateGatewayRequest::getType()const
{
	return type_;
}

void CreateGatewayRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

bool CreateGatewayRequest::getReleaseAfterExpiration()const
{
	return releaseAfterExpiration_;
}

void CreateGatewayRequest::setReleaseAfterExpiration(bool releaseAfterExpiration)
{
	releaseAfterExpiration_ = releaseAfterExpiration;
	setParameter("ReleaseAfterExpiration", releaseAfterExpiration ? "true" : "false");
}

std::string CreateGatewayRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGatewayRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGatewayRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGatewayRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateGatewayRequest::getStorageBundleId()const
{
	return storageBundleId_;
}

void CreateGatewayRequest::setStorageBundleId(const std::string& storageBundleId)
{
	storageBundleId_ = storageBundleId;
	setParameter("StorageBundleId", storageBundleId);
}

std::string CreateGatewayRequest::getInitCacheConfig()const
{
	return initCacheConfig_;
}

void CreateGatewayRequest::setInitCacheConfig(const std::string& initCacheConfig)
{
	initCacheConfig_ = initCacheConfig;
	setParameter("InitCacheConfig", initCacheConfig);
}

std::string CreateGatewayRequest::getInitCacheCategory()const
{
	return initCacheCategory_;
}

void CreateGatewayRequest::setInitCacheCategory(const std::string& initCacheCategory)
{
	initCacheCategory_ = initCacheCategory;
	setParameter("InitCacheCategory", initCacheCategory);
}

std::string CreateGatewayRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateGatewayRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateGatewayRequest::getName()const
{
	return name_;
}

void CreateGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateGatewayRequest::getLocation()const
{
	return location_;
}

void CreateGatewayRequest::setLocation(const std::string& location)
{
	location_ = location;
	setParameter("Location", location);
}

std::string CreateGatewayRequest::getCategory()const
{
	return category_;
}

void CreateGatewayRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

int CreateGatewayRequest::getPublicNetworkBandwidth()const
{
	return publicNetworkBandwidth_;
}

void CreateGatewayRequest::setPublicNetworkBandwidth(int publicNetworkBandwidth)
{
	publicNetworkBandwidth_ = publicNetworkBandwidth;
	setParameter("PublicNetworkBandwidth", std::to_string(publicNetworkBandwidth));
}

