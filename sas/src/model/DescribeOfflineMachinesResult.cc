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

#include <alibabacloud/sas/model/DescribeOfflineMachinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeOfflineMachinesResult::DescribeOfflineMachinesResult() :
	ServiceResult()
{}

DescribeOfflineMachinesResult::DescribeOfflineMachinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOfflineMachinesResult::~DescribeOfflineMachinesResult()
{}

void DescribeOfflineMachinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMachineListNode = value["MachineList"]["Machine"];
	for (auto valueMachineListMachine : allMachineListNode)
	{
		Machine machineListObject;
		if(!valueMachineListMachine["Uuid"].isNull())
			machineListObject.uuid = valueMachineListMachine["Uuid"].asString();
		if(!valueMachineListMachine["MachineRegion"].isNull())
			machineListObject.machineRegion = valueMachineListMachine["MachineRegion"].asString();
		if(!valueMachineListMachine["InternetIp"].isNull())
			machineListObject.internetIp = valueMachineListMachine["InternetIp"].asString();
		if(!valueMachineListMachine["VendorName"].isNull())
			machineListObject.vendorName = valueMachineListMachine["VendorName"].asString();
		if(!valueMachineListMachine["InstanceName"].isNull())
			machineListObject.instanceName = valueMachineListMachine["InstanceName"].asString();
		if(!valueMachineListMachine["Os"].isNull())
			machineListObject.os = valueMachineListMachine["Os"].asString();
		if(!valueMachineListMachine["InstanceId"].isNull())
			machineListObject.instanceId = valueMachineListMachine["InstanceId"].asString();
		if(!valueMachineListMachine["IntranetIp"].isNull())
			machineListObject.intranetIp = valueMachineListMachine["IntranetIp"].asString();
		if(!valueMachineListMachine["Vendor"].isNull())
			machineListObject.vendor = std::stoi(valueMachineListMachine["Vendor"].asString());
		if(!valueMachineListMachine["RegionId"].isNull())
			machineListObject.regionId = valueMachineListMachine["RegionId"].asString();
		machineList_.push_back(machineListObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeOfflineMachinesResult::Machine> DescribeOfflineMachinesResult::getMachineList()const
{
	return machineList_;
}

int DescribeOfflineMachinesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeOfflineMachinesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeOfflineMachinesResult::getCurrentPage()const
{
	return currentPage_;
}

