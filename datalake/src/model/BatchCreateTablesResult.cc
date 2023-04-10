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

#include <alibabacloud/datalake/model/BatchCreateTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

BatchCreateTablesResult::BatchCreateTablesResult() :
	ServiceResult()
{}

BatchCreateTablesResult::BatchCreateTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchCreateTablesResult::~BatchCreateTablesResult()
{}

void BatchCreateTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTableErrorsNode = value["TableErrors"]["TableError"];
	for (auto valueTableErrorsTableError : allTableErrorsNode)
	{
		TableError tableErrorsObject;
		if(!valueTableErrorsTableError["TableName"].isNull())
			tableErrorsObject.tableName = valueTableErrorsTableError["TableName"].asString();
		auto errorDetailNode = value["ErrorDetail"];
		if(!errorDetailNode["Code"].isNull())
			tableErrorsObject.errorDetail.code = errorDetailNode["Code"].asString();
		if(!errorDetailNode["Message"].isNull())
			tableErrorsObject.errorDetail.message = errorDetailNode["Message"].asString();
		tableErrors_.push_back(tableErrorsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string BatchCreateTablesResult::getMessage()const
{
	return message_;
}

std::vector<BatchCreateTablesResult::TableError> BatchCreateTablesResult::getTableErrors()const
{
	return tableErrors_;
}

std::string BatchCreateTablesResult::getCode()const
{
	return code_;
}

bool BatchCreateTablesResult::getSuccess()const
{
	return success_;
}

