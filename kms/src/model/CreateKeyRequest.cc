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

#include <alibabacloud/kms/model/CreateKeyRequest.h>

using AlibabaCloud::Kms::Model::CreateKeyRequest;

CreateKeyRequest::CreateKeyRequest() :
	RpcServiceRequest("kms", "2016-01-20", "CreateKey")
{
	setMethod(HttpRequest::Method::Post);
}

CreateKeyRequest::~CreateKeyRequest()
{}

std::string CreateKeyRequest::getProtectionLevel()const
{
	return protectionLevel_;
}

void CreateKeyRequest::setProtectionLevel(const std::string& protectionLevel)
{
	protectionLevel_ = protectionLevel;
	setParameter("ProtectionLevel", protectionLevel);
}

std::string CreateKeyRequest::getKeyUsage()const
{
	return keyUsage_;
}

void CreateKeyRequest::setKeyUsage(const std::string& keyUsage)
{
	keyUsage_ = keyUsage;
	setParameter("KeyUsage", keyUsage);
}

std::string CreateKeyRequest::getOrigin()const
{
	return origin_;
}

void CreateKeyRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setParameter("Origin", origin);
}

std::string CreateKeyRequest::getDescription()const
{
	return description_;
}

void CreateKeyRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateKeyRequest::getKeySpec()const
{
	return keySpec_;
}

void CreateKeyRequest::setKeySpec(const std::string& keySpec)
{
	keySpec_ = keySpec;
	setParameter("KeySpec", keySpec);
}

std::string CreateKeyRequest::getRotationInterval()const
{
	return rotationInterval_;
}

void CreateKeyRequest::setRotationInterval(const std::string& rotationInterval)
{
	rotationInterval_ = rotationInterval;
	setParameter("RotationInterval", rotationInterval);
}

bool CreateKeyRequest::getEnableAutomaticRotation()const
{
	return enableAutomaticRotation_;
}

void CreateKeyRequest::setEnableAutomaticRotation(bool enableAutomaticRotation)
{
	enableAutomaticRotation_ = enableAutomaticRotation;
	setParameter("EnableAutomaticRotation", enableAutomaticRotation ? "true" : "false");
}

