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

#include <alibabacloud/arms/model/GetTraceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetTraceResult::GetTraceResult() :
	ServiceResult()
{}

GetTraceResult::GetTraceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTraceResult::~GetTraceResult()
{}

void GetTraceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSpansNode = value["Spans"]["Span"];
	for (auto valueSpansSpan : allSpansNode)
	{
		Span spansObject;
		if(!valueSpansSpan["SpanId"].isNull())
			spansObject.spanId = valueSpansSpan["SpanId"].asString();
		if(!valueSpansSpan["OperationName"].isNull())
			spansObject.operationName = valueSpansSpan["OperationName"].asString();
		if(!valueSpansSpan["ResultCode"].isNull())
			spansObject.resultCode = valueSpansSpan["ResultCode"].asString();
		if(!valueSpansSpan["Timestamp"].isNull())
			spansObject.timestamp = std::stol(valueSpansSpan["Timestamp"].asString());
		if(!valueSpansSpan["RpcType"].isNull())
			spansObject.rpcType = std::stoi(valueSpansSpan["RpcType"].asString());
		if(!valueSpansSpan["ServiceIp"].isNull())
			spansObject.serviceIp = valueSpansSpan["ServiceIp"].asString();
		if(!valueSpansSpan["HaveStack"].isNull())
			spansObject.haveStack = valueSpansSpan["HaveStack"].asString() == "true";
		if(!valueSpansSpan["ParentSpanId"].isNull())
			spansObject.parentSpanId = valueSpansSpan["ParentSpanId"].asString();
		if(!valueSpansSpan["Duration"].isNull())
			spansObject.duration = std::stol(valueSpansSpan["Duration"].asString());
		if(!valueSpansSpan["RpcId"].isNull())
			spansObject.rpcId = valueSpansSpan["RpcId"].asString();
		if(!valueSpansSpan["ServiceName"].isNull())
			spansObject.serviceName = valueSpansSpan["ServiceName"].asString();
		if(!valueSpansSpan["TraceID"].isNull())
			spansObject.traceID = valueSpansSpan["TraceID"].asString();
		auto allTagEntryListNode = valueSpansSpan["TagEntryList"]["TagEntry"];
		for (auto valueSpansSpanTagEntryListTagEntry : allTagEntryListNode)
		{
			Span::TagEntry tagEntryListObject;
			if(!valueSpansSpanTagEntryListTagEntry["Key"].isNull())
				tagEntryListObject.key = valueSpansSpanTagEntryListTagEntry["Key"].asString();
			if(!valueSpansSpanTagEntryListTagEntry["Value"].isNull())
				tagEntryListObject.value = valueSpansSpanTagEntryListTagEntry["Value"].asString();
			spansObject.tagEntryList.push_back(tagEntryListObject);
		}
		auto allLogEventListNode = valueSpansSpan["LogEventList"]["LogEvent"];
		for (auto valueSpansSpanLogEventListLogEvent : allLogEventListNode)
		{
			Span::LogEvent logEventListObject;
			if(!valueSpansSpanLogEventListLogEvent["Timestamp"].isNull())
				logEventListObject.timestamp = std::stol(valueSpansSpanLogEventListLogEvent["Timestamp"].asString());
			auto allTagEntryList1Node = valueSpansSpanLogEventListLogEvent["TagEntryList"]["TagEntry"];
			for (auto valueSpansSpanLogEventListLogEventTagEntryListTagEntry : allTagEntryList1Node)
			{
				Span::LogEvent::TagEntry2 tagEntryList1Object;
				if(!valueSpansSpanLogEventListLogEventTagEntryListTagEntry["Key"].isNull())
					tagEntryList1Object.key = valueSpansSpanLogEventListLogEventTagEntryListTagEntry["Key"].asString();
				if(!valueSpansSpanLogEventListLogEventTagEntryListTagEntry["Value"].isNull())
					tagEntryList1Object.value = valueSpansSpanLogEventListLogEventTagEntryListTagEntry["Value"].asString();
				logEventListObject.tagEntryList1.push_back(tagEntryList1Object);
			}
			spansObject.logEventList.push_back(logEventListObject);
		}
		auto allChildren = value["Children"]["child"];
		for (auto value : allChildren)
			spansObject.children.push_back(value.asString());
		spans_.push_back(spansObject);
	}

}

std::vector<GetTraceResult::Span> GetTraceResult::getSpans()const
{
	return spans_;
}

