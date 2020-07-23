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

#include <alibabacloud/retailcloud/model/CreateDeployConfigRequest.h>

using AlibabaCloud::Retailcloud::Model::CreateDeployConfigRequest;

CreateDeployConfigRequest::CreateDeployConfigRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "CreateDeployConfig")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDeployConfigRequest::~CreateDeployConfigRequest()
{}

std::string CreateDeployConfigRequest::getCodePath()const
{
	return codePath_;
}

void CreateDeployConfigRequest::setCodePath(const std::string& codePath)
{
	codePath_ = codePath;
	setParameter("CodePath", codePath);
}

std::vector<std::string> CreateDeployConfigRequest::getConfigMapList()const
{
	return configMapList_;
}

void CreateDeployConfigRequest::setConfigMapList(const std::vector<std::string>& configMapList)
{
	configMapList_ = configMapList;
	for(int dep1 = 0; dep1!= configMapList.size(); dep1++) {
		setParameter("ConfigMapList."+ std::to_string(dep1), configMapList.at(dep1));
	}
}

long CreateDeployConfigRequest::getAppId()const
{
	return appId_;
}

void CreateDeployConfigRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::string CreateDeployConfigRequest::getConfigMap()const
{
	return configMap_;
}

void CreateDeployConfigRequest::setConfigMap(const std::string& configMap)
{
	configMap_ = configMap;
	setParameter("ConfigMap", configMap);
}

std::string CreateDeployConfigRequest::getStatefulSet()const
{
	return statefulSet_;
}

void CreateDeployConfigRequest::setStatefulSet(const std::string& statefulSet)
{
	statefulSet_ = statefulSet;
	setParameter("StatefulSet", statefulSet);
}

std::string CreateDeployConfigRequest::getEnvType()const
{
	return envType_;
}

void CreateDeployConfigRequest::setEnvType(const std::string& envType)
{
	envType_ = envType;
	setParameter("EnvType", envType);
}

std::string CreateDeployConfigRequest::getName()const
{
	return name_;
}

void CreateDeployConfigRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<std::string> CreateDeployConfigRequest::getSecretList()const
{
	return secretList_;
}

void CreateDeployConfigRequest::setSecretList(const std::vector<std::string>& secretList)
{
	secretList_ = secretList;
	for(int dep1 = 0; dep1!= secretList.size(); dep1++) {
		setParameter("SecretList."+ std::to_string(dep1), secretList.at(dep1));
	}
}

std::string CreateDeployConfigRequest::getCronJob()const
{
	return cronJob_;
}

void CreateDeployConfigRequest::setCronJob(const std::string& cronJob)
{
	cronJob_ = cronJob;
	setParameter("CronJob", cronJob);
}

std::string CreateDeployConfigRequest::getDeployment()const
{
	return deployment_;
}

void CreateDeployConfigRequest::setDeployment(const std::string& deployment)
{
	deployment_ = deployment;
	setParameter("Deployment", deployment);
}

