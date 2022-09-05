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

#include <alibabacloud/arms/model/GetMultipleTraceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetMultipleTraceResult::GetMultipleTraceResult() :
	ServiceResult()
{}

GetMultipleTraceResult::GetMultipleTraceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMultipleTraceResult::~GetMultipleTraceResult()
{}

void GetMultipleTraceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMultiCallChainInfosNode = value["MultiCallChainInfos"]["MultiCallChainInfo"];
	for (auto valueMultiCallChainInfosMultiCallChainInfo : allMultiCallChainInfosNode)
	{
		MultiCallChainInfo multiCallChainInfosObject;
		if(!valueMultiCallChainInfosMultiCallChainInfo["TraceID"].isNull())
			multiCallChainInfosObject.traceID = valueMultiCallChainInfosMultiCallChainInfo["TraceID"].asString();
		auto allSpansNode = valueMultiCallChainInfosMultiCallChainInfo["Spans"]["Span"];
		for (auto valueMultiCallChainInfosMultiCallChainInfoSpansSpan : allSpansNode)
		{
			MultiCallChainInfo::Span spansObject;
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["SpanId"].isNull())
				spansObject.spanId = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["SpanId"].asString();
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["OperationName"].isNull())
				spansObject.operationName = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["OperationName"].asString();
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["ResultCode"].isNull())
				spansObject.resultCode = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["ResultCode"].asString();
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["Timestamp"].isNull())
				spansObject.timestamp = std::stol(valueMultiCallChainInfosMultiCallChainInfoSpansSpan["Timestamp"].asString());
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["RpcType"].isNull())
				spansObject.rpcType = std::stoi(valueMultiCallChainInfosMultiCallChainInfoSpansSpan["RpcType"].asString());
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["ServiceIp"].isNull())
				spansObject.serviceIp = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["ServiceIp"].asString();
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["HaveStack"].isNull())
				spansObject.haveStack = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["HaveStack"].asString() == "true";
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["ParentSpanId"].isNull())
				spansObject.parentSpanId = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["ParentSpanId"].asString();
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["Duration"].isNull())
				spansObject.duration = std::stol(valueMultiCallChainInfosMultiCallChainInfoSpansSpan["Duration"].asString());
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["RpcId"].isNull())
				spansObject.rpcId = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["RpcId"].asString();
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["ServiceName"].isNull())
				spansObject.serviceName = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["ServiceName"].asString();
			if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpan["TraceID"].isNull())
				spansObject.traceID = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["TraceID"].asString();
			auto allTagEntryListNode = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["TagEntryList"]["TagEntry"];
			for (auto valueMultiCallChainInfosMultiCallChainInfoSpansSpanTagEntryListTagEntry : allTagEntryListNode)
			{
				MultiCallChainInfo::Span::TagEntry tagEntryListObject;
				if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpanTagEntryListTagEntry["Key"].isNull())
					tagEntryListObject.key = valueMultiCallChainInfosMultiCallChainInfoSpansSpanTagEntryListTagEntry["Key"].asString();
				if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpanTagEntryListTagEntry["Value"].isNull())
					tagEntryListObject.value = valueMultiCallChainInfosMultiCallChainInfoSpansSpanTagEntryListTagEntry["Value"].asString();
				spansObject.tagEntryList.push_back(tagEntryListObject);
			}
			auto allLogEventListNode = valueMultiCallChainInfosMultiCallChainInfoSpansSpan["LogEventList"]["LogEvent"];
			for (auto valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEvent : allLogEventListNode)
			{
				MultiCallChainInfo::Span::LogEvent logEventListObject;
				if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEvent["Timestamp"].isNull())
					logEventListObject.timestamp = std::stol(valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEvent["Timestamp"].asString());
				auto allTagEntryList1Node = valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEvent["TagEntryList"]["TagEntry"];
				for (auto valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEventTagEntryListTagEntry : allTagEntryList1Node)
				{
					MultiCallChainInfo::Span::LogEvent::TagEntry2 tagEntryList1Object;
					if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEventTagEntryListTagEntry["Key"].isNull())
						tagEntryList1Object.key = valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEventTagEntryListTagEntry["Key"].asString();
					if(!valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEventTagEntryListTagEntry["Value"].isNull())
						tagEntryList1Object.value = valueMultiCallChainInfosMultiCallChainInfoSpansSpanLogEventListLogEventTagEntryListTagEntry["Value"].asString();
					logEventListObject.tagEntryList1.push_back(tagEntryList1Object);
				}
				spansObject.logEventList.push_back(logEventListObject);
			}
			multiCallChainInfosObject.spans.push_back(spansObject);
		}
		multiCallChainInfos_.push_back(multiCallChainInfosObject);
	}

}

std::vector<GetMultipleTraceResult::MultiCallChainInfo> GetMultipleTraceResult::getMultiCallChainInfos()const
{
	return multiCallChainInfos_;
}

