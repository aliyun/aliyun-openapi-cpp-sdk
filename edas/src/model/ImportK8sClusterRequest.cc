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

#include <alibabacloud/edas/model/ImportK8sClusterRequest.h>

using AlibabaCloud::Edas::Model::ImportK8sClusterRequest;

ImportK8sClusterRequest::ImportK8sClusterRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/import_k8s_cluster");
	setMethod(HttpRequest::Method::Post);
}

ImportK8sClusterRequest::~ImportK8sClusterRequest()
{}

int ImportK8sClusterRequest::getMode()const
{
	return mode_;
}

void ImportK8sClusterRequest::setMode(int mode)
{
	mode_ = mode;
	setParameter("Mode", std::to_string(mode));
}

bool ImportK8sClusterRequest::getEnableAsm()const
{
	return enableAsm_;
}

void ImportK8sClusterRequest::setEnableAsm(bool enableAsm)
{
	enableAsm_ = enableAsm;
	setParameter("EnableAsm", enableAsm ? "true" : "false");
}

std::string ImportK8sClusterRequest::getNamespaceId()const
{
	return namespaceId_;
}

void ImportK8sClusterRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setParameter("NamespaceId", namespaceId);
}

std::string ImportK8sClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ImportK8sClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

