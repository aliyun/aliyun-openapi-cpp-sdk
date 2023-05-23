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

#include <alibabacloud/ccc/model/ListAgentStateLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAgentStateLogsResult::ListAgentStateLogsResult() :
	ServiceResult()
{}

ListAgentStateLogsResult::ListAgentStateLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentStateLogsResult::~ListAgentStateLogsResult()
{}

void ListAgentStateLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["StartTime"].isNull())
			dataObject.startTime = std::stol(valueDataDataItem["StartTime"].asString());
		if(!valueDataDataItem["StateCode"].isNull())
			dataObject.stateCode = valueDataDataItem["StateCode"].asString();
		if(!valueDataDataItem["Duration"].isNull())
			dataObject.duration = std::stol(valueDataDataItem["Duration"].asString());
		if(!valueDataDataItem["State"].isNull())
			dataObject.state = valueDataDataItem["State"].asString();
		if(!valueDataDataItem["OutboundScenario"].isNull())
			dataObject.outboundScenario = valueDataDataItem["OutboundScenario"].asString() == "true";
		if(!valueDataDataItem["BreakCode"].isNull())
			dataObject.breakCode = valueDataDataItem["BreakCode"].asString();
		if(!valueDataDataItem["WorkMode"].isNull())
			dataObject.workMode = valueDataDataItem["WorkMode"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListAgentStateLogsResult::getMessage()const
{
	return message_;
}

int ListAgentStateLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListAgentStateLogsResult::DataItem> ListAgentStateLogsResult::getData()const
{
	return data_;
}

std::string ListAgentStateLogsResult::getCode()const
{
	return code_;
}

