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

#include <alibabacloud/edas/model/QuerySlsLogStoreListRequest.h>

using AlibabaCloud::Edas::Model::QuerySlsLogStoreListRequest;

QuerySlsLogStoreListRequest::QuerySlsLogStoreListRequest() :
	RoaServiceRequest("edas", "2017-08-01")
{
	setResourcePath("/pop/v5/k8s/sls/query_sls_log_store_list");
	setMethod(HttpRequest::Method::Get);
}

QuerySlsLogStoreListRequest::~QuerySlsLogStoreListRequest()
{}

std::string QuerySlsLogStoreListRequest::getAppId()const
{
	return appId_;
}

void QuerySlsLogStoreListRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

int QuerySlsLogStoreListRequest::getPageSize()const
{
	return pageSize_;
}

void QuerySlsLogStoreListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int QuerySlsLogStoreListRequest::getCurrentPage()const
{
	return currentPage_;
}

void QuerySlsLogStoreListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string QuerySlsLogStoreListRequest::getType()const
{
	return type_;
}

void QuerySlsLogStoreListRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

