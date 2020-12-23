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

#include <alibabacloud/hbase/model/ModifyInstanceServiceConfigRequest.h>

using AlibabaCloud::HBase::Model::ModifyInstanceServiceConfigRequest;

ModifyInstanceServiceConfigRequest::ModifyInstanceServiceConfigRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ModifyInstanceServiceConfig")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceServiceConfigRequest::~ModifyInstanceServiceConfigRequest()
{}

std::string ModifyInstanceServiceConfigRequest::getConfigureName()const
{
	return configureName_;
}

void ModifyInstanceServiceConfigRequest::setConfigureName(const std::string& configureName)
{
	configureName_ = configureName;
	setParameter("ConfigureName", configureName);
}

bool ModifyInstanceServiceConfigRequest::getRestart()const
{
	return restart_;
}

void ModifyInstanceServiceConfigRequest::setRestart(bool restart)
{
	restart_ = restart;
	setParameter("Restart", restart ? "true" : "false");
}

std::string ModifyInstanceServiceConfigRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyInstanceServiceConfigRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyInstanceServiceConfigRequest::getConfigureValue()const
{
	return configureValue_;
}

void ModifyInstanceServiceConfigRequest::setConfigureValue(const std::string& configureValue)
{
	configureValue_ = configureValue;
	setParameter("ConfigureValue", configureValue);
}

std::string ModifyInstanceServiceConfigRequest::getParameters()const
{
	return parameters_;
}

void ModifyInstanceServiceConfigRequest::setParameters(const std::string& parameters)
{
	parameters_ = parameters;
	setParameter("Parameters", parameters);
}

