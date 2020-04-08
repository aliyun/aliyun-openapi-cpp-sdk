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

#include <alibabacloud/cassandra/model/DescribeDeletedClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeDeletedClustersResult::DescribeDeletedClustersResult() :
	ServiceResult()
{}

DescribeDeletedClustersResult::DescribeDeletedClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeletedClustersResult::~DescribeDeletedClustersResult()
{}

void DescribeDeletedClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["Cluster"];
	for (auto valueClustersCluster : allClustersNode)
	{
		Cluster clustersObject;
		if(!valueClustersCluster["ClusterId"].isNull())
			clustersObject.clusterId = valueClustersCluster["ClusterId"].asString();
		if(!valueClustersCluster["ClusterName"].isNull())
			clustersObject.clusterName = valueClustersCluster["ClusterName"].asString();
		if(!valueClustersCluster["Status"].isNull())
			clustersObject.status = valueClustersCluster["Status"].asString();
		if(!valueClustersCluster["PayType"].isNull())
			clustersObject.payType = valueClustersCluster["PayType"].asString();
		if(!valueClustersCluster["CreatedTime"].isNull())
			clustersObject.createdTime = valueClustersCluster["CreatedTime"].asString();
		if(!valueClustersCluster["ExpireTime"].isNull())
			clustersObject.expireTime = valueClustersCluster["ExpireTime"].asString();
		if(!valueClustersCluster["MajorVersion"].isNull())
			clustersObject.majorVersion = valueClustersCluster["MajorVersion"].asString();
		if(!valueClustersCluster["MinorVersion"].isNull())
			clustersObject.minorVersion = valueClustersCluster["MinorVersion"].asString();
		if(!valueClustersCluster["DataCenterCount"].isNull())
			clustersObject.dataCenterCount = std::stoi(valueClustersCluster["DataCenterCount"].asString());
		clusters_.push_back(clustersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

long DescribeDeletedClustersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDeletedClustersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDeletedClustersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDeletedClustersResult::Cluster> DescribeDeletedClustersResult::getClusters()const
{
	return clusters_;
}

