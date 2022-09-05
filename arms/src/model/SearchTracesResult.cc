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

#include <alibabacloud/arms/model/SearchTracesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

SearchTracesResult::SearchTracesResult() :
	ServiceResult()
{}

SearchTracesResult::SearchTracesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTracesResult::~SearchTracesResult()
{}

void SearchTracesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTraceInfosNode = value["TraceInfos"]["TraceInfo"];
	for (auto valueTraceInfosTraceInfo : allTraceInfosNode)
	{
		TraceInfo traceInfosObject;
		if(!valueTraceInfosTraceInfo["OperationName"].isNull())
			traceInfosObject.operationName = valueTraceInfosTraceInfo["OperationName"].asString();
		if(!valueTraceInfosTraceInfo["ServiceIp"].isNull())
			traceInfosObject.serviceIp = valueTraceInfosTraceInfo["ServiceIp"].asString();
		if(!valueTraceInfosTraceInfo["Duration"].isNull())
			traceInfosObject.duration = std::stol(valueTraceInfosTraceInfo["Duration"].asString());
		if(!valueTraceInfosTraceInfo["Timestamp"].isNull())
			traceInfosObject.timestamp = std::stol(valueTraceInfosTraceInfo["Timestamp"].asString());
		if(!valueTraceInfosTraceInfo["ServiceName"].isNull())
			traceInfosObject.serviceName = valueTraceInfosTraceInfo["ServiceName"].asString();
		if(!valueTraceInfosTraceInfo["TraceID"].isNull())
			traceInfosObject.traceID = valueTraceInfosTraceInfo["TraceID"].asString();
		traceInfos_.push_back(traceInfosObject);
	}

}

std::vector<SearchTracesResult::TraceInfo> SearchTracesResult::getTraceInfos()const
{
	return traceInfos_;
}

