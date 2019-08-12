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
{}

CreateKeyRequest::~CreateKeyRequest()
{}

std::string CreateKeyRequest::getProtectionLevel()const
{
	return protectionLevel_;
}

void CreateKeyRequest::setProtectionLevel(const std::string& protectionLevel)
{
	protectionLevel_ = protectionLevel;
	setCoreParameter("ProtectionLevel", std::to_string(protectionLevel));
}

std::string CreateKeyRequest::getKeyUsage()const
{
	return keyUsage_;
}

void CreateKeyRequest::setKeyUsage(const std::string& keyUsage)
{
	keyUsage_ = keyUsage;
	setCoreParameter("KeyUsage", std::to_string(keyUsage));
}

std::string CreateKeyRequest::getOrigin()const
{
	return origin_;
}

void CreateKeyRequest::setOrigin(const std::string& origin)
{
	origin_ = origin;
	setCoreParameter("Origin", std::to_string(origin));
}

std::string CreateKeyRequest::getDescription()const
{
	return description_;
}

void CreateKeyRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

