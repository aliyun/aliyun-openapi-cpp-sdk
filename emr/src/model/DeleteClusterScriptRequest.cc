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

#include <alibabacloud/emr/model/DeleteClusterScriptRequest.h>

using AlibabaCloud::Emr::Model::DeleteClusterScriptRequest;

DeleteClusterScriptRequest::DeleteClusterScriptRequest() :
	RpcServiceRequest("emr", "2021-03-20", "DeleteClusterScript")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteClusterScriptRequest::~DeleteClusterScriptRequest()
{}

std::string DeleteClusterScriptRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteClusterScriptRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteClusterScriptRequest::getRegionId()const
{
	return regionId_;
}

void DeleteClusterScriptRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteClusterScriptRequest::getScriptType()const
{
	return scriptType_;
}

void DeleteClusterScriptRequest::setScriptType(const std::string& scriptType)
{
	scriptType_ = scriptType;
	setParameter("ScriptType", scriptType);
}

std::string DeleteClusterScriptRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteClusterScriptRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DeleteClusterScriptRequest::getScriptBizId()const
{
	return scriptBizId_;
}

void DeleteClusterScriptRequest::setScriptBizId(const std::string& scriptBizId)
{
	scriptBizId_ = scriptBizId;
	setParameter("ScriptBizId", scriptBizId);
}

std::string DeleteClusterScriptRequest::getSystemDebug()const
{
	return systemDebug_;
}

void DeleteClusterScriptRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

