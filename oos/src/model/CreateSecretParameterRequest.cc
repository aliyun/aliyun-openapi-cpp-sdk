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

#include <alibabacloud/oos/model/CreateSecretParameterRequest.h>

using AlibabaCloud::Oos::Model::CreateSecretParameterRequest;

CreateSecretParameterRequest::CreateSecretParameterRequest() :
	RpcServiceRequest("oos", "2019-06-01", "CreateSecretParameter")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSecretParameterRequest::~CreateSecretParameterRequest()
{}

std::string CreateSecretParameterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSecretParameterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSecretParameterRequest::getDescription()const
{
	return description_;
}

void CreateSecretParameterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateSecretParameterRequest::getType()const
{
	return type_;
}

void CreateSecretParameterRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateSecretParameterRequest::getConstraints()const
{
	return constraints_;
}

void CreateSecretParameterRequest::setConstraints(const std::string& constraints)
{
	constraints_ = constraints;
	setParameter("Constraints", constraints);
}

std::string CreateSecretParameterRequest::getRegionId()const
{
	return regionId_;
}

void CreateSecretParameterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSecretParameterRequest::getValue()const
{
	return value_;
}

void CreateSecretParameterRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

std::string CreateSecretParameterRequest::getKeyId()const
{
	return keyId_;
}

void CreateSecretParameterRequest::setKeyId(const std::string& keyId)
{
	keyId_ = keyId;
	setParameter("KeyId", keyId);
}

std::string CreateSecretParameterRequest::getTags()const
{
	return tags_;
}

void CreateSecretParameterRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string CreateSecretParameterRequest::getName()const
{
	return name_;
}

void CreateSecretParameterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

