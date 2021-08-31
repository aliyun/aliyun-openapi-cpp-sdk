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

#include <alibabacloud/edas/model/DeleteK8sServiceRequest.h>

using AlibabaCloud::Edas::Model::DeleteK8sServiceRequest;

DeleteK8sServiceRequest::DeleteK8sServiceRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_service");
	setMethod(HttpRequest::Method::Delete);
}

DeleteK8sServiceRequest::~DeleteK8sServiceRequest()
{}

std::string DeleteK8sServiceRequest::getAppId()const
{
	return appId_;
}

void DeleteK8sServiceRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DeleteK8sServiceRequest::getName()const
{
	return name_;
}

void DeleteK8sServiceRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

