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

#include <alibabacloud/eventbridge/model/QueryEventTracesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

QueryEventTracesResult::QueryEventTracesResult() :
	ServiceResult()
{}

QueryEventTracesResult::QueryEventTracesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryEventTracesResult::~QueryEventTracesResult()
{}

void QueryEventTracesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Action"].isNull())
			dataObject.action = valueDataDataItem["Action"].asString();
		if(!valueDataDataItem["ReceivedTime"].isNull())
			dataObject.receivedTime = std::stol(valueDataDataItem["ReceivedTime"].asString());
		if(!valueDataDataItem["RuleMatchingTime"].isNull())
			dataObject.ruleMatchingTime = valueDataDataItem["RuleMatchingTime"].asString();
		if(!valueDataDataItem["ActionTime"].isNull())
			dataObject.actionTime = std::stol(valueDataDataItem["ActionTime"].asString());
		if(!valueDataDataItem["NotifyStatus"].isNull())
			dataObject.notifyStatus = valueDataDataItem["NotifyStatus"].asString();
		if(!valueDataDataItem["RuleName"].isNull())
			dataObject.ruleName = valueDataDataItem["RuleName"].asString();
		if(!valueDataDataItem["EventId"].isNull())
			dataObject.eventId = valueDataDataItem["EventId"].asString();
		if(!valueDataDataItem["EventBusName"].isNull())
			dataObject.eventBusName = valueDataDataItem["EventBusName"].asString();
		if(!valueDataDataItem["Endpoint"].isNull())
			dataObject.endpoint = valueDataDataItem["Endpoint"].asString();
		if(!valueDataDataItem["NotifyLatency"].isNull())
			dataObject.notifyLatency = valueDataDataItem["NotifyLatency"].asString();
		if(!valueDataDataItem["NotifyTime"].isNull())
			dataObject.notifyTime = std::stol(valueDataDataItem["NotifyTime"].asString());
		if(!valueDataDataItem["EventSource"].isNull())
			dataObject.eventSource = valueDataDataItem["EventSource"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryEventTracesResult::getMessage()const
{
	return message_;
}

std::vector<QueryEventTracesResult::DataItem> QueryEventTracesResult::getData()const
{
	return data_;
}

std::string QueryEventTracesResult::getCode()const
{
	return code_;
}

bool QueryEventTracesResult::getSuccess()const
{
	return success_;
}

