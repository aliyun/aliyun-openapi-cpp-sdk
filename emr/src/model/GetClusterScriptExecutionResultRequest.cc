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

#include <alibabacloud/emr/model/GetClusterScriptExecutionResultRequest.h>

using AlibabaCloud::Emr::Model::GetClusterScriptExecutionResultRequest;

GetClusterScriptExecutionResultRequest::GetClusterScriptExecutionResultRequest() :
	RpcServiceRequest("emr", "2021-03-20", "GetClusterScriptExecutionResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetClusterScriptExecutionResultRequest::~GetClusterScriptExecutionResultRequest()
{}

std::string GetClusterScriptExecutionResultRequest::getClientToken()const
{
	return clientToken_;
}

void GetClusterScriptExecutionResultRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GetClusterScriptExecutionResultRequest::getRegionId()const
{
	return regionId_;
}

void GetClusterScriptExecutionResultRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetClusterScriptExecutionResultRequest::getClusterId()const
{
	return clusterId_;
}

void GetClusterScriptExecutionResultRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetClusterScriptExecutionResultRequest::getScriptBizId()const
{
	return scriptBizId_;
}

void GetClusterScriptExecutionResultRequest::setScriptBizId(const std::string& scriptBizId)
{
	scriptBizId_ = scriptBizId;
	setParameter("ScriptBizId", scriptBizId);
}

std::string GetClusterScriptExecutionResultRequest::getSystemDebug()const
{
	return systemDebug_;
}

void GetClusterScriptExecutionResultRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

