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

#include <alibabacloud/ehpc/model/ListClustersRequest.h>

using AlibabaCloud::EHPC::Model::ListClustersRequest;

ListClustersRequest::ListClustersRequest() :
	RpcServiceRequest("ehpc", "2018-04-12", "ListClusters")
{}

ListClustersRequest::~ListClustersRequest()
{}

int ListClustersRequest::getPageSize()const
{
	return pageSize_;
}

void ListClustersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int ListClustersRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListClustersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string ListClustersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListClustersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

