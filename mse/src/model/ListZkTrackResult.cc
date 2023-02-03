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

#include <alibabacloud/mse/model/ListZkTrackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListZkTrackResult::ListZkTrackResult() :
	ServiceResult()
{}

ListZkTrackResult::ListZkTrackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListZkTrackResult::~ListZkTrackResult()
{}

void ListZkTrackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTracesNode = value["Traces"]["Trace"];
	for (auto valueTracesTrace : allTracesNode)
	{
		Trace tracesObject;
		if(!valueTracesTrace["LogDate"].isNull())
			tracesObject.logDate = valueTracesTrace["LogDate"].asString();
		if(!valueTracesTrace["Timestamp"].isNull())
			tracesObject.timestamp = valueTracesTrace["Timestamp"].asString();
		if(!valueTracesTrace["SessionId"].isNull())
			tracesObject.sessionId = valueTracesTrace["SessionId"].asString();
		if(!valueTracesTrace["Path"].isNull())
			tracesObject.path = valueTracesTrace["Path"].asString();
		if(!valueTracesTrace["TraceType"].isNull())
			tracesObject.traceType = valueTracesTrace["TraceType"].asString();
		if(!valueTracesTrace["OpType"].isNull())
			tracesObject.opType = valueTracesTrace["OpType"].asString();
		if(!valueTracesTrace["EventType"].isNull())
			tracesObject.eventType = valueTracesTrace["EventType"].asString();
		if(!valueTracesTrace["DataType"].isNull())
			tracesObject.dataType = valueTracesTrace["DataType"].asString();
		if(!valueTracesTrace["Watch"].isNull())
			tracesObject.watch = valueTracesTrace["Watch"].asString() == "true";
		if(!valueTracesTrace["Acl"].isNull())
			tracesObject.acl = valueTracesTrace["Acl"].asString();
		if(!valueTracesTrace["MultiSize"].isNull())
			tracesObject.multiSize = std::stol(valueTracesTrace["MultiSize"].asString());
		if(!valueTracesTrace["Result"].isNull())
			tracesObject.result = valueTracesTrace["Result"].asString();
		if(!valueTracesTrace["Ttl"].isNull())
			tracesObject.ttl = std::stol(valueTracesTrace["Ttl"].asString());
		if(!valueTracesTrace["Finished"].isNull())
			tracesObject.finished = valueTracesTrace["Finished"].asString() == "true";
		traces_.push_back(tracesObject);
	}
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListZkTrackResult::getHttpCode()const
{
	return httpCode_;
}

long ListZkTrackResult::getTotalCount()const
{
	return totalCount_;
}

long ListZkTrackResult::getPageSize()const
{
	return pageSize_;
}

std::string ListZkTrackResult::getMessage()const
{
	return message_;
}

std::vector<ListZkTrackResult::Trace> ListZkTrackResult::getTraces()const
{
	return traces_;
}

long ListZkTrackResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListZkTrackResult::getErrorCode()const
{
	return errorCode_;
}

bool ListZkTrackResult::getSuccess()const
{
	return success_;
}

