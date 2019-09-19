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

#include <alibabacloud/teslamaxcompute/model/QueryResourceInventoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

QueryResourceInventoryResult::QueryResourceInventoryResult() :
	ServiceResult()
{}

QueryResourceInventoryResult::QueryResourceInventoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryResourceInventoryResult::~QueryResourceInventoryResult()
{}

void QueryResourceInventoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LastUpdate"].isNull())
		data_.lastUpdate = dataNode["LastUpdate"].asString();
	auto allClustersNode = dataNode["Clusters"]["cluster"];
	for (auto dataNodeClusterscluster : allClustersNode)
	{
		Data::Cluster clusterObject;
		if(!dataNodeClusterscluster["Status"].isNull())
			clusterObject.status = dataNodeClusterscluster["Status"].asString();
		if(!dataNodeClusterscluster["Cluster"].isNull())
			clusterObject.cluster = dataNodeClusterscluster["Cluster"].asString();
		if(!dataNodeClusterscluster["MachineRoom"].isNull())
			clusterObject.machineRoom = dataNodeClusterscluster["MachineRoom"].asString();
		if(!dataNodeClusterscluster["Region"].isNull())
			clusterObject.region = dataNodeClusterscluster["Region"].asString();
		auto allResourceParametersNode = allClustersNode["ResourceParameters"]["resourceParameter"];
		for (auto allClustersNodeResourceParametersresourceParameter : allResourceParametersNode)
		{
			Data::Cluster::ResourceParameter resourceParametersObject;
			if(!allClustersNodeResourceParametersresourceParameter["ParaName"].isNull())
				resourceParametersObject.paraName = allClustersNodeResourceParametersresourceParameter["ParaName"].asString();
			if(!allClustersNodeResourceParametersresourceParameter["ParaValue"].isNull())
				resourceParametersObject.paraValue = allClustersNodeResourceParametersresourceParameter["ParaValue"].asString();
			clusterObject.resourceParameters.push_back(resourceParametersObject);
		}
		auto allResourceInventoriesNode = allClustersNode["ResourceInventories"]["resourceInventory"];
		for (auto allClustersNodeResourceInventoriesresourceInventory : allResourceInventoriesNode)
		{
			Data::Cluster::ResourceInventory resourceInventoriesObject;
			if(!allClustersNodeResourceInventoriesresourceInventory["Total"].isNull())
				resourceInventoriesObject.total = std::stol(allClustersNodeResourceInventoriesresourceInventory["Total"].asString());
			if(!allClustersNodeResourceInventoriesresourceInventory["Available"].isNull())
				resourceInventoriesObject.available = std::stol(allClustersNodeResourceInventoriesresourceInventory["Available"].asString());
			if(!allClustersNodeResourceInventoriesresourceInventory["Used"].isNull())
				resourceInventoriesObject.used = std::stol(allClustersNodeResourceInventoriesresourceInventory["Used"].asString());
			if(!allClustersNodeResourceInventoriesresourceInventory["ResourceType"].isNull())
				resourceInventoriesObject.resourceType = allClustersNodeResourceInventoriesresourceInventory["ResourceType"].asString();
			clusterObject.resourceInventories.push_back(resourceInventoriesObject);
		}
		data_.clusters.push_back(clusterObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryResourceInventoryResult::getMessage()const
{
	return message_;
}

QueryResourceInventoryResult::Data QueryResourceInventoryResult::getData()const
{
	return data_;
}

int QueryResourceInventoryResult::getCode()const
{
	return code_;
}

