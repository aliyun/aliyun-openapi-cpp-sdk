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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["ParameterChangeLog"];
	for (auto value : allItems)
	{
		ParameterChangeLog itemsObject;
		if(!value["ModifyTime"].isNull())
			itemsObject.modifyTime = value["ModifyTime"].asString();
		if(!value["OldParameterValue"].isNull())
			itemsObject.oldParameterValue = value["OldParameterValue"].asString();
		if(!value["NewParameterValue"].isNull())
			itemsObject.newParameterValue = value["NewParameterValue"].asString();
		if(!value["ParameterName"].isNull())
			itemsObject.parameterName = value["ParameterName"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

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

