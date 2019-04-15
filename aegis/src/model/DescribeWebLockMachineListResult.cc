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

#include <alibabacloud/aegis/model/DescribeWebLockMachineListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWebLockMachineListResult::DescribeWebLockMachineListResult() :
	ServiceResult()
{}

DescribeWebLockMachineListResult::DescribeWebLockMachineListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebLockMachineListResult::~DescribeWebLockMachineListResult()
{}

void DescribeWebLockMachineListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allMachineList = value["MachineList"]["MachineInfo"];
	for (auto value : allMachineList)
	{
		MachineInfo machineListObject;
		if(!value["Uuid"].isNull())
			machineListObject.uuid = value["Uuid"].asString();
		if(!value["InternetIp"].isNull())
			machineListObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			machineListObject.intranetIp = value["IntranetIp"].asString();
		if(!value["InstanceId"].isNull())
			machineListObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			machineListObject.instanceName = value["InstanceName"].asString();
		if(!value["Status"].isNull())
			machineListObject.status = value["Status"].asString();
		machineList_.push_back(machineListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeWebLockMachineListResult::MachineInfo> DescribeWebLockMachineListResult::getMachineList()const
{
	return machineList_;
}

int DescribeWebLockMachineListResult::getTotalCount()const
{
	return totalCount_;
}

