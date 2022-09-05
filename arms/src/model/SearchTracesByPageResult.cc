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

#include <alibabacloud/arms/model/SearchTracesByPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchTracesByPageResult::SearchTracesByPageResult() :
	ServiceResult()
{}

SearchTracesByPageResult::SearchTracesByPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTracesByPageResult::~SearchTracesByPageResult()
{}

void SearchTracesByPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	if(!pageBeanNode["Total"].isNull())
		pageBean_.total = std::stoi(pageBeanNode["Total"].asString());
	auto allTraceInfosNode = pageBeanNode["TraceInfos"]["TraceInfo"];
	for (auto pageBeanNodeTraceInfosTraceInfo : allTraceInfosNode)
	{
		PageBean::TraceInfo traceInfoObject;
		if(!pageBeanNodeTraceInfosTraceInfo["OperationName"].isNull())
			traceInfoObject.operationName = pageBeanNodeTraceInfosTraceInfo["OperationName"].asString();
		if(!pageBeanNodeTraceInfosTraceInfo["ServiceIp"].isNull())
			traceInfoObject.serviceIp = pageBeanNodeTraceInfosTraceInfo["ServiceIp"].asString();
		if(!pageBeanNodeTraceInfosTraceInfo["Duration"].isNull())
			traceInfoObject.duration = std::stol(pageBeanNodeTraceInfosTraceInfo["Duration"].asString());
		if(!pageBeanNodeTraceInfosTraceInfo["Timestamp"].isNull())
			traceInfoObject.timestamp = std::stol(pageBeanNodeTraceInfosTraceInfo["Timestamp"].asString());
		if(!pageBeanNodeTraceInfosTraceInfo["ServiceName"].isNull())
			traceInfoObject.serviceName = pageBeanNodeTraceInfosTraceInfo["ServiceName"].asString();
		if(!pageBeanNodeTraceInfosTraceInfo["TraceID"].isNull())
			traceInfoObject.traceID = pageBeanNodeTraceInfosTraceInfo["TraceID"].asString();
		pageBean_.traceInfos.push_back(traceInfoObject);
	}

}

SearchTracesByPageResult::PageBean SearchTracesByPageResult::getPageBean()const
{
	return pageBean_;
}

