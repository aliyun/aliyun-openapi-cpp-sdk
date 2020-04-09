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

#include <alibabacloud/retailcloud/model/ListClusterRequest.h>

using AlibabaCloud::Retailcloud::Model::ListClusterRequest;

ListClusterRequest::ListClusterRequest() :
	RpcServiceRequest("retailcloud", "2018-03-13", "ListCluster")
{
	setMethod(HttpRequest::Method::Get);
}

ListClusterRequest::~ListClusterRequest()
{}

std::string ListClusterRequest::getBusinessCode()const
{
	return businessCode_;
}

void ListClusterRequest::setBusinessCode(const std::string& businessCode)
{
	businessCode_ = businessCode;
	setParameter("BusinessCode", businessCode);
}

std::string ListClusterRequest::getEnvType()const
{
	return envType_;
}

void ListClusterRequest::setEnvType(const std::string& envType)
{
	envType_ = envType;
	setParameter("EnvType", envType);
}

int ListClusterRequest::getPageSize()const
{
	return pageSize_;
}

void ListClusterRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListClusterRequest::getPageNum()const
{
	return pageNum_;
}

void ListClusterRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

