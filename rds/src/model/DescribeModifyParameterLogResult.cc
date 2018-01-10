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
	auto allItems = value["Items"]["ParameterChangeLog"];
	for (auto value : allItems)
	{
		ParameterChangeLog parameterChangeLogObject;
		parameterChangeLogObject.modifyTime = value["ModifyTime"].asString();
		parameterChangeLogObject.oldParameterValue = value["OldParameterValue"].asString();
		parameterChangeLogObject.newParameterValue = value["NewParameterValue"].asString();
		parameterChangeLogObject.parameterName = value["ParameterName"].asString();
		parameterChangeLogObject.status = value["Status"].asString();
		items_.push_back(parameterChangeLogObject);
	}
	engine_ = value["Engine"].asString();
	dBInstanceId_ = value["DBInstanceId"].asString();
	engineVersion_ = value["EngineVersion"].asString();
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeModifyParameterLogResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeModifyParameterLogResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

std::string DescribeModifyParameterLogResult::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeModifyParameterLogResult::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
}

int DescribeModifyParameterLogResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeModifyParameterLogResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

std::string DescribeModifyParameterLogResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeModifyParameterLogResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

int DescribeModifyParameterLogResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeModifyParameterLogResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeModifyParameterLogResult::getEngine()const
{
	return engine_;
}

void DescribeModifyParameterLogResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

