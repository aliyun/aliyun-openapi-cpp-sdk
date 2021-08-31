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

#include <alibabacloud/edas/model/GetK8sClusterRequest.h>

using AlibabaCloud::Edas::Model::GetK8sClusterRequest;

GetK8sClusterRequest::GetK8sClusterRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s_clusters");
	setMethod(HttpRequest::Method::Post);
}

GetK8sClusterRequest::~GetK8sClusterRequest()
{}

int GetK8sClusterRequest::getClusterType()const
{
	return clusterType_;
}

void GetK8sClusterRequest::setClusterType(int clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", std::to_string(clusterType));
}

std::string GetK8sClusterRequest::getRegionTag()const
{
	return regionTag_;
}

void GetK8sClusterRequest::setRegionTag(const std::string& regionTag)
{
	regionTag_ = regionTag;
	setParameter("RegionTag", regionTag);
}

int GetK8sClusterRequest::getPageSize()const
{
	return pageSize_;
}

void GetK8sClusterRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int GetK8sClusterRequest::getCurrentPage()const
{
	return currentPage_;
}

void GetK8sClusterRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

