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

#include <alibabacloud/aegis/model/ModifyVulConfigRequest.h>

using AlibabaCloud::Aegis::Model::ModifyVulConfigRequest;

ModifyVulConfigRequest::ModifyVulConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyVulConfig")
{}

ModifyVulConfigRequest::~ModifyVulConfigRequest()
{}

std::string ModifyVulConfigRequest::getType()const
{
	return type_;
}

void ModifyVulConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ModifyVulConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyVulConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyVulConfigRequest::getConfig()const
{
	return config_;
}

void ModifyVulConfigRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

