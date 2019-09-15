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

#include <alibabacloud/aegis/model/ModifyTargetConfigRequest.h>

using AlibabaCloud::Aegis::Model::ModifyTargetConfigRequest;

ModifyTargetConfigRequest::ModifyTargetConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyTargetConfig")
{}

ModifyTargetConfigRequest::~ModifyTargetConfigRequest()
{}

std::string ModifyTargetConfigRequest::getType()const
{
	return type_;
}

void ModifyTargetConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ModifyTargetConfigRequest::getUuid()const
{
	return uuid_;
}

void ModifyTargetConfigRequest::setUuid(const std::string& uuid)
{
	uuid_ = uuid;
	setCoreParameter("Uuid", uuid);
}

std::string ModifyTargetConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyTargetConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyTargetConfigRequest::getConfig()const
{
	return config_;
}

void ModifyTargetConfigRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

