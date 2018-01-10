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

#include <alibabacloud/rds/model/DescribeAbnormalDBInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeAbnormalDBInstancesResult::DescribeAbnormalDBInstancesResult() :
	ServiceResult()
{}

DescribeAbnormalDBInstancesResult::DescribeAbnormalDBInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAbnormalDBInstancesResult::~DescribeAbnormalDBInstancesResult()
{}

void DescribeAbnormalDBInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["InstanceResult"];
	for (auto value : allItems)
	{
		InstanceResult instanceResultObject;
		instanceResultObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		instanceResultObject.dBInstanceId = value["DBInstanceId"].asString();
		auto allAbnormalItems = value["AbnormalItems"]["AbnormalItem"];
		for (auto value : allAbnormalItems)
		{
			InstanceResult::AbnormalItem abnormalItemObject;
			abnormalItemObject.checkTime = value["CheckTime"].asString();
			abnormalItemObject.checkItem = value["CheckItem"].asString();
			abnormalItemObject.abnormalReason = value["AbnormalReason"].asString();
			abnormalItemObject.abnormalValue = value["AbnormalValue"].asString();
			abnormalItemObject.abnormalDetail = value["AbnormalDetail"].asString();
			abnormalItemObject.adviceKey = value["AdviceKey"].asString();
			auto allAdviseValue = value["AdviseValue"]["String"];
			for (auto value : allAdviseValue)
				abnormalItemObject.adviseValue.push_back(value.asString());
			instanceResultObject.abnormalItems.push_back(abnormalItemObject);
		}
		items_.push_back(instanceResultObject);
	}
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeAbnormalDBInstancesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeAbnormalDBInstancesResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeAbnormalDBInstancesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeAbnormalDBInstancesResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeAbnormalDBInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAbnormalDBInstancesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

