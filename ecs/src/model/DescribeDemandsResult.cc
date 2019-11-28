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
	auto allDemandsNode = value["Demands"]["Demand"];
	for (auto valueDemandsDemand : allDemandsNode)
	{
		Demand demandsObject;
		if(!valueDemandsDemand["ZoneId"].isNull())
			demandsObject.zoneId = valueDemandsDemand["ZoneId"].asString();
		if(!valueDemandsDemand["DemandTime"].isNull())
			demandsObject.demandTime = valueDemandsDemand["DemandTime"].asString();
		if(!valueDemandsDemand["InstanceTypeFamily"].isNull())
			demandsObject.instanceTypeFamily = valueDemandsDemand["InstanceTypeFamily"].asString();
		if(!valueDemandsDemand["DemandId"].isNull())
			demandsObject.demandId = valueDemandsDemand["DemandId"].asString();
		if(!valueDemandsDemand["DemandName"].isNull())
			demandsObject.demandName = valueDemandsDemand["DemandName"].asString();
		if(!valueDemandsDemand["Comment"].isNull())
			demandsObject.comment = valueDemandsDemand["Comment"].asString();
		if(!valueDemandsDemand["DemandDescription"].isNull())
			demandsObject.demandDescription = valueDemandsDemand["DemandDescription"].asString();
		if(!valueDemandsDemand["InstanceType"].isNull())
			demandsObject.instanceType = valueDemandsDemand["InstanceType"].asString();
		if(!valueDemandsDemand["InstanceChargeType"].isNull())
			demandsObject.instanceChargeType = valueDemandsDemand["InstanceChargeType"].asString();
		if(!valueDemandsDemand["Period"].isNull())
			demandsObject.period = std::stoi(valueDemandsDemand["Period"].asString());
		if(!valueDemandsDemand["PeriodUnit"].isNull())
			demandsObject.periodUnit = valueDemandsDemand["PeriodUnit"].asString();
		if(!valueDemandsDemand["StartTime"].isNull())
			demandsObject.startTime = valueDemandsDemand["StartTime"].asString();
		if(!valueDemandsDemand["EndTime"].isNull())
			demandsObject.endTime = valueDemandsDemand["EndTime"].asString();
		if(!valueDemandsDemand["DemandStatus"].isNull())
			demandsObject.demandStatus = valueDemandsDemand["DemandStatus"].asString();
		if(!valueDemandsDemand["TotalAmount"].isNull())
			demandsObject.totalAmount = std::stoi(valueDemandsDemand["TotalAmount"].asString());
		if(!valueDemandsDemand["AvailableAmount"].isNull())
			demandsObject.availableAmount = std::stoi(valueDemandsDemand["AvailableAmount"].asString());
		if(!valueDemandsDemand["UsedAmount"].isNull())
			demandsObject.usedAmount = std::stoi(valueDemandsDemand["UsedAmount"].asString());
		if(!valueDemandsDemand["DeliveringAmount"].isNull())
			demandsObject.deliveringAmount = std::stoi(valueDemandsDemand["DeliveringAmount"].asString());
		auto allSupplyInfosNode = allDemandsNode["SupplyInfos"]["SupplyInfo"];
		for (auto allDemandsNodeSupplyInfosSupplyInfo : allSupplyInfosNode)
		{
			Demand::SupplyInfo supplyInfosObject;
			if(!allDemandsNodeSupplyInfosSupplyInfo["Amount"].isNull())
				supplyInfosObject.amount = std::stoi(allDemandsNodeSupplyInfosSupplyInfo["Amount"].asString());
			if(!allDemandsNodeSupplyInfosSupplyInfo["SupplyStatus"].isNull())
				supplyInfosObject.supplyStatus = allDemandsNodeSupplyInfosSupplyInfo["SupplyStatus"].asString();
			if(!allDemandsNodeSupplyInfosSupplyInfo["SupplyStartTime"].isNull())
				supplyInfosObject.supplyStartTime = allDemandsNodeSupplyInfosSupplyInfo["SupplyStartTime"].asString();
			if(!allDemandsNodeSupplyInfosSupplyInfo["SupplyEndTime"].isNull())
				supplyInfosObject.supplyEndTime = allDemandsNodeSupplyInfosSupplyInfo["SupplyEndTime"].asString();
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

