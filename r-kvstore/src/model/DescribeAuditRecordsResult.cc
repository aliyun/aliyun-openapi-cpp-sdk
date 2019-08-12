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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["SQL"];
	for (auto value : allItems)
	{
		SQL itemsObject;
		if(!value["HostAddress"].isNull())
			itemsObject.hostAddress = std::stoi(value["HostAddress"].asString());
		if(!value["DatabaseName"].isNull())
			itemsObject.databaseName = value["DatabaseName"].asString();
		if(!value["IPAddress"].isNull())
			itemsObject.iPAddress = value["IPAddress"].asString();
		if(!value["SQLText"].isNull())
			itemsObject.sQLText = value["SQLText"].asString();
		if(!value["SQLType"].isNull())
			itemsObject.sQLType = value["SQLType"].asString();
		if(!value["TotalExecutionTimes"].isNull())
			itemsObject.totalExecutionTimes = value["TotalExecutionTimes"].asString();
		if(!value["ExecuteTime"].isNull())
			itemsObject.executeTime = value["ExecuteTime"].asString();
		if(!value["AccountName"].isNull())
			itemsObject.accountName = value["AccountName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["InstanceName"].isNull())
		instanceName_ = value["InstanceName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();

}

int DescribeAuditRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeAuditRecordsResult::getInstanceName()const
{
	return instanceName_;
}

int DescribeAuditRecordsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeAuditRecordsResult::getEndTime()const
{
	return endTime_;
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

