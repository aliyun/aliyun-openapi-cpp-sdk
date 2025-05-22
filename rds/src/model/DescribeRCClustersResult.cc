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

#include <alibabacloud/rds/model/DescribeRCClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCClustersResult::DescribeRCClustersResult() :
	ServiceResult()
{}

DescribeRCClustersResult::DescribeRCClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCClustersResult::~DescribeRCClustersResult()
{}

void DescribeRCClustersResult::parse(const std::string &payload)
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
		if(!valueClustersCluster["VpcId"].isNull())
			clustersObject.vpcId = valueClustersCluster["VpcId"].asString();
		if(!valueClustersCluster["CreateTime"].isNull())
			clustersObject.createTime = valueClustersCluster["CreateTime"].asString();
		if(!valueClustersCluster["Profile"].isNull())
			clustersObject.profile = valueClustersCluster["Profile"].asString();
		clusters_.push_back(clustersObject);
	}

}

std::vector<DescribeRCClustersResult::Cluster> DescribeRCClustersResult::getClusters()const
{
	return clusters_;
}

