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

#include <alibabacloud/cs/model/ServiceMeshAddClusterRequest.h>

using AlibabaCloud::CS::Model::ServiceMeshAddClusterRequest;

ServiceMeshAddClusterRequest::ServiceMeshAddClusterRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/servicemesh/[ServiceMeshId]/add/clusters");
	setMethod(HttpRequest::Method::Put);
}

ServiceMeshAddClusterRequest::~ServiceMeshAddClusterRequest()
{}

std::string ServiceMeshAddClusterRequest::getServiceMeshId()const
{
	return serviceMeshId_;
}

void ServiceMeshAddClusterRequest::setServiceMeshId(const std::string& serviceMeshId)
{
	serviceMeshId_ = serviceMeshId;
	setParameter("ServiceMeshId", serviceMeshId);
}

