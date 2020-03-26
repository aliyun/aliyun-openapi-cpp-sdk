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

#include <alibabacloud/cs/model/DescribeClustersRequest.h>

using AlibabaCloud::CS::Model::DescribeClustersRequest;

DescribeClustersRequest::DescribeClustersRequest() :
	RoaServiceRequest("cs", "2015-12-15")
{
	setResourcePath("/clusters");
	setMethod(HttpRequest::Method::Get);
}

DescribeClustersRequest::~DescribeClustersRequest()
{}

std::string DescribeClustersRequest::getClusterType()const
{
	return clusterType_;
}

void DescribeClustersRequest::setClusterType(const std::string& clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", clusterType);
}

std::string DescribeClustersRequest::getName()const
{
	return name_;
}

void DescribeClustersRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

