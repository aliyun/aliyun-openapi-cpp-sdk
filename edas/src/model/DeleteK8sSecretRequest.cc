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

#include <alibabacloud/edas/model/DeleteK8sSecretRequest.h>

using AlibabaCloud::Edas::Model::DeleteK8sSecretRequest;

DeleteK8sSecretRequest::DeleteK8sSecretRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_secret");
	setMethod(HttpRequest::Method::Delete);
}

DeleteK8sSecretRequest::~DeleteK8sSecretRequest()
{}

std::string DeleteK8sSecretRequest::getName()const
{
	return name_;
}

void DeleteK8sSecretRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DeleteK8sSecretRequest::get_Namespace()const
{
	return _namespace_;
}

void DeleteK8sSecretRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string DeleteK8sSecretRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteK8sSecretRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

