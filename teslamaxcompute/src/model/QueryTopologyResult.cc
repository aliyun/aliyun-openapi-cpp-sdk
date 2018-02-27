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
	auto allResult = value["Result"];
	for (auto value : allResult)
	{
		Result resultObject;
		if(!value["LastUpdate"].isNull())
			resultObject.lastUpdate = value["LastUpdate"].asString();
		auto allRegions = value["Regions"];
		for (auto value : allRegions)
		{
			Result::Regions regionsObject;
			if(!value["Region"].isNull())
				regionsObject.region = value["Region"].asString();
			if(!value["RegionEnName"].isNull())
				regionsObject.regionEnName = value["RegionEnName"].asString();
			if(!value["RegionCnName"].isNull())
				regionsObject.regionCnName = value["RegionCnName"].asString();
			auto allClusters = value["Clusters"];
			for (auto value : allClusters)
			{
				Result::Regions::Clusters clustersObject;
				if(!value["Cluster"].isNull())
					clustersObject.cluster = value["Cluster"].asString();
				if(!value["ProductLine"].isNull())
					clustersObject.productLine = value["ProductLine"].asString();
				if(!value["ProductClass"].isNull())
					clustersObject.productClass = value["ProductClass"].asString();
				if(!value["NetCode"].isNull())
					clustersObject.netCode = value["NetCode"].asString();
				if(!value["Business"].isNull())
					clustersObject.business = value["Business"].asString();
				if(!value["MachineRoom"].isNull())
					clustersObject.machineRoom = value["MachineRoom"].asString();
				if(!value["NetArch"].isNull())
					clustersObject.netArch = value["NetArch"].asString();
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

std::vector<QueryTopologyResult::Result> QueryTopologyResult::getResult()const
{
	return result_;
}

