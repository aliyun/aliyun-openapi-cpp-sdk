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

#include <alibabacloud/cs/model/UpdateServiceMeshRequest.h>

using AlibabaCloud::CS::Model::UpdateServiceMeshRequest;

UpdateServiceMeshRequest::UpdateServiceMeshRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/servicemesh/[ServiceMeshId]");
	setMethod(HttpRequest::Method::Put);
}

UpdateServiceMeshRequest::~UpdateServiceMeshRequest()
{}

std::string UpdateServiceMeshRequest::getServiceMeshId()const
{
	return serviceMeshId_;
}

void UpdateServiceMeshRequest::setServiceMeshId(const std::string& serviceMeshId)
{
	serviceMeshId_ = serviceMeshId;
	setParameter("ServiceMeshId", serviceMeshId);
}

