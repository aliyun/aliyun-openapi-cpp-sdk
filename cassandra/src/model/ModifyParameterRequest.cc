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

#include <alibabacloud/cassandra/model/ModifyParameterRequest.h>

using AlibabaCloud::Cassandra::Model::ModifyParameterRequest;

ModifyParameterRequest::ModifyParameterRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "ModifyParameter")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyParameterRequest::~ModifyParameterRequest()
{}

std::string ModifyParameterRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyParameterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyParameterRequest::getName()const
{
	return name_;
}

void ModifyParameterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string ModifyParameterRequest::getValue()const
{
	return value_;
}

void ModifyParameterRequest::setValue(const std::string& value)
{
	value_ = value;
	setParameter("Value", value);
}

