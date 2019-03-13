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

#include <alibabacloud/ecs/model/DescribeDemandsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDemandsResult::DescribeDemandsResult() :
	ServiceResult()
{}

DescribeDemandsResult::DescribeDemandsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDemandsResult::~DescribeDemandsResult()
{}

void DescribeDemandsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDemands = value["Demands"]["Demand"];
	for (auto value : allDemands)
	{
		Demand demandsObject;
		if(!value["ZoneId"].isNull())
			demandsObject.zoneId = value["ZoneId"].asString();
		if(!value["DemandTime"].isNull())
			demandsObject.demandTime = value["DemandTime"].asString();
		if(!value["InstanceTypeFamily"].isNull())
			demandsObject.instanceTypeFamily = value["InstanceTypeFamily"].asString();
		if(!value["InstanceType"].isNull())
			demandsObject.instanceType = value["InstanceType"].asString();
		if(!value["InstanceChargeType"].isNull())
			demandsObject.instanceChargeType = value["InstanceChargeType"].asString();
		if(!value["Period"].isNull())
			demandsObject.period = std::stoi(value["Period"].asString());
		if(!value["PeriodUnit"].isNull())
			demandsObject.periodUnit = value["PeriodUnit"].asString();
		if(!value["StartTime"].isNull())
			demandsObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			demandsObject.endTime = value["EndTime"].asString();
		if(!value["DemandStatus"].isNull())
			demandsObject.demandStatus = value["DemandStatus"].asString();
		if(!value["TotalAmount"].isNull())
			demandsObject.totalAmount = std::stoi(value["TotalAmount"].asString());
		if(!value["AvailableAmount"].isNull())
			demandsObject.availableAmount = std::stoi(value["AvailableAmount"].asString());
		if(!value["UsedAmount"].isNull())
			demandsObject.usedAmount = std::stoi(value["UsedAmount"].asString());
		if(!value["DeliveringAmount"].isNull())
			demandsObject.deliveringAmount = std::stoi(value["DeliveringAmount"].asString());
		auto allSupplyInfos = value["SupplyInfos"]["SupplyInfo"];
		for (auto value : allSupplyInfos)
		{
			Demand::SupplyInfo supplyInfosObject;
			if(!value["Amount"].isNull())
				supplyInfosObject.amount = std::stoi(value["Amount"].asString());
			if(!value["SupplyStatus"].isNull())
				supplyInfosObject.supplyStatus = value["SupplyStatus"].asString();
			if(!value["SupplyStartTime"].isNull())
				supplyInfosObject.supplyStartTime = value["SupplyStartTime"].asString();
			if(!value["SupplyEndTime"].isNull())
				supplyInfosObject.supplyEndTime = value["SupplyEndTime"].asString();
			demandsObject.supplyInfos.push_back(supplyInfosObject);
		}
		demands_.push_back(demandsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

int DescribeDemandsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDemandsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDemandsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDemandsResult::Demand> DescribeDemandsResult::getDemands()const
{
	return demands_;
}

std::string DescribeDemandsResult::getRegionId()const
{
	return regionId_;
}

