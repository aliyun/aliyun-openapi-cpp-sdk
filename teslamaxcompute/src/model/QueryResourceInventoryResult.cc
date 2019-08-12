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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LastUpdate"].isNull())
		data_.lastUpdate = dataNode["LastUpdate"].asString();
	auto allClusters = value["Clusters"]["cluster"];
	for (auto value : allClusters)
	{
		Data::Cluster clusterObject;
		if(!value["Status"].isNull())
			clusterObject.status = value["Status"].asString();
		if(!value["Cluster"].isNull())
			clusterObject.cluster = value["Cluster"].asString();
		if(!value["MachineRoom"].isNull())
			clusterObject.machineRoom = value["MachineRoom"].asString();
		if(!value["Region"].isNull())
			clusterObject.region = value["Region"].asString();
		auto allResourceParameters = value["ResourceParameters"]["resourceParameter"];
		for (auto value : allResourceParameters)
		{
			Data::Cluster::ResourceParameter resourceParametersObject;
			if(!value["ParaName"].isNull())
				resourceParametersObject.paraName = value["ParaName"].asString();
			if(!value["ParaValue"].isNull())
				resourceParametersObject.paraValue = value["ParaValue"].asString();
			clusterObject.resourceParameters.push_back(resourceParametersObject);
		}
		auto allResourceInventories = value["ResourceInventories"]["resourceInventory"];
		for (auto value : allResourceInventories)
		{
			Data::Cluster::ResourceInventory resourceInventoriesObject;
			if(!value["Total"].isNull())
				resourceInventoriesObject.total = std::stol(value["Total"].asString());
			if(!value["Available"].isNull())
				resourceInventoriesObject.available = std::stol(value["Available"].asString());
			if(!value["Used"].isNull())
				resourceInventoriesObject.used = std::stol(value["Used"].asString());
			if(!value["ResourceType"].isNull())
				resourceInventoriesObject.resourceType = value["ResourceType"].asString();
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

