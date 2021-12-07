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

#include <alibabacloud/hbase/model/DescribeInstancesRequest.h>

using AlibabaCloud::HBase::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest() :
	RpcServiceRequest("hbase", "2019-01-01", "DescribeInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest()
{}

std::string DescribeInstancesRequest::getClusterName()const
{
	return clusterName_;
}

void DescribeInstancesRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

int DescribeInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstancesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeInstancesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeInstancesRequest::Tag> DescribeInstancesRequest::getTag()const
{
	return tag_;
}

void DescribeInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeInstancesRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeInstancesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string DescribeInstancesRequest::getDbType()const
{
	return dbType_;
}

void DescribeInstancesRequest::setDbType(const std::string& dbType)
{
	dbType_ = dbType;
	setParameter("DbType", dbType);
}

