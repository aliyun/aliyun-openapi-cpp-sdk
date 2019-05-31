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
	auto allData = value["Data"]["TraceInfo"];
	for (auto value : allData)
	{
		TraceInfo dataObject;
		if(!value["TraceID"].isNull())
			dataObject.traceID = value["TraceID"].asString();
		if(!value["OperationName"].isNull())
			dataObject.operationName = value["OperationName"].asString();
		if(!value["Duration"].isNull())
			dataObject.duration = std::stoi(value["Duration"].asString());
		if(!value["ServiceName"].isNull())
			dataObject.serviceName = value["ServiceName"].asString();
		if(!value["ServiceIp"].isNull())
			dataObject.serviceIp = value["ServiceIp"].asString();
		if(!value["Timestamp"].isNull())
			dataObject.timestamp = std::stol(value["Timestamp"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<SearchTracesResult::TraceInfo> SearchTracesResult::getData()const
{
	return data_;
}

