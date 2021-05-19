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

#include <alibabacloud/scsp/model/ListHotlineRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scsp;
using namespace AlibabaCloud::Scsp::Model;

ListHotlineRecordResult::ListHotlineRecordResult() :
	ServiceResult()
{}

ListHotlineRecordResult::ListHotlineRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHotlineRecordResult::~ListHotlineRecordResult()
{}

void ListHotlineRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["EndTime"].isNull())
			dataObject.endTime = valueDataDataItem["EndTime"].asString() == "true";
		if(!valueDataDataItem["StartTime"].isNull())
			dataObject.startTime = valueDataDataItem["StartTime"].asString() == "true";
		if(!valueDataDataItem["ConnectionId"].isNull())
			dataObject.connectionId = valueDataDataItem["ConnectionId"].asString();
		if(!valueDataDataItem["CallId"].isNull())
			dataObject.callId = valueDataDataItem["CallId"].asString();
		if(!valueDataDataItem["Url"].isNull())
			dataObject.url = valueDataDataItem["Url"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());

}

std::string ListHotlineRecordResult::getMessage()const
{
	return message_;
}

long ListHotlineRecordResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListHotlineRecordResult::DataItem> ListHotlineRecordResult::getData()const
{
	return data_;
}

std::string ListHotlineRecordResult::getCode()const
{
	return code_;
}

bool ListHotlineRecordResult::getSuccess()const
{
	return success_;
}

