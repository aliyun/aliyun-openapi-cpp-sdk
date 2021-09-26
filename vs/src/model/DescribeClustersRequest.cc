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

#include <alibabacloud/vs/model/DescribeClustersRequest.h>

using AlibabaCloud::Vs::Model::DescribeClustersRequest;

DescribeClustersRequest::DescribeClustersRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeClusters")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClustersRequest::~DescribeClustersRequest()
{}

long DescribeClustersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeClustersRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeClustersRequest::getShowLog()const
{
	return showLog_;
}

void DescribeClustersRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeClustersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeClustersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

long DescribeClustersRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeClustersRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

