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

#include <alibabacloud/oos/model/CreateParameterRequest.h>

using AlibabaCloud::Oos::Model::CreateParameterRequest;

CreateParameterRequest::CreateParameterRequest() :
	RpcServiceRequest("oos", "2019-06-01", "CreateParameter")
{
	setMethod(HttpRequest::Method::Post);
}

CreateParameterRequest::~CreateParameterRequest()
{}

std::string CreateParameterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateParameterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateParameterRequest::getDescription()const
{
	return description_;
}

void CreateParameterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateParameterRequest::getType()const
{
	return type_;
}

void CreateParameterRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string CreateParameterRequest::getRegionId()const
{
	return regionId_;
}

void CreateParameterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateParameterRequest::getName()const
{
	return name_;
}

void CreateParameterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateParameterRequest::getValue()const
{
	return value_;
}

void CreateParameterRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

