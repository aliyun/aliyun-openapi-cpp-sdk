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

#include <alibabacloud/emr/model/GetOperationRequest.h>

using AlibabaCloud::Emr::Model::GetOperationRequest;

GetOperationRequest::GetOperationRequest() :
	RpcServiceRequest("emr", "2021-03-20", "GetOperation")
{
	setMethod(HttpRequest::Method::Post);
}

GetOperationRequest::~GetOperationRequest()
{}

std::string GetOperationRequest::getClientToken()const
{
	return clientToken_;
}

void GetOperationRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string GetOperationRequest::getRegionId()const
{
	return regionId_;
}

void GetOperationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetOperationRequest::getClusterId()const
{
	return clusterId_;
}

void GetOperationRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetOperationRequest::getOperationId()const
{
	return operationId_;
}

void GetOperationRequest::setOperationId(const std::string& operationId)
{
	operationId_ = operationId;
	setParameter("OperationId", operationId);
}

std::string GetOperationRequest::getSystemDebug()const
{
	return systemDebug_;
}

void GetOperationRequest::setSystemDebug(const std::string& systemDebug)
{
	systemDebug_ = systemDebug;
	setParameter("SystemDebug", systemDebug);
}

