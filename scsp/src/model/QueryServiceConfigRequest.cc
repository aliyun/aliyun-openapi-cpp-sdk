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

#include <alibabacloud/scsp/model/QueryServiceConfigRequest.h>

using AlibabaCloud::Scsp::Model::QueryServiceConfigRequest;

QueryServiceConfigRequest::QueryServiceConfigRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "QueryServiceConfig")
{
	setMethod(HttpRequest::Method::Get);
}

QueryServiceConfigRequest::~QueryServiceConfigRequest()
{}

std::string QueryServiceConfigRequest::getInstanceId()const
{
	return instanceId_;
}

void QueryServiceConfigRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string QueryServiceConfigRequest::getViewCode()const
{
	return viewCode_;
}

void QueryServiceConfigRequest::setViewCode(const std::string& viewCode)
{
	viewCode_ = viewCode;
	setParameter("ViewCode", viewCode);
}

std::string QueryServiceConfigRequest::getParameters()const
{
	return parameters_;
}

void QueryServiceConfigRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

