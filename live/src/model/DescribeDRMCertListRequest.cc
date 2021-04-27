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

#include <alibabacloud/live/model/DescribeDRMCertListRequest.h>

using AlibabaCloud::Live::Model::DescribeDRMCertListRequest;

DescribeDRMCertListRequest::DescribeDRMCertListRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeDRMCertList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDRMCertListRequest::~DescribeDRMCertListRequest()
{}

int DescribeDRMCertListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeDRMCertListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

int DescribeDRMCertListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDRMCertListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeDRMCertListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDRMCertListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

