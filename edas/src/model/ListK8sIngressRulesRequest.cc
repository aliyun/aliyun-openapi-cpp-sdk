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

#include <alibabacloud/edas/model/ListK8sIngressRulesRequest.h>

using AlibabaCloud::Edas::Model::ListK8sIngressRulesRequest;

ListK8sIngressRulesRequest::ListK8sIngressRulesRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/acs/k8s_ingress");
	setMethod(HttpRequest::Method::Get);
}

ListK8sIngressRulesRequest::~ListK8sIngressRulesRequest()
{}

std::string ListK8sIngressRulesRequest::getCondition()const
{
	return condition_;
}

void ListK8sIngressRulesRequest::setCondition(const std::string& condition)
{
	condition_ = condition;
	setParameter("Condition", condition);
}

std::string ListK8sIngressRulesRequest::getRegionId()const
{
	return regionId_;
}

void ListK8sIngressRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ListK8sIngressRulesRequest::get_Namespace()const
{
	return _namespace_;
}

void ListK8sIngressRulesRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string ListK8sIngressRulesRequest::getClusterId()const
{
	return clusterId_;
}

void ListK8sIngressRulesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

