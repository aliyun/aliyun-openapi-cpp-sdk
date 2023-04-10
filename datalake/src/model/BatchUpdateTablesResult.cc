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

#include <alibabacloud/datalake/model/BatchUpdateTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

BatchUpdateTablesResult::BatchUpdateTablesResult() :
	ServiceResult()
{}

BatchUpdateTablesResult::BatchUpdateTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchUpdateTablesResult::~BatchUpdateTablesResult()
{}

void BatchUpdateTablesResult::parse(const std::string &payload)
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
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string BatchUpdateTablesResult::getTaskId()const
{
	return taskId_;
}

std::string BatchUpdateTablesResult::getMessage()const
{
	return message_;
}

std::vector<BatchUpdateTablesResult::TableError> BatchUpdateTablesResult::getTableErrors()const
{
	return tableErrors_;
}

std::string BatchUpdateTablesResult::getCode()const
{
	return code_;
}

bool BatchUpdateTablesResult::getSuccess()const
{
	return success_;
}

