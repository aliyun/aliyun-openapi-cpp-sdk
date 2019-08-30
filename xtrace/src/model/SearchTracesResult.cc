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

#include <alibabacloud/xtrace/model/SearchTracesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Xtrace;
using namespace AlibabaCloud::Xtrace::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["TotalCount"].isNull())
		pageBean_.totalCount = std::stol(pageBeanNode["TotalCount"].asString());
	if(!pageBeanNode["PageSize"].isNull())
		pageBean_.pageSize = std::stoi(pageBeanNode["PageSize"].asString());
	if(!pageBeanNode["PageNumber"].isNull())
		pageBean_.pageNumber = std::stoi(pageBeanNode["PageNumber"].asString());
	auto allTraceInfos = value["TraceInfos"]["TraceInfo"];
	for (auto value : allTraceInfos)
	{
		PageBean::TraceInfo traceInfoObject;
		if(!value["TraceID"].isNull())
			traceInfoObject.traceID = value["TraceID"].asString();
		if(!value["OperationName"].isNull())
			traceInfoObject.operationName = value["OperationName"].asString();
		if(!value["ServiceName"].isNull())
			traceInfoObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceIp"].isNull())
			traceInfoObject.serviceIp = value["ServiceIp"].asString();
		if(!value["Duration"].isNull())
			traceInfoObject.duration = std::stol(value["Duration"].asString());
		if(!value["Timestamp"].isNull())
			traceInfoObject.timestamp = std::stol(value["Timestamp"].asString());
		pageBean_.traceInfos.push_back(traceInfoObject);
	}

}

SearchTracesResult::PageBean SearchTracesResult::getPageBean()const
{
	return pageBean_;
}

