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

#include <alibabacloud/ccc/model/ListMultiChannelRecordingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListMultiChannelRecordingsResult::ListMultiChannelRecordingsResult() :
	ServiceResult()
{}

ListMultiChannelRecordingsResult::ListMultiChannelRecordingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMultiChannelRecordingsResult::~ListMultiChannelRecordingsResult()
{}

void ListMultiChannelRecordingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["RecordingDTO"];
	for (auto valueDataRecordingDTO : allDataNode)
	{
		RecordingDTO dataObject;
		if(!valueDataRecordingDTO["FileName"].isNull())
			dataObject.fileName = valueDataRecordingDTO["FileName"].asString();
		if(!valueDataRecordingDTO["FileUrl"].isNull())
			dataObject.fileUrl = valueDataRecordingDTO["FileUrl"].asString();
		if(!valueDataRecordingDTO["AgentId"].isNull())
			dataObject.agentId = valueDataRecordingDTO["AgentId"].asString();
		if(!valueDataRecordingDTO["AgentName"].isNull())
			dataObject.agentName = valueDataRecordingDTO["AgentName"].asString();
		if(!valueDataRecordingDTO["StartTime"].isNull())
			dataObject.startTime = std::stol(valueDataRecordingDTO["StartTime"].asString());
		if(!valueDataRecordingDTO["ContactId"].isNull())
			dataObject.contactId = valueDataRecordingDTO["ContactId"].asString();
		if(!valueDataRecordingDTO["Duration"].isNull())
			dataObject.duration = valueDataRecordingDTO["Duration"].asString();
		if(!valueDataRecordingDTO["SkillGroupId"].isNull())
			dataObject.skillGroupId = valueDataRecordingDTO["SkillGroupId"].asString();
		if(!valueDataRecordingDTO["RamId"].isNull())
			dataObject.ramId = valueDataRecordingDTO["RamId"].asString();
		if(!valueDataRecordingDTO["AgentChannelId"].isNull())
			dataObject.agentChannelId = valueDataRecordingDTO["AgentChannelId"].asString();
		auto allHoldTimeSegmentsNode = valueDataRecordingDTO["HoldTimeSegments"]["holdTimeSegment"];
		for (auto valueDataRecordingDTOHoldTimeSegmentsholdTimeSegment : allHoldTimeSegmentsNode)
		{
			RecordingDTO::HoldTimeSegment holdTimeSegmentsObject;
			if(!valueDataRecordingDTOHoldTimeSegmentsholdTimeSegment["StartTime"].isNull())
				holdTimeSegmentsObject.startTime = std::stol(valueDataRecordingDTOHoldTimeSegmentsholdTimeSegment["StartTime"].asString());
			if(!valueDataRecordingDTOHoldTimeSegmentsholdTimeSegment["EndTime"].isNull())
				holdTimeSegmentsObject.endTime = std::stol(valueDataRecordingDTOHoldTimeSegmentsholdTimeSegment["EndTime"].asString());
			dataObject.holdTimeSegments.push_back(holdTimeSegmentsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListMultiChannelRecordingsResult::getMessage()const
{
	return message_;
}

int ListMultiChannelRecordingsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListMultiChannelRecordingsResult::RecordingDTO> ListMultiChannelRecordingsResult::getData()const
{
	return data_;
}

std::string ListMultiChannelRecordingsResult::getCode()const
{
	return code_;
}

