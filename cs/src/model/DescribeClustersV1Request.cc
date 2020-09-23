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

#include <alibabacloud/cs/model/DescribeClustersV1Request.h>

using AlibabaCloud::CS::Model::DescribeClustersV1Request;

DescribeClustersV1Request::DescribeClustersV1Request() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/api/v1/clusters");
	setMethod(HttpRequest::Method::Get);
}

DescribeClustersV1Request::~DescribeClustersV1Request()
{}

std::string DescribeClustersV1Request::getClusterType()const
{
	return clusterType_;
}

void DescribeClustersV1Request::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

long DescribeClustersV1Request::getPage_number()const
{
	return page_number_;
}

void DescribeClustersV1Request::setPage_number(long page_number)
{
	page_number_ = page_number;
	setParameter("Page_number", std::to_string(page_number));
}

std::string DescribeClustersV1Request::getName()const
{
	return name_;
}

void DescribeClustersV1Request::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long DescribeClustersV1Request::getPage_size()const
{
	return page_size_;
}

void DescribeClustersV1Request::setPage_size(long page_size)
{
	page_size_ = page_size;
	setParameter("Page_size", std::to_string(page_size));
}

