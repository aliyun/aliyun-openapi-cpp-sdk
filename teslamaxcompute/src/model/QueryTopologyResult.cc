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

#include <alibabacloud/teslamaxcompute/model/QueryTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

QueryTopologyResult::QueryTopologyResult() :
	ServiceResult()
{}

QueryTopologyResult::QueryTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTopologyResult::~QueryTopologyResult()
{}

void QueryTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["resultItem"];
	for (auto valueResultresultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultresultItem["LastUpdate"].isNull())
			resultObject.lastUpdate = valueResultresultItem["LastUpdate"].asString();
		auto allRegionsNode = allResultNode["Regions"]["regionItem"];
		for (auto allResultNodeRegionsregionItem : allRegionsNode)
		{
			ResultItem::RegionItem regionsObject;
			if(!allResultNodeRegionsregionItem["Region"].isNull())
				regionsObject.region = allResultNodeRegionsregionItem["Region"].asString();
			if(!allResultNodeRegionsregionItem["RegionEnName"].isNull())
				regionsObject.regionEnName = allResultNodeRegionsregionItem["RegionEnName"].asString();
			if(!allResultNodeRegionsregionItem["RegionCnName"].isNull())
				regionsObject.regionCnName = allResultNodeRegionsregionItem["RegionCnName"].asString();
			auto allClustersNode = allRegionsNode["Clusters"]["clusterItem"];
			for (auto allRegionsNodeClustersclusterItem : allClustersNode)
			{
				ResultItem::RegionItem::ClusterItem clustersObject;
				if(!allRegionsNodeClustersclusterItem["Cluster"].isNull())
					clustersObject.cluster = allRegionsNodeClustersclusterItem["Cluster"].asString();
				if(!allRegionsNodeClustersclusterItem["ProductLine"].isNull())
					clustersObject.productLine = allRegionsNodeClustersclusterItem["ProductLine"].asString();
				if(!allRegionsNodeClustersclusterItem["ProductClass"].isNull())
					clustersObject.productClass = allRegionsNodeClustersclusterItem["ProductClass"].asString();
				if(!allRegionsNodeClustersclusterItem["NetCode"].isNull())
					clustersObject.netCode = allRegionsNodeClustersclusterItem["NetCode"].asString();
				if(!allRegionsNodeClustersclusterItem["Business"].isNull())
					clustersObject.business = allRegionsNodeClustersclusterItem["Business"].asString();
				if(!allRegionsNodeClustersclusterItem["MachineRoom"].isNull())
					clustersObject.machineRoom = allRegionsNodeClustersclusterItem["MachineRoom"].asString();
				if(!allRegionsNodeClustersclusterItem["NetArch"].isNull())
					clustersObject.netArch = allRegionsNodeClustersclusterItem["NetArch"].asString();
				regionsObject.clusters.push_back(clustersObject);
			}
			resultObject.regions.push_back(regionsObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryTopologyResult::getMessage()const
{
	return message_;
}

int QueryTopologyResult::getCode()const
{
	return code_;
}

std::vector<QueryTopologyResult::ResultItem> QueryTopologyResult::getResult()const
{
	return result_;
}

