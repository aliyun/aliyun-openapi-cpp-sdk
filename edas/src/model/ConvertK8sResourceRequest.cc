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

#include <alibabacloud/edas/model/ConvertK8sResourceRequest.h>

using AlibabaCloud::Edas::Model::ConvertK8sResourceRequest;

ConvertK8sResourceRequest::ConvertK8sResourceRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/oam/k8s_resource_convert");
	setMethod(HttpRequest::Method::Post);
}

ConvertK8sResourceRequest::~ConvertK8sResourceRequest()
{}

std::string ConvertK8sResourceRequest::get_Namespace()const
{
	return _namespace_;
}

void ConvertK8sResourceRequest::set_Namespace(const std::string& _namespace)
{
	_namespace_ = _namespace;
	setParameter("_Namespace", _namespace);
}

std::string ConvertK8sResourceRequest::getResourceName()const
{
	return resourceName_;
}

void ConvertK8sResourceRequest::setResourceName(const std::string& resourceName)
{
	resourceName_ = resourceName;
	setParameter("ResourceName", resourceName);
}

std::string ConvertK8sResourceRequest::getClusterId()const
{
	return clusterId_;
}

void ConvertK8sResourceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ConvertK8sResourceRequest::getResourceType()const
{
	return resourceType_;
}

void ConvertK8sResourceRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

