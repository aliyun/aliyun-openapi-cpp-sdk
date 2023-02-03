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

#include <alibabacloud/mse/model/ListNamingTrackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListNamingTrackResult::ListNamingTrackResult() :
	ServiceResult()
{}

ListNamingTrackResult::ListNamingTrackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNamingTrackResult::~ListNamingTrackResult()
{}

void ListNamingTrackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTracesNode = value["Traces"]["Trace"];
	for (auto valueTracesTrace : allTracesNode)
	{
		Trace tracesObject;
		if(!valueTracesTrace["PushTime"].isNull())
			tracesObject.pushTime = valueTracesTrace["PushTime"].asString();
		if(!valueTracesTrace["NodeName"].isNull())
			tracesObject.nodeName = valueTracesTrace["NodeName"].asString();
		if(!valueTracesTrace["ClientIp"].isNull())
			tracesObject.clientIp = valueTracesTrace["ClientIp"].asString();
		if(!valueTracesTrace["ServerName"].isNull())
			tracesObject.serverName = valueTracesTrace["ServerName"].asString();
		if(!valueTracesTrace["Group"].isNull())
			tracesObject.group = valueTracesTrace["Group"].asString();
		if(!valueTracesTrace["InstanceSize"].isNull())
			tracesObject.instanceSize = valueTracesTrace["InstanceSize"].asString();
		if(!valueTracesTrace["PushTimeAll"].isNull())
			tracesObject.pushTimeAll = valueTracesTrace["PushTimeAll"].asString();
		if(!valueTracesTrace["PushTimeNetwork"].isNull())
			tracesObject.pushTimeNetwork = valueTracesTrace["PushTimeNetwork"].asString();
		if(!valueTracesTrace["SlaTime"].isNull())
			tracesObject.slaTime = valueTracesTrace["SlaTime"].asString();
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

std::string ListNamingTrackResult::getHttpCode()const
{
	return httpCode_;
}

long ListNamingTrackResult::getTotalCount()const
{
	return totalCount_;
}

long ListNamingTrackResult::getPageSize()const
{
	return pageSize_;
}

std::string ListNamingTrackResult::getMessage()const
{
	return message_;
}

std::vector<ListNamingTrackResult::Trace> ListNamingTrackResult::getTraces()const
{
	return traces_;
}

long ListNamingTrackResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListNamingTrackResult::getErrorCode()const
{
	return errorCode_;
}

bool ListNamingTrackResult::getSuccess()const
{
	return success_;
}

