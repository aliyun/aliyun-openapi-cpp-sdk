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

#include <alibabacloud/edas/model/UpdateK8sIngressRuleRequest.h>

using AlibabaCloud::Edas::Model::UpdateK8sIngressRuleRequest;

UpdateK8sIngressRuleRequest::UpdateK8sIngressRuleRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_ingress");
	setMethod(HttpRequest::Method::Put);
}

UpdateK8sIngressRuleRequest::~UpdateK8sIngressRuleRequest()
{}

std::string UpdateK8sIngressRuleRequest::get_Namespace()const
{
	return _namespace_;
}

void UpdateK8sIngressRuleRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string UpdateK8sIngressRuleRequest::getName()const
{
	return name_;
}

void UpdateK8sIngressRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string UpdateK8sIngressRuleRequest::getIngressConf()const
{
	return ingressConf_;
}

void UpdateK8sIngressRuleRequest::setIngressConf(const std::string& ingressConf)
{
	ingressConf_ = ingressConf;
	setParameter("IngressConf", ingressConf);
}

std::string UpdateK8sIngressRuleRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateK8sIngressRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

