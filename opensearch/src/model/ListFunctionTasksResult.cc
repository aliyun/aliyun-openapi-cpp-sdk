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

#include <alibabacloud/opensearch/model/ListFunctionTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OpenSearch;
using namespace AlibabaCloud::OpenSearch::Model;

ListFunctionTasksResult::ListFunctionTasksResult() :
	ServiceResult()
{}

ListFunctionTasksResult::ListFunctionTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFunctionTasksResult::~ListFunctionTasksResult()
{}

void ListFunctionTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["EndTime"].isNull())
			resultObject.endTime = std::stol(valueResultResultItem["EndTime"].asString());
		if(!valueResultResultItem["ExtendInfo"].isNull())
			resultObject.extendInfo = valueResultResultItem["ExtendInfo"].asString();
		if(!valueResultResultItem["FunctionName"].isNull())
			resultObject.functionName = valueResultResultItem["FunctionName"].asString();
		if(!valueResultResultItem["Progress"].isNull())
			resultObject.progress = std::stol(valueResultResultItem["Progress"].asString());
		if(!valueResultResultItem["RunId"].isNull())
			resultObject.runId = valueResultResultItem["RunId"].asString();
		if(!valueResultResultItem["StartTime"].isNull())
			resultObject.startTime = std::stol(valueResultResultItem["StartTime"].asString());
		if(!valueResultResultItem["Status"].isNull())
			resultObject.status = valueResultResultItem["Status"].asString();
		if(!valueResultResultItem["Generation"].isNull())
			resultObject.generation = valueResultResultItem["Generation"].asString();
		result_.push_back(resultObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = std::stol(value["HttpCode"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Latency"].isNull())
		latency_ = std::stol(value["Latency"].asString());

}

std::string ListFunctionTasksResult::getStatus()const
{
	return status_;
}

long ListFunctionTasksResult::getHttpCode()const
{
	return httpCode_;
}

long ListFunctionTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListFunctionTasksResult::getMessage()const
{
	return message_;
}

std::string ListFunctionTasksResult::getCode()const
{
	return code_;
}

std::vector<ListFunctionTasksResult::ResultItem> ListFunctionTasksResult::getResult()const
{
	return result_;
}

long ListFunctionTasksResult::getLatency()const
{
	return latency_;
}

