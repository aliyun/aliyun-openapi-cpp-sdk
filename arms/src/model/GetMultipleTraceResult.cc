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
		auto allSpansNode = allMultiCallChainInfosNode["Spans"]["Span"];
		for (auto allMultiCallChainInfosNodeSpansSpan : allSpansNode)
		{
			MultiCallChainInfo::Span spansObject;
			if(!allMultiCallChainInfosNodeSpansSpan["TraceID"].isNull())
				spansObject.traceID = allMultiCallChainInfosNodeSpansSpan["TraceID"].asString();
			if(!allMultiCallChainInfosNodeSpansSpan["OperationName"].isNull())
				spansObject.operationName = allMultiCallChainInfosNodeSpansSpan["OperationName"].asString();
			if(!allMultiCallChainInfosNodeSpansSpan["Duration"].isNull())
				spansObject.duration = std::stol(allMultiCallChainInfosNodeSpansSpan["Duration"].asString());
			if(!allMultiCallChainInfosNodeSpansSpan["ServiceName"].isNull())
				spansObject.serviceName = allMultiCallChainInfosNodeSpansSpan["ServiceName"].asString();
			if(!allMultiCallChainInfosNodeSpansSpan["ServiceIp"].isNull())
				spansObject.serviceIp = allMultiCallChainInfosNodeSpansSpan["ServiceIp"].asString();
			if(!allMultiCallChainInfosNodeSpansSpan["Timestamp"].isNull())
				spansObject.timestamp = std::stol(allMultiCallChainInfosNodeSpansSpan["Timestamp"].asString());
			if(!allMultiCallChainInfosNodeSpansSpan["RpcId"].isNull())
				spansObject.rpcId = allMultiCallChainInfosNodeSpansSpan["RpcId"].asString();
			if(!allMultiCallChainInfosNodeSpansSpan["ResultCode"].isNull())
				spansObject.resultCode = allMultiCallChainInfosNodeSpansSpan["ResultCode"].asString();
			if(!allMultiCallChainInfosNodeSpansSpan["HaveStack"].isNull())
				spansObject.haveStack = allMultiCallChainInfosNodeSpansSpan["HaveStack"].asString() == "true";
			if(!allMultiCallChainInfosNodeSpansSpan["RpcType"].isNull())
				spansObject.rpcType = std::stoi(allMultiCallChainInfosNodeSpansSpan["RpcType"].asString());
			auto allTagEntryListNode = allSpansNode["TagEntryList"]["TagEntry"];
			for (auto allSpansNodeTagEntryListTagEntry : allTagEntryListNode)
			{
				MultiCallChainInfo::Span::TagEntry tagEntryListObject;
				if(!allSpansNodeTagEntryListTagEntry["Key"].isNull())
					tagEntryListObject.key = allSpansNodeTagEntryListTagEntry["Key"].asString();
				if(!allSpansNodeTagEntryListTagEntry["Value"].isNull())
					tagEntryListObject.value = allSpansNodeTagEntryListTagEntry["Value"].asString();
				spansObject.tagEntryList.push_back(tagEntryListObject);
			}
			auto allLogEventListNode = allSpansNode["LogEventList"]["LogEvent"];
			for (auto allSpansNodeLogEventListLogEvent : allLogEventListNode)
			{
				MultiCallChainInfo::Span::LogEvent logEventListObject;
				if(!allSpansNodeLogEventListLogEvent["Timestamp"].isNull())
					logEventListObject.timestamp = std::stol(allSpansNodeLogEventListLogEvent["Timestamp"].asString());
				auto allTagEntryList1Node = allLogEventListNode["TagEntryList"]["TagEntry"];
				for (auto allLogEventListNodeTagEntryListTagEntry : allTagEntryList1Node)
				{
					MultiCallChainInfo::Span::LogEvent::TagEntry2 tagEntryList1Object;
					if(!allLogEventListNodeTagEntryListTagEntry["Key"].isNull())
						tagEntryList1Object.key = allLogEventListNodeTagEntryListTagEntry["Key"].asString();
					if(!allLogEventListNodeTagEntryListTagEntry["Value"].isNull())
						tagEntryList1Object.value = allLogEventListNodeTagEntryListTagEntry["Value"].asString();
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

