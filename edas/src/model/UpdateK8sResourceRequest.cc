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

#include <alibabacloud/edas/model/UpdateK8sResourceRequest.h>

using AlibabaCloud::Edas::Model::UpdateK8sResourceRequest;

UpdateK8sResourceRequest::UpdateK8sResourceRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/oam/update_k8s_resource_config");
	setMethod(HttpRequest::Method::Post);
}

UpdateK8sResourceRequest::~UpdateK8sResourceRequest()
{}

std::string UpdateK8sResourceRequest::get_Namespace()const
{
	return _namespace_;
}

void UpdateK8sResourceRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setBodyParameter("_Namespace", _namespace);
}

std::string UpdateK8sResourceRequest::getClusterId()const
{
	return clusterId_;
}

void UpdateK8sResourceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setBodyParameter("ClusterId", clusterId);
}

std::string UpdateK8sResourceRequest::getResourceContent()const
{
	return resourceContent_;
}

void UpdateK8sResourceRequest::setResourceContent(const std::string& resourceContent)
{
	resourceContent_ = resourceContent;
	setBodyParameter("ResourceContent", resourceContent);
}

