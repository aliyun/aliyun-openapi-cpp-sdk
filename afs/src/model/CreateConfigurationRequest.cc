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

#include <alibabacloud/afs/model/CreateConfigurationRequest.h>

using AlibabaCloud::Afs::Model::CreateConfigurationRequest;

CreateConfigurationRequest::CreateConfigurationRequest() :
	RpcServiceRequest("afs", "2018-01-12", "CreateConfiguration")
{
	setMethod(HttpRequest::Method::Post);
}

CreateConfigurationRequest::~CreateConfigurationRequest()
{}

std::string CreateConfigurationRequest::getMaxPV()const
{
	return maxPV_;
}

void CreateConfigurationRequest::setMaxPV(const std::string& maxPV)
{
	maxPV_ = maxPV;
	setParameter("MaxPV", maxPV);
}

std::string CreateConfigurationRequest::getScene()const
{
	return scene_;
}

void CreateConfigurationRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string CreateConfigurationRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateConfigurationRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string CreateConfigurationRequest::getConfigurationName()const
{
	return configurationName_;
}

void CreateConfigurationRequest::setConfigurationName(const std::string& configurationName)
{
	configurationName_ = configurationName;
	setParameter("ConfigurationName", configurationName);
}

std::string CreateConfigurationRequest::getConfigurationMethod()const
{
	return configurationMethod_;
}

void CreateConfigurationRequest::setConfigurationMethod(const std::string& configurationMethod)
{
	configurationMethod_ = configurationMethod;
	setParameter("ConfigurationMethod", configurationMethod);
}

std::string CreateConfigurationRequest::getApplyType()const
{
	return applyType_;
}

void CreateConfigurationRequest::setApplyType(const std::string& applyType)
{
	applyType_ = applyType;
	setParameter("ApplyType", applyType);
}

