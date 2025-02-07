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

#include <alibabacloud/wss/model/DescribePackageDeductionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Wss;
using namespace AlibabaCloud::Wss::Model;

DescribePackageDeductionsResult::DescribePackageDeductionsResult() :
	ServiceResult()
{}

DescribePackageDeductionsResult::DescribePackageDeductionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePackageDeductionsResult::~DescribePackageDeductionsResult()
{}

void DescribePackageDeductionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDeductionsNode = value["Deductions"]["deduction"];
	for (auto valueDeductionsdeduction : allDeductionsNode)
	{
		Deduction deductionsObject;
		if(!valueDeductionsdeduction["DesktopName"].isNull())
			deductionsObject.desktopName = valueDeductionsdeduction["DesktopName"].asString();
		if(!valueDeductionsdeduction["DesktopId"].isNull())
			deductionsObject.desktopId = valueDeductionsdeduction["DesktopId"].asString();
		if(!valueDeductionsdeduction["RegionId"].isNull())
			deductionsObject.regionId = valueDeductionsdeduction["RegionId"].asString();
		if(!valueDeductionsdeduction["DesktopType"].isNull())
			deductionsObject.desktopType = valueDeductionsdeduction["DesktopType"].asString();
		if(!valueDeductionsdeduction["OsType"].isNull())
			deductionsObject.osType = valueDeductionsdeduction["OsType"].asString();
		if(!valueDeductionsdeduction["StaTime"].isNull())
			deductionsObject.staTime = valueDeductionsdeduction["StaTime"].asString();
		if(!valueDeductionsdeduction["EndTime"].isNull())
			deductionsObject.endTime = valueDeductionsdeduction["EndTime"].asString();
		if(!valueDeductionsdeduction["ResourceType"].isNull())
			deductionsObject.resourceType = valueDeductionsdeduction["ResourceType"].asString();
		if(!valueDeductionsdeduction["UsedTime"].isNull())
			deductionsObject.usedTime = std::stol(valueDeductionsdeduction["UsedTime"].asString());
		if(!valueDeductionsdeduction["UsedCoreTime"].isNull())
			deductionsObject.usedCoreTime = std::stof(valueDeductionsdeduction["UsedCoreTime"].asString());
		if(!valueDeductionsdeduction["InstanceState"].isNull())
			deductionsObject.instanceState = valueDeductionsdeduction["InstanceState"].asString();
		if(!valueDeductionsdeduction["Memory"].isNull())
			deductionsObject.memory = std::stol(valueDeductionsdeduction["Memory"].asString());
		if(!valueDeductionsdeduction["Cpu"].isNull())
			deductionsObject.cpu = std::stoi(valueDeductionsdeduction["Cpu"].asString());
		if(!valueDeductionsdeduction["Gpu"].isNull())
			deductionsObject.gpu = valueDeductionsdeduction["Gpu"].asString();
		deductions_.push_back(deductionsObject);
	}
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["TotalUsedTime"].isNull())
		totalUsedTime_ = std::stol(value["TotalUsedTime"].asString());
	if(!value["TotalUsedCoreTime"].isNull())
		totalUsedCoreTime_ = std::stof(value["TotalUsedCoreTime"].asString());

}

long DescribePackageDeductionsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribePackageDeductionsResult::getPageNum()const
{
	return pageNum_;
}

int DescribePackageDeductionsResult::getPageSize()const
{
	return pageSize_;
}

long DescribePackageDeductionsResult::getTotalUsedTime()const
{
	return totalUsedTime_;
}

std::vector<DescribePackageDeductionsResult::Deduction> DescribePackageDeductionsResult::getDeductions()const
{
	return deductions_;
}

float DescribePackageDeductionsResult::getTotalUsedCoreTime()const
{
	return totalUsedCoreTime_;
}

