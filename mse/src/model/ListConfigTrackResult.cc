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

#include <alibabacloud/mse/model/ListConfigTrackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListConfigTrackResult::ListConfigTrackResult() :
	ServiceResult()
{}

ListConfigTrackResult::ListConfigTrackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConfigTrackResult::~ListConfigTrackResult()
{}

void ListConfigTrackResult::parse(const std::string &payload)
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
		if(!valueTracesTrace["Ts"].isNull())
			tracesObject.ts = valueTracesTrace["Ts"].asString();
		if(!valueTracesTrace["RequestIp"].isNull())
			tracesObject.requestIp = valueTracesTrace["RequestIp"].asString();
		if(!valueTracesTrace["ResponseIp"].isNull())
			tracesObject.responseIp = valueTracesTrace["ResponseIp"].asString();
		if(!valueTracesTrace["DataId"].isNull())
			tracesObject.dataId = valueTracesTrace["DataId"].asString();
		if(!valueTracesTrace["Group"].isNull())
			tracesObject.group = valueTracesTrace["Group"].asString();
		if(!valueTracesTrace["Event"].isNull())
			tracesObject.event = valueTracesTrace["Event"].asString();
		if(!valueTracesTrace["Result"].isNull())
			tracesObject.result = valueTracesTrace["Result"].asString();
		if(!valueTracesTrace["Delay"].isNull())
			tracesObject.delay = valueTracesTrace["Delay"].asString();
		if(!valueTracesTrace["Md5"].isNull())
			tracesObject.md5 = valueTracesTrace["Md5"].asString();
		if(!valueTracesTrace["Type"].isNull())
			tracesObject.type = valueTracesTrace["Type"].asString();
		if(!valueTracesTrace["Push"].isNull())
			tracesObject.push = valueTracesTrace["Push"].asString() == "true";
		if(!valueTracesTrace["Client"].isNull())
			tracesObject.client = valueTracesTrace["Client"].asString() == "true";
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

std::string ListConfigTrackResult::getHttpCode()const
{
	return httpCode_;
}

long ListConfigTrackResult::getTotalCount()const
{
	return totalCount_;
}

long ListConfigTrackResult::getPageSize()const
{
	return pageSize_;
}

std::string ListConfigTrackResult::getMessage()const
{
	return message_;
}

std::vector<ListConfigTrackResult::Trace> ListConfigTrackResult::getTraces()const
{
	return traces_;
}

long ListConfigTrackResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListConfigTrackResult::getErrorCode()const
{
	return errorCode_;
}

bool ListConfigTrackResult::getSuccess()const
{
	return success_;
}

