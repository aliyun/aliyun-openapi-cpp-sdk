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

#include <alibabacloud/edas/model/QueryK8sClusterLogProjectInfoRequest.h>

using AlibabaCloud::Edas::Model::QueryK8sClusterLogProjectInfoRequest;

QueryK8sClusterLogProjectInfoRequest::QueryK8sClusterLogProjectInfoRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/sls/project");
	setMethod(HttpRequest::Method::Get);
}

QueryK8sClusterLogProjectInfoRequest::~QueryK8sClusterLogProjectInfoRequest()
{}

std::string QueryK8sClusterLogProjectInfoRequest::getClusterId()const
{
	return clusterId_;
}

void QueryK8sClusterLogProjectInfoRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

