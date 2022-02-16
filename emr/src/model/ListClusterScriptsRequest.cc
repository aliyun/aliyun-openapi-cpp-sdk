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

#include <alibabacloud/emr/model/ListClusterScriptsRequest.h>

using AlibabaCloud::Emr::Model::ListClusterScriptsRequest;

ListClusterScriptsRequest::ListClusterScriptsRequest() :
	RpcServiceRequest("emr", "2021-03-20", "ListClusterScripts")
{
	setMethod(HttpRequest::Method::Post);
}

ListClusterScriptsRequest::~ListClusterScriptsRequest()
{}

std::string ListClusterScriptsRequest::getClientToken()const
{
	return clientToken_;
}

void ListClusterScriptsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ListClusterScriptsRequest::getRegionId()const
{
	return regionId_;
}

void ListClusterScriptsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListClusterScriptsRequest::getScriptType()const
{
	return scriptType_;
}

void ListClusterScriptsRequest::setScriptType(const std::string& scriptType)
{
	scriptType_ = scriptType;
	setParameter("ScriptType", scriptType);
}

std::string ListClusterScriptsRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterScriptsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListClusterScriptsRequest::getSystemDebug()const
{
	return systemDebug_;
}

void ListClusterScriptsRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

