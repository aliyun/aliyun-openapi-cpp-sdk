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

#include <alibabacloud/ehpc/model/DeleteContainerAppsRequest.h>

using AlibabaCloud::EHPC::Model::DeleteContainerAppsRequest;

DeleteContainerAppsRequest::DeleteContainerAppsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "DeleteContainerApps")
{
	setMethod(HttpRequest::Method::GET);
}

DeleteContainerAppsRequest::~DeleteContainerAppsRequest()
{}

std::vector<DeleteContainerAppsRequest::ContainerApp> DeleteContainerAppsRequest::getContainerApp()const
{
	return containerApp_;
}

void DeleteContainerAppsRequest::setContainerApp(const std::vector<ContainerApp>& containerApp)
{
	containerApp_ = containerApp;
	for(int dep1 = 0; dep1!= containerApp.size(); dep1++) {
		auto containerAppObj = containerApp.at(dep1);
		std::string containerAppObjStr = "ContainerApp." + std::to_string(dep1 + 1);
		setParameter(containerAppObjStr + ".Id", containerAppObj.id);
	}
}

std::string DeleteContainerAppsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteContainerAppsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

