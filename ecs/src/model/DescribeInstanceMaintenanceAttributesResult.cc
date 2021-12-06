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

#include <alibabacloud/ecs/model/DescribeInstanceMaintenanceAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceMaintenanceAttributesResult::DescribeInstanceMaintenanceAttributesResult() :
	ServiceResult()
{}

DescribeInstanceMaintenanceAttributesResult::DescribeInstanceMaintenanceAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceMaintenanceAttributesResult::~DescribeInstanceMaintenanceAttributesResult()
{}

void DescribeInstanceMaintenanceAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMaintenanceAttributesNode = value["MaintenanceAttributes"]["MaintenanceAttribute"];
	for (auto valueMaintenanceAttributesMaintenanceAttribute : allMaintenanceAttributesNode)
	{
		MaintenanceAttribute maintenanceAttributesObject;
		if(!valueMaintenanceAttributesMaintenanceAttribute["NotifyOnMaintenance"].isNull())
			maintenanceAttributesObject.notifyOnMaintenance = valueMaintenanceAttributesMaintenanceAttribute["NotifyOnMaintenance"].asString() == "true";
		if(!valueMaintenanceAttributesMaintenanceAttribute["InstanceId"].isNull())
			maintenanceAttributesObject.instanceId = valueMaintenanceAttributesMaintenanceAttribute["InstanceId"].asString();
		auto allMaintenanceWindowsNode = valueMaintenanceAttributesMaintenanceAttribute["MaintenanceWindows"]["MaintenanceWindow"];
		for (auto valueMaintenanceAttributesMaintenanceAttributeMaintenanceWindowsMaintenanceWindow : allMaintenanceWindowsNode)
		{
			MaintenanceAttribute::MaintenanceWindow maintenanceWindowsObject;
			if(!valueMaintenanceAttributesMaintenanceAttributeMaintenanceWindowsMaintenanceWindow["EndTime"].isNull())
				maintenanceWindowsObject.endTime = valueMaintenanceAttributesMaintenanceAttributeMaintenanceWindowsMaintenanceWindow["EndTime"].asString();
			if(!valueMaintenanceAttributesMaintenanceAttributeMaintenanceWindowsMaintenanceWindow["StartTime"].isNull())
				maintenanceWindowsObject.startTime = valueMaintenanceAttributesMaintenanceAttributeMaintenanceWindowsMaintenanceWindow["StartTime"].asString();
			maintenanceAttributesObject.maintenanceWindows.push_back(maintenanceWindowsObject);
		}
		auto actionOnMaintenanceNode = value["ActionOnMaintenance"];
		if(!actionOnMaintenanceNode["DefaultValue"].isNull())
			maintenanceAttributesObject.actionOnMaintenance.defaultValue = actionOnMaintenanceNode["DefaultValue"].asString();
		if(!actionOnMaintenanceNode["Value"].isNull())
			maintenanceAttributesObject.actionOnMaintenance.value = actionOnMaintenanceNode["Value"].asString();
			auto allSupportedValues = actionOnMaintenanceNode["SupportedValues"]["SupportedValue"];
			for (auto value : allSupportedValues)
				maintenanceAttributesObject.actionOnMaintenance.supportedValues.push_back(value.asString());
		maintenanceAttributes_.push_back(maintenanceAttributesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInstanceMaintenanceAttributesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstanceMaintenanceAttributesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstanceMaintenanceAttributesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstanceMaintenanceAttributesResult::MaintenanceAttribute> DescribeInstanceMaintenanceAttributesResult::getMaintenanceAttributes()const
{
	return maintenanceAttributes_;
}

