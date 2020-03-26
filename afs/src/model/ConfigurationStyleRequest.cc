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

#include <alibabacloud/afs/model/ConfigurationStyleRequest.h>

using AlibabaCloud::Afs::Model::ConfigurationStyleRequest;

ConfigurationStyleRequest::ConfigurationStyleRequest() :
	RpcServiceRequest("afs", "2018-01-12", "ConfigurationStyle")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigurationStyleRequest::~ConfigurationStyleRequest()
{}

std::string ConfigurationStyleRequest::getScene()const
{
	return scene_;
}

void ConfigurationStyleRequest::setScene(const std::string& scene)
{
	scene_ = scene;
	setParameter("Scene", scene);
}

std::string ConfigurationStyleRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigurationStyleRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ConfigurationStyleRequest::getConfigurationMethod()const
{
	return configurationMethod_;
}

void ConfigurationStyleRequest::setConfigurationMethod(const std::string& configurationMethod)
{
	configurationMethod_ = configurationMethod;
	setParameter("ConfigurationMethod", configurationMethod);
}

std::string ConfigurationStyleRequest::getRefExtId()const
{
	return refExtId_;
}

void ConfigurationStyleRequest::setRefExtId(const std::string& refExtId)
{
	refExtId_ = refExtId;
	setParameter("RefExtId", refExtId);
}

std::string ConfigurationStyleRequest::getApplyType()const
{
	return applyType_;
}

void ConfigurationStyleRequest::setApplyType(const std::string& applyType)
{
	applyType_ = applyType;
	setParameter("ApplyType", applyType);
}

