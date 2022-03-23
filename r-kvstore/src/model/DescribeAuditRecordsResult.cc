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

#include <alibabacloud/r-kvstore/model/DescribeAuditRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeAuditRecordsResult::DescribeAuditRecordsResult() :
	ServiceResult()
{}

DescribeAuditRecordsResult::DescribeAuditRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditRecordsResult::~DescribeAuditRecordsResult()
{}

void DescribeAuditRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SQL"];
	for (auto valueItemsSQL : allItemsNode)
	{
		SQL itemsObject;
		if(!valueItemsSQL["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsSQL["HostAddress"].asString();
		if(!valueItemsSQL["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSQL["SQLText"].asString();
		if(!valueItemsSQL["DatabaseName"].isNull())
			itemsObject.databaseName = valueItemsSQL["DatabaseName"].asString();
		if(!valueItemsSQL["SQLType"].isNull())
			itemsObject.sQLType = valueItemsSQL["SQLType"].asString();
		if(!valueItemsSQL["ExecuteTime"].isNull())
			itemsObject.executeTime = valueItemsSQL["ExecuteTime"].asString();
		if(!valueItemsSQL["TotalExecutionTimes"].isNull())
			itemsObject.totalExecutionTimes = valueItemsSQL["TotalExecutionTimes"].asString();
		if(!valueItemsSQL["NodeId"].isNull())
			itemsObject.nodeId = valueItemsSQL["NodeId"].asString();
		if(!valueItemsSQL["AccountName"].isNull())
			itemsObject.accountName = valueItemsSQL["AccountName"].asString();
		if(!valueItemsSQL["IPAddress"].isNull())
			itemsObject.iPAddress = valueItemsSQL["IPAddress"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::string DescribeAuditRecordsResult::getInstanceName()const
{
	return instanceName_;
}

int DescribeAuditRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeAuditRecordsResult::getEndTime()const
{
	return endTime_;
}

int DescribeAuditRecordsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAuditRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeAuditRecordsResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeAuditRecordsResult::SQL> DescribeAuditRecordsResult::getItems()const
{
	return items_;
}

