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

#include <alibabacloud/ecs/model/DescribeHpcClustersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeHpcClustersResult::DescribeHpcClustersResult() :
	ServiceResult()
{}

DescribeHpcClustersResult::DescribeHpcClustersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHpcClustersResult::~DescribeHpcClustersResult()
{}

void DescribeHpcClustersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHpcClustersNode = value["HpcClusters"]["HpcCluster"];
	for (auto valueHpcClustersHpcCluster : allHpcClustersNode)
	{
		HpcCluster hpcClustersObject;
		if(!valueHpcClustersHpcCluster["HpcClusterId"].isNull())
			hpcClustersObject.hpcClusterId = valueHpcClustersHpcCluster["HpcClusterId"].asString();
		if(!valueHpcClustersHpcCluster["Name"].isNull())
			hpcClustersObject.name = valueHpcClustersHpcCluster["Name"].asString();
		if(!valueHpcClustersHpcCluster["Description"].isNull())
			hpcClustersObject.description = valueHpcClustersHpcCluster["Description"].asString();
		hpcClusters_.push_back(hpcClustersObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeHpcClustersResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeHpcClustersResult::getPageSize()const
{
	return pageSize_;
}

int DescribeHpcClustersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeHpcClustersResult::HpcCluster> DescribeHpcClustersResult::getHpcClusters()const
{
	return hpcClusters_;
}

