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

#include <alibabacloud/ehpc/model/DescribeGWSClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeGWSClustersResult::DescribeGWSClustersResult() :
	ServiceResult()
{}

DescribeGWSClustersResult::DescribeGWSClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGWSClustersResult::~DescribeGWSClustersResult()
{}

void DescribeGWSClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["ClusterInfo"];
	for (auto valueClustersClusterInfo : allClustersNode)
	{
		ClusterInfo clustersObject;
		if(!valueClustersClusterInfo["ClusterId"].isNull())
			clustersObject.clusterId = valueClustersClusterInfo["ClusterId"].asString();
		if(!valueClustersClusterInfo["Status"].isNull())
			clustersObject.status = valueClustersClusterInfo["Status"].asString();
		if(!valueClustersClusterInfo["CreateTime"].isNull())
			clustersObject.createTime = valueClustersClusterInfo["CreateTime"].asString();
		if(!valueClustersClusterInfo["VpcId"].isNull())
			clustersObject.vpcId = valueClustersClusterInfo["VpcId"].asString();
		if(!valueClustersClusterInfo["InstanceCount"].isNull())
			clustersObject.instanceCount = std::stoi(valueClustersClusterInfo["InstanceCount"].asString());
		clusters_.push_back(clustersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["CallerType"].isNull())
		callerType_ = value["CallerType"].asString();

}

int DescribeGWSClustersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeGWSClustersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGWSClustersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGWSClustersResult::ClusterInfo> DescribeGWSClustersResult::getClusters()const
{
	return clusters_;
}

std::string DescribeGWSClustersResult::getCallerType()const
{
	return callerType_;
}

