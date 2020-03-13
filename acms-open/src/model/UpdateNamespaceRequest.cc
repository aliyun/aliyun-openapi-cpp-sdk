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

#include <alibabacloud/acms-open/model/UpdateNamespaceRequest.h>

using AlibabaCloud::Acms_open::Model::UpdateNamespaceRequest;

UpdateNamespaceRequest::UpdateNamespaceRequest() :
	RoaServiceRequest("acms-open", "2020-02-06")
{
	setResourcePath("/diamond-ops/pop/namespace");
	setMethod(HttpRequest::Method::Put);
}

UpdateNamespaceRequest::~UpdateNamespaceRequest()
{}

std::string UpdateNamespaceRequest::getNamespaceName()const
{
	return namespaceName_;
}

void UpdateNamespaceRequest::setNamespaceName(const std::string& namespaceName)
{
	namespaceName_ = namespaceName;
	setBodyParameter("NamespaceName", namespaceName);
}

std::string UpdateNamespaceRequest::getNamespaceId()const
{
	return namespaceId_;
}

void UpdateNamespaceRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setBodyParameter("NamespaceId", namespaceId);
}

