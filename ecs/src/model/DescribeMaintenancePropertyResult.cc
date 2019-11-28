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

#include <alibabacloud/ecs/model/DescribeMaintenancePropertyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeMaintenancePropertyResult::DescribeMaintenancePropertyResult() :
	ServiceResult()
{}

DescribeMaintenancePropertyResult::DescribeMaintenancePropertyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMaintenancePropertyResult::~DescribeMaintenancePropertyResult()
{}

void DescribeMaintenancePropertyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMaintenancePropertySetNode = value["MaintenancePropertySet"]["MaintenanceProperty"];
	for (auto valueMaintenancePropertySetMaintenanceProperty : allMaintenancePropertySetNode)
	{
		MaintenanceProperty maintenancePropertySetObject;
		if(!valueMaintenancePropertySetMaintenanceProperty["InstanceId"].isNull())
			maintenancePropertySetObject.instanceId = valueMaintenancePropertySetMaintenanceProperty["InstanceId"].asString();
		if(!valueMaintenancePropertySetMaintenanceProperty["StartTime"].isNull())
			maintenancePropertySetObject.startTime = valueMaintenancePropertySetMaintenanceProperty["StartTime"].asString();
		if(!valueMaintenancePropertySetMaintenanceProperty["EndTime"].isNull())
			maintenancePropertySetObject.endTime = valueMaintenancePropertySetMaintenanceProperty["EndTime"].asString();
		if(!valueMaintenancePropertySetMaintenanceProperty["ActionOnMaintenance"].isNull())
			maintenancePropertySetObject.actionOnMaintenance = valueMaintenancePropertySetMaintenanceProperty["ActionOnMaintenance"].asString();
		maintenancePropertySet_.push_back(maintenancePropertySetObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeMaintenancePropertyResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeMaintenancePropertyResult::getPageSize()const
{
	return pageSize_;
}

int DescribeMaintenancePropertyResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeMaintenancePropertyResult::MaintenanceProperty> DescribeMaintenancePropertyResult::getMaintenancePropertySet()const
{
	return maintenancePropertySet_;
}

