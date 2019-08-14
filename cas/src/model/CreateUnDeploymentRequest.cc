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

#include <alibabacloud/cas/model/CreateUnDeploymentRequest.h>

using AlibabaCloud::Cas::Model::CreateUnDeploymentRequest;

CreateUnDeploymentRequest::CreateUnDeploymentRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateUnDeployment")
{}

CreateUnDeploymentRequest::~CreateUnDeploymentRequest()
{}

std::string CreateUnDeploymentRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateUnDeploymentRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long CreateUnDeploymentRequest::getDeploymentId()const
{
	return deploymentId_;
}

void CreateUnDeploymentRequest::setDeploymentId(long deploymentId)
{
	deploymentId_ = deploymentId;
	setCoreParameter("DeploymentId", std::to_string(deploymentId));
}

std::string CreateUnDeploymentRequest::getLang()const
{
	return lang_;
}

void CreateUnDeploymentRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

