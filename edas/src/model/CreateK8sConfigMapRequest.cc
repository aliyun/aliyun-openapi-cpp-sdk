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

#include <alibabacloud/edas/model/CreateK8sConfigMapRequest.h>

using AlibabaCloud::Edas::Model::CreateK8sConfigMapRequest;

CreateK8sConfigMapRequest::CreateK8sConfigMapRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_config_map");
	setMethod(HttpRequest::Method::Post);
}

CreateK8sConfigMapRequest::~CreateK8sConfigMapRequest()
{}

std::string CreateK8sConfigMapRequest::getData()const
{
	return data_;
}

void CreateK8sConfigMapRequest::setData(const std::string& data)
{
	data_ = data;
	setBodyParameter("Data", data);
}

std::string CreateK8sConfigMapRequest::get_Namespace()const
{
	return _namespace_;
}

void CreateK8sConfigMapRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setBodyParameter("_Namespace", _namespace);
}

std::string CreateK8sConfigMapRequest::getName()const
{
	return name_;
}

void CreateK8sConfigMapRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateK8sConfigMapRequest::getClusterId()const
{
	return clusterId_;
}

void CreateK8sConfigMapRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setBodyParameter("ClusterId", clusterId);
}

