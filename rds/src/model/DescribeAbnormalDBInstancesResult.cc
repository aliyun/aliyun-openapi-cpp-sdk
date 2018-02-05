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
		InstanceResult itemsObject;
		if(!value["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		auto allAbnormalItems = value["AbnormalItems"]["AbnormalItem"];
		for (auto value : allAbnormalItems)
		{
			InstanceResult::AbnormalItem abnormalItemsObject;
			if(!value["CheckTime"].isNull())
				abnormalItemsObject.checkTime = value["CheckTime"].asString();
			if(!value["CheckItem"].isNull())
				abnormalItemsObject.checkItem = value["CheckItem"].asString();
			if(!value["AbnormalReason"].isNull())
				abnormalItemsObject.abnormalReason = value["AbnormalReason"].asString();
			if(!value["AbnormalValue"].isNull())
				abnormalItemsObject.abnormalValue = value["AbnormalValue"].asString();
			if(!value["AbnormalDetail"].isNull())
				abnormalItemsObject.abnormalDetail = value["AbnormalDetail"].asString();
			if(!value["AdviceKey"].isNull())
				abnormalItemsObject.adviceKey = value["AdviceKey"].asString();
			auto allAdviseValue = value["AdviseValue"]["String"];
			for (auto value : allAdviseValue)
				abnormalItemsObject.adviseValue.push_back(value.asString());
			itemsObject.abnormalItems.push_back(abnormalItemsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeAbnormalDBInstancesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeAbnormalDBInstancesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeAbnormalDBInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAbnormalDBInstancesResult::InstanceResult> DescribeAbnormalDBInstancesResult::getItems()const
{
	return items_;
}

