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

#include <alibabacloud/dypnsapi/model/CreateVerifySchemeRequest.h>

using AlibabaCloud::Dypnsapi::Model::CreateVerifySchemeRequest;

CreateVerifySchemeRequest::CreateVerifySchemeRequest() :
	RpcServiceRequest("dypnsapi", "2017-05-25", "CreateVerifyScheme")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVerifySchemeRequest::~CreateVerifySchemeRequest()
{}

long CreateVerifySchemeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVerifySchemeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateVerifySchemeRequest::getBundleId()const
{
	return bundleId_;
}

void CreateVerifySchemeRequest::setBundleId(const std::string& bundleId)
{
	bundleId_ = bundleId;
	setParameter("BundleId", bundleId);
}

std::string CreateVerifySchemeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateVerifySchemeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateVerifySchemeRequest::getAppName()const
{
	return appName_;
}

void CreateVerifySchemeRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string CreateVerifySchemeRequest::getPackSign()const
{
	return packSign_;
}

void CreateVerifySchemeRequest::setPackSign(const std::string& packSign)
{
	packSign_ = packSign;
	setParameter("PackSign", packSign);
}

std::string CreateVerifySchemeRequest::getPackName()const
{
	return packName_;
}

void CreateVerifySchemeRequest::setPackName(const std::string& packName)
{
	packName_ = packName;
	setParameter("PackName", packName);
}

std::string CreateVerifySchemeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVerifySchemeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateVerifySchemeRequest::getOsType()const
{
	return osType_;
}

void CreateVerifySchemeRequest::setOsType(const std::string& osType)
{
	osType_ = osType;
	setParameter("OsType", osType);
}

long CreateVerifySchemeRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVerifySchemeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateVerifySchemeRequest::getSchemeName()const
{
	return schemeName_;
}

void CreateVerifySchemeRequest::setSchemeName(const std::string& schemeName)
{
	schemeName_ = schemeName;
	setParameter("SchemeName", schemeName);
}

