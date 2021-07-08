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

#include <alibabacloud/cassandra/model/DescribeClustersRequest.h>

using AlibabaCloud::Cassandra::Model::DescribeClustersRequest;

DescribeClustersRequest::DescribeClustersRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "DescribeClusters")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeClustersRequest::~DescribeClustersRequest()
{}

std::string DescribeClustersRequest::getClusterName()const
{
	return clusterName_;
}

void DescribeClustersRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

int DescribeClustersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeClustersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeClustersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeClustersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeClustersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClustersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeClustersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeClustersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeClustersRequest::Tag> DescribeClustersRequest::getTag()const
{
	return tag_;
}

void DescribeClustersRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

