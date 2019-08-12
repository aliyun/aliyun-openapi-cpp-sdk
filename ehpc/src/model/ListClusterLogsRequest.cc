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

#include <alibabacloud/ehpc/model/ListClusterLogsRequest.h>

using AlibabaCloud::EHPC::Model::ListClusterLogsRequest;

ListClusterLogsRequest::ListClusterLogsRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListClusterLogs")
{}

ListClusterLogsRequest::~ListClusterLogsRequest()
{}

int ListClusterLogsRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string ListClusterLogsRequest::getClusterId()const
{
	return clusterId_;
}

void ListClusterLogsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

int ListClusterLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClusterLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListClusterLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClusterLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

