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

#include <alibabacloud/edas/model/CreateK8sIngressRuleRequest.h>

using AlibabaCloud::Edas::Model::CreateK8sIngressRuleRequest;

CreateK8sIngressRuleRequest::CreateK8sIngressRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_ingress");
	setMethod(HttpRequest::Method::Post);
}

CreateK8sIngressRuleRequest::~CreateK8sIngressRuleRequest()
{}

std::string CreateK8sIngressRuleRequest::get_Namespace()const
{
	return _namespace_;
}

void CreateK8sIngressRuleRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string CreateK8sIngressRuleRequest::getName()const
{
	return name_;
}

void CreateK8sIngressRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateK8sIngressRuleRequest::getIngressConf()const
{
	return ingressConf_;
}

void CreateK8sIngressRuleRequest::setIngressConf(const std::string& ingressConf)
{
	ingressConf_ = ingressConf;
	setParameter("IngressConf", ingressConf);
}

std::string CreateK8sIngressRuleRequest::getClusterId()const
{
	return clusterId_;
}

void CreateK8sIngressRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

