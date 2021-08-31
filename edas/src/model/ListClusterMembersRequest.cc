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

#include <alibabacloud/edas/model/ListClusterMembersRequest.h>

using AlibabaCloud::Edas::Model::ListClusterMembersRequest;

ListClusterMembersRequest::ListClusterMembersRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/resource/cluster_member_list");
	setMethod(HttpRequest::Method::Get);
}

ListClusterMembersRequest::~ListClusterMembersRequest()
{}

int ListClusterMembersRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterMembersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListClusterMembersRequest::getCurrentPage()const
{
	return currentPage_;
}

void ListClusterMembersRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string ListClusterMembersRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterMembersRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListClusterMembersRequest::getEcsList()const
{
	return ecsList_;
}

void ListClusterMembersRequest::setEcsList(const std::string& ecsList)
{
	ecsList_ = ecsList;
	setParameter("EcsList", ecsList);
}

