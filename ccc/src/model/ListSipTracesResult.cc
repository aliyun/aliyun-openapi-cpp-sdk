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

#include <alibabacloud/ccc/model/ListSipTracesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSipTracesResult::ListSipTracesResult() :
	ServiceResult()
{}

ListSipTracesResult::ListSipTracesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSipTracesResult::~ListSipTracesResult()
{}

void ListSipTracesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["CallTraces"];
	for (auto valueDataCallTraces : allDataNode)
	{
		CallTraces dataObject;
		if(!valueDataCallTraces["CallId"].isNull())
			dataObject.callId = valueDataCallTraces["CallId"].asString();
		if(!valueDataCallTraces["ContactId"].isNull())
			dataObject.contactId = valueDataCallTraces["ContactId"].asString();
		if(!valueDataCallTraces["FirstLine"].isNull())
			dataObject.firstLine = valueDataCallTraces["FirstLine"].asString();
		if(!valueDataCallTraces["DestinationNodeIp"].isNull())
			dataObject.destinationNodeIp = valueDataCallTraces["DestinationNodeIp"].asString();
		if(!valueDataCallTraces["SourceNodeIp"].isNull())
			dataObject.sourceNodeIp = valueDataCallTraces["SourceNodeIp"].asString();
		if(!valueDataCallTraces["Payload"].isNull())
			dataObject.payload = valueDataCallTraces["Payload"].asString();
		if(!valueDataCallTraces["Timestamp"].isNull())
			dataObject.timestamp = std::stol(valueDataCallTraces["Timestamp"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSipTracesResult::getMessage()const
{
	return message_;
}

int ListSipTracesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListSipTracesResult::CallTraces> ListSipTracesResult::getData()const
{
	return data_;
}

std::string ListSipTracesResult::getCode()const
{
	return code_;
}

