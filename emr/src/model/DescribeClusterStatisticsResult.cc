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

#include <alibabacloud/emr/model/DescribeClusterStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeClusterStatisticsResult::DescribeClusterStatisticsResult() :
	ServiceResult()
{}

DescribeClusterStatisticsResult::DescribeClusterStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeClusterStatisticsResult::~DescribeClusterStatisticsResult()
{}

void DescribeClusterStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allClusterStatisticsList = value["ClusterStatisticsList"]["ClusterStatistics"];
	for (auto value : allClusterStatisticsList)
	{
		ClusterStatistics clusterStatisticsListObject;
		if(!value["ClusterType"].isNull())
			clusterStatisticsListObject.clusterType = value["ClusterType"].asString();
		if(!value["Count"].isNull())
			clusterStatisticsListObject.count = std::stoi(value["Count"].asString());
		if(!value["ClusterStatus"].isNull())
			clusterStatisticsListObject.clusterStatus = value["ClusterStatus"].asString();
		clusterStatisticsList_.push_back(clusterStatisticsListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeClusterStatisticsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeClusterStatisticsResult::ClusterStatistics> DescribeClusterStatisticsResult::getClusterStatisticsList()const
{
	return clusterStatisticsList_;
}

