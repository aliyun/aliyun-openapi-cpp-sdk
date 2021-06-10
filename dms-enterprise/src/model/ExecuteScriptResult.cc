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

#include <alibabacloud/dms-enterprise/model/ExecuteScriptResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ExecuteScriptResult::ExecuteScriptResult() :
	ServiceResult()
{}

ExecuteScriptResult::ExecuteScriptResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ExecuteScriptResult::~ExecuteScriptResult()
{}

void ExecuteScriptResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultsNode = value["Results"]["Result"];
	for (auto valueResultsResult : allResultsNode)
	{
		Result resultsObject;
		if(!valueResultsResult["Success"].isNull())
			resultsObject.success = valueResultsResult["Success"].asString() == "true";
		if(!valueResultsResult["Message"].isNull())
			resultsObject.message = valueResultsResult["Message"].asString();
		if(!valueResultsResult["RowCount"].isNull())
			resultsObject.rowCount = std::stol(valueResultsResult["RowCount"].asString());
		auto allColumnNames = value["ColumnNames"]["ColumnNames"];
		for (auto value : allColumnNames)
			resultsObject.columnNames.push_back(value.asString());
		auto allRows = value["Rows"]["Rows"];
		for (auto value : allRows)
			resultsObject.rows.push_back(value.asString());
		results_.push_back(resultsObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ExecuteScriptResult::Result> ExecuteScriptResult::getResults()const
{
	return results_;
}

std::string ExecuteScriptResult::getErrorCode()const
{
	return errorCode_;
}

std::string ExecuteScriptResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ExecuteScriptResult::getSuccess()const
{
	return success_;
}

