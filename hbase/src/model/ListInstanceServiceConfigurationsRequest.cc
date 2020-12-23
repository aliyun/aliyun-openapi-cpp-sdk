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

#include <alibabacloud/hbase/model/ListInstanceServiceConfigurationsRequest.h>

using AlibabaCloud::HBase::Model::ListInstanceServiceConfigurationsRequest;

ListInstanceServiceConfigurationsRequest::ListInstanceServiceConfigurationsRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "ListInstanceServiceConfigurations")
{
	setMethod(HttpRequest::Method::Post);
}

ListInstanceServiceConfigurationsRequest::~ListInstanceServiceConfigurationsRequest()
{}

std::string ListInstanceServiceConfigurationsRequest::getClusterId()const
{
	return clusterId_;
}

void ListInstanceServiceConfigurationsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListInstanceServiceConfigurationsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListInstanceServiceConfigurationsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int ListInstanceServiceConfigurationsRequest::getPageSize()const
{
	return pageSize_;
}

void ListInstanceServiceConfigurationsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

