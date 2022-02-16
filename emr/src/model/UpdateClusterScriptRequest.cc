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

#include <alibabacloud/emr/model/UpdateClusterScriptRequest.h>

using AlibabaCloud::Emr::Model::UpdateClusterScriptRequest;

UpdateClusterScriptRequest::UpdateClusterScriptRequest() :
	RpcServiceRequest("emr", "2021-03-20", "UpdateClusterScript")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateClusterScriptRequest::~UpdateClusterScriptRequest()
{}

std::string UpdateClusterScriptRequest::getClientToken()const
{
	return clientToken_;
}

void UpdateClusterScriptRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string UpdateClusterScriptRequest::getScriptId()const
{
	return scriptId_;
}

void UpdateClusterScriptRequest::setScriptId(const std::string& scriptId)
{
	scriptId_ = scriptId;
	setParameter("ScriptId", scriptId);
}

std::string UpdateClusterScriptRequest::getRegionId()const
{
	return regionId_;
}

void UpdateClusterScriptRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateClusterScriptRequest::getScriptType()const
{
	return scriptType_;
}

void UpdateClusterScriptRequest::setScriptType(const std::string& scriptType)
{
	scriptType_ = scriptType;
	setParameter("ScriptType", scriptType);
}

std::string UpdateClusterScriptRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateClusterScriptRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

Struct UpdateClusterScriptRequest::getScript()const
{
	return script_;
}

void UpdateClusterScriptRequest::setScript(const Struct& script)
{
	script_ = script;
	setParameter("Script", std::to_string(script));
}

std::string UpdateClusterScriptRequest::getSystemDebug()const
{
	return systemDebug_;
}

void UpdateClusterScriptRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

