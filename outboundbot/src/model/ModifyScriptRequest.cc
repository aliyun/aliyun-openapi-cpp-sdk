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

#include <alibabacloud/outboundbot/model/ModifyScriptRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyScriptRequest;

ModifyScriptRequest::ModifyScriptRequest() :
	RpcServiceRequest("outboundbot", "2019-12-26", "ModifyScript")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyScriptRequest::~ModifyScriptRequest()
{}

std::string ModifyScriptRequest::getIndustry()const
{
	return industry_;
}

void ModifyScriptRequest::setIndustry(const std::string& industry)
{
	industry_ = industry;
	setParameter("Industry", industry);
}

std::string ModifyScriptRequest::getScriptName()const
{
	return scriptName_;
}

void ModifyScriptRequest::setScriptName(const std::string& scriptName)
{
	scriptName_ = scriptName;
	setParameter("ScriptName", scriptName);
}

std::string ModifyScriptRequest::getScene()const
{
	return scene_;
}

void ModifyScriptRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string ModifyScriptRequest::getScriptId()const
{
	return scriptId_;
}

void ModifyScriptRequest::setScriptId(const std::string& scriptId)
{
	scriptId_ = scriptId;
	setParameter("ScriptId", scriptId);
}

std::string ModifyScriptRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyScriptRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyScriptRequest::getScriptDescription()const
{
	return scriptDescription_;
}

void ModifyScriptRequest::setScriptDescription(const std::string& scriptDescription)
{
	scriptDescription_ = scriptDescription;
	setParameter("ScriptDescription", scriptDescription);
}

