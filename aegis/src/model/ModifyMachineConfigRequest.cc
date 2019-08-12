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

#include <alibabacloud/aegis/model/ModifyMachineConfigRequest.h>

using AlibabaCloud::Aegis::Model::ModifyMachineConfigRequest;

ModifyMachineConfigRequest::ModifyMachineConfigRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ModifyMachineConfig")
{}

ModifyMachineConfigRequest::~ModifyMachineConfigRequest()
{}

std::string ModifyMachineConfigRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyMachineConfigRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string ModifyMachineConfigRequest::getType()const
{
	return type_;
}

void ModifyMachineConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string ModifyMachineConfigRequest::getTarget()const
{
	return target_;
}

void ModifyMachineConfigRequest::setTarget(const std::string& target)
{
	target_ = target;
	setCoreParameter("Target", std::to_string(target));
}

