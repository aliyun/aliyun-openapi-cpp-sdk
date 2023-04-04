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

#include <alibabacloud/imm/model/SearchImageFigureClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

SearchImageFigureClusterResult::SearchImageFigureClusterResult() :
	ServiceResult()
{}

SearchImageFigureClusterResult::SearchImageFigureClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchImageFigureClusterResult::~SearchImageFigureClusterResult()
{}

void SearchImageFigureClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClustersNode = value["Clusters"]["ClustersItem"];
	for (auto valueClustersClustersItem : allClustersNode)
	{
		ClustersItem clustersObject;
		if(!valueClustersClustersItem["ClusterId"].isNull())
			clustersObject.clusterId = valueClustersClustersItem["ClusterId"].asString();
		if(!valueClustersClustersItem["Similarity"].isNull())
			clustersObject.similarity = std::stof(valueClustersClustersItem["Similarity"].asString());
		auto boundaryNode = value["Boundary"];
		if(!boundaryNode["Width"].isNull())
			clustersObject.boundary.width = std::stol(boundaryNode["Width"].asString());
		if(!boundaryNode["Height"].isNull())
			clustersObject.boundary.height = std::stol(boundaryNode["Height"].asString());
		if(!boundaryNode["Left"].isNull())
			clustersObject.boundary.left = std::stol(boundaryNode["Left"].asString());
		if(!boundaryNode["Top"].isNull())
			clustersObject.boundary.top = std::stol(boundaryNode["Top"].asString());
		clusters_.push_back(clustersObject);
	}

}

std::vector<SearchImageFigureClusterResult::ClustersItem> SearchImageFigureClusterResult::getClusters()const
{
	return clusters_;
}

