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

#include <alibabacloud/cs/model/DescribeAddonsRequest.h>

using AlibabaCloud::CS::Model::DescribeAddonsRequest;

DescribeAddonsRequest::DescribeAddonsRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters/components/metadata");
	setMethod(HttpRequest::Method::Get);
}

DescribeAddonsRequest::~DescribeAddonsRequest()
{}

std::string DescribeAddonsRequest::getCluster_type()const
{
	return cluster_type_;
}

void DescribeAddonsRequest::setCluster_type(const std::string& cluster_type)
{
	cluster_type_ = cluster_type;
	setParameter("Cluster_type", cluster_type);
}

std::string DescribeAddonsRequest::getRegion()const
{
	return region_;
}

void DescribeAddonsRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

