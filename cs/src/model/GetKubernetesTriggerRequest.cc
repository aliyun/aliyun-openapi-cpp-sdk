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

#include <alibabacloud/cs/model/GetKubernetesTriggerRequest.h>

using AlibabaCloud::CS::Model::GetKubernetesTriggerRequest;

GetKubernetesTriggerRequest::GetKubernetesTriggerRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/triggers/[ClusterId]");
	setMethod(HttpRequest::Method::Get);
}

GetKubernetesTriggerRequest::~GetKubernetesTriggerRequest()
{}

std::string GetKubernetesTriggerRequest::get_Namespace()const
{
	return _namespace_;
}

void GetKubernetesTriggerRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string GetKubernetesTriggerRequest::getName()const
{
	return name_;
}

void GetKubernetesTriggerRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string GetKubernetesTriggerRequest::getClusterId()const
{
	return clusterId_;
}

void GetKubernetesTriggerRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string GetKubernetesTriggerRequest::getType()const
{
	return type_;
}

void GetKubernetesTriggerRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

