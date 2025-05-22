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

#include <alibabacloud/rds/model/DescribeModifyParameterLogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeModifyParameterLogResult::DescribeModifyParameterLogResult() :
	ServiceResult()
{}

DescribeModifyParameterLogResult::DescribeModifyParameterLogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeModifyParameterLogResult::~DescribeModifyParameterLogResult()
{}

void DescribeModifyParameterLogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ParameterChangeLog"];
	for (auto valueItemsParameterChangeLog : allItemsNode)
	{
		ParameterChangeLog itemsObject;
		if(!valueItemsParameterChangeLog["ModifyTime"].isNull())
			itemsObject.modifyTime = valueItemsParameterChangeLog["ModifyTime"].asString();
		if(!valueItemsParameterChangeLog["NewParameterValue"].isNull())
			itemsObject.newParameterValue = valueItemsParameterChangeLog["NewParameterValue"].asString();
		if(!valueItemsParameterChangeLog["OldParameterValue"].isNull())
			itemsObject.oldParameterValue = valueItemsParameterChangeLog["OldParameterValue"].asString();
		if(!valueItemsParameterChangeLog["ParameterName"].isNull())
			itemsObject.parameterName = valueItemsParameterChangeLog["ParameterName"].asString();
		if(!valueItemsParameterChangeLog["Status"].isNull())
			itemsObject.status = valueItemsParameterChangeLog["Status"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeModifyParameterLogResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeModifyParameterLogResult::getEngineVersion()const
{
	return engineVersion_;
}

int DescribeModifyParameterLogResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeModifyParameterLogResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeModifyParameterLogResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeModifyParameterLogResult::ParameterChangeLog> DescribeModifyParameterLogResult::getItems()const
{
	return items_;
}

std::string DescribeModifyParameterLogResult::getEngine()const
{
	return engine_;
}

