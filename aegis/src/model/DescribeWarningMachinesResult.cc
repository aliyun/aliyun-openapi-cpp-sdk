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

#include <alibabacloud/aegis/model/DescribeWarningMachinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeWarningMachinesResult::DescribeWarningMachinesResult() :
	ServiceResult()
{}

DescribeWarningMachinesResult::DescribeWarningMachinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWarningMachinesResult::~DescribeWarningMachinesResult()
{}

void DescribeWarningMachinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWarningMachinesNode = value["WarningMachines"]["WarningMachine"];
	for (auto valueWarningMachinesWarningMachine : allWarningMachinesNode)
	{
		WarningMachine warningMachinesObject;
		if(!valueWarningMachinesWarningMachine["Uuid"].isNull())
			warningMachinesObject.uuid = valueWarningMachinesWarningMachine["Uuid"].asString();
		if(!valueWarningMachinesWarningMachine["MachineName"].isNull())
			warningMachinesObject.machineName = valueWarningMachinesWarningMachine["MachineName"].asString();
		if(!valueWarningMachinesWarningMachine["InternetIp"].isNull())
			warningMachinesObject.internetIp = valueWarningMachinesWarningMachine["InternetIp"].asString();
		if(!valueWarningMachinesWarningMachine["IntranetIp"].isNull())
			warningMachinesObject.intranetIp = valueWarningMachinesWarningMachine["IntranetIp"].asString();
		if(!valueWarningMachinesWarningMachine["PassCount"].isNull())
			warningMachinesObject.passCount = std::stoi(valueWarningMachinesWarningMachine["PassCount"].asString());
		if(!valueWarningMachinesWarningMachine["HighWarningCount"].isNull())
			warningMachinesObject.highWarningCount = std::stoi(valueWarningMachinesWarningMachine["HighWarningCount"].asString());
		if(!valueWarningMachinesWarningMachine["MediumWarningCount"].isNull())
			warningMachinesObject.mediumWarningCount = std::stoi(valueWarningMachinesWarningMachine["MediumWarningCount"].asString());
		if(!valueWarningMachinesWarningMachine["LowWarningCount"].isNull())
			warningMachinesObject.lowWarningCount = std::stoi(valueWarningMachinesWarningMachine["LowWarningCount"].asString());
		if(!valueWarningMachinesWarningMachine["Status"].isNull())
			warningMachinesObject.status = std::stoi(valueWarningMachinesWarningMachine["Status"].asString());
		warningMachines_.push_back(warningMachinesObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeWarningMachinesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWarningMachinesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWarningMachinesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWarningMachinesResult::WarningMachine> DescribeWarningMachinesResult::getWarningMachines()const
{
	return warningMachines_;
}

int DescribeWarningMachinesResult::getCount()const
{
	return count_;
}

