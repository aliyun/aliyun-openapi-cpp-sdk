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

#include <alibabacloud/retailcloud/model/UpdateDeployConfigRequest.h>

using AlibabaCloud::Retailcloud::Model::UpdateDeployConfigRequest;

UpdateDeployConfigRequest::UpdateDeployConfigRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "UpdateDeployConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDeployConfigRequest::~UpdateDeployConfigRequest()
{}

std::string UpdateDeployConfigRequest::getCodePath()const
{
	return codePath_;
}

void UpdateDeployConfigRequest::setCodePath(const std::string& codePath)
{
	codePath_ = codePath;
	setParameter("CodePath", codePath);
}

std::vector<std::string> UpdateDeployConfigRequest::getConfigMapList()const
{
	return configMapList_;
}

void UpdateDeployConfigRequest::setConfigMapList(const std::vector<std::string>& configMapList)
{
	configMapList_ = configMapList;
	for(int dep1 = 0; dep1!= configMapList.size(); dep1++) {
		setParameter("ConfigMapList."+ std::to_string(dep1), configMapList.at(dep1));
	}
}

std::string UpdateDeployConfigRequest::getConfigMap()const
{
	return configMap_;
}

void UpdateDeployConfigRequest::setConfigMap(const std::string& configMap)
{
	configMap_ = configMap;
	setParameter("ConfigMap", configMap);
}

std::string UpdateDeployConfigRequest::getStatefulSet()const
{
	return statefulSet_;
}

void UpdateDeployConfigRequest::setStatefulSet(const std::string& statefulSet)
{
	statefulSet_ = statefulSet;
	setParameter("StatefulSet", statefulSet);
}

long UpdateDeployConfigRequest::getAppId()const
{
	return appId_;
}

void UpdateDeployConfigRequest::setAppId(long appId)
{
	appId_ = appId;
	setParameter("AppId", std::to_string(appId));
}

std::vector<std::string> UpdateDeployConfigRequest::getSecretList()const
{
	return secretList_;
}

void UpdateDeployConfigRequest::setSecretList(const std::vector<std::string>& secretList)
{
	secretList_ = secretList;
	for(int dep1 = 0; dep1!= secretList.size(); dep1++) {
		setParameter("SecretList."+ std::to_string(dep1), secretList.at(dep1));
	}
}

long UpdateDeployConfigRequest::getId()const
{
	return id_;
}

void UpdateDeployConfigRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string UpdateDeployConfigRequest::getCronJob()const
{
	return cronJob_;
}

void UpdateDeployConfigRequest::setCronJob(const std::string& cronJob)
{
	cronJob_ = cronJob;
	setParameter("CronJob", cronJob);
}

std::string UpdateDeployConfigRequest::getDeployment()const
{
	return deployment_;
}

void UpdateDeployConfigRequest::setDeployment(const std::string& deployment)
{
	deployment_ = deployment;
	setParameter("Deployment", deployment);
}

