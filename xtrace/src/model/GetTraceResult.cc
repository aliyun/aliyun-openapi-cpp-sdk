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

#include <alibabacloud/xtrace/model/GetTraceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Xtrace;
using namespace AlibabaCloud::Xtrace::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSpans = value["Spans"]["Span"];
	for (auto value : allSpans)
	{
		Span spansObject;
		if(!value["TraceID"].isNull())
			spansObject.traceID = value["TraceID"].asString();
		if(!value["OperationName"].isNull())
			spansObject.operationName = value["OperationName"].asString();
		if(!value["Duration"].isNull())
			spansObject.duration = std::stol(value["Duration"].asString());
		if(!value["ServiceName"].isNull())
			spansObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceIp"].isNull())
			spansObject.serviceIp = value["ServiceIp"].asString();
		if(!value["Timestamp"].isNull())
			spansObject.timestamp = std::stol(value["Timestamp"].asString());
		if(!value["RpcId"].isNull())
			spansObject.rpcId = value["RpcId"].asString();
		if(!value["ResultCode"].isNull())
			spansObject.resultCode = value["ResultCode"].asString();
		if(!value["HaveStack"].isNull())
			spansObject.haveStack = value["HaveStack"].asString() == "true";
		auto allTagEntryList = value["TagEntryList"]["TagEntry"];
		for (auto value : allTagEntryList)
		{
			Span::TagEntry tagEntryListObject;
			if(!value["Key"].isNull())
				tagEntryListObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagEntryListObject.value = value["Value"].asString();
			spansObject.tagEntryList.push_back(tagEntryListObject);
		}
		auto allLogEventList = value["LogEventList"]["LogEvent"];
		for (auto value : allLogEventList)
		{
			Span::LogEvent logEventListObject;
			if(!value["Timestamp"].isNull())
				logEventListObject.timestamp = std::stol(value["Timestamp"].asString());
			auto allTagEntryList1 = value["TagEntryList"]["TagEntry"];
			for (auto value : allTagEntryList1)
			{
				Span::LogEvent::TagEntry2 tagEntryList1Object;
				if(!value["Key"].isNull())
					tagEntryList1Object.key = value["Key"].asString();
				if(!value["Value"].isNull())
					tagEntryList1Object.value = value["Value"].asString();
				logEventListObject.tagEntryList1.push_back(tagEntryList1Object);
			}
			spansObject.logEventList.push_back(logEventListObject);
		}
		spans_.push_back(spansObject);
	}

}

std::vector<GetTraceResult::Span> GetTraceResult::getSpans()const
{
	return spans_;
}

