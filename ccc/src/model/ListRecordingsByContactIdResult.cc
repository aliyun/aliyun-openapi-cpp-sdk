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

#include <alibabacloud/ccc/model/ListRecordingsByContactIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListRecordingsByContactIdResult::ListRecordingsByContactIdResult() :
	ServiceResult()
{}

ListRecordingsByContactIdResult::ListRecordingsByContactIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecordingsByContactIdResult::~ListRecordingsByContactIdResult()
{}

void ListRecordingsByContactIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordingsNode = value["Recordings"]["Recording"];
	for (auto valueRecordingsRecording : allRecordingsNode)
	{
		Recording recordingsObject;
		if(!valueRecordingsRecording["ContactId"].isNull())
			recordingsObject.contactId = valueRecordingsRecording["ContactId"].asString();
		if(!valueRecordingsRecording["ContactType"].isNull())
			recordingsObject.contactType = valueRecordingsRecording["ContactType"].asString();
		if(!valueRecordingsRecording["AgentId"].isNull())
			recordingsObject.agentId = valueRecordingsRecording["AgentId"].asString();
		if(!valueRecordingsRecording["AgentName"].isNull())
			recordingsObject.agentName = valueRecordingsRecording["AgentName"].asString();
		if(!valueRecordingsRecording["CallingNumber"].isNull())
			recordingsObject.callingNumber = valueRecordingsRecording["CallingNumber"].asString();
		if(!valueRecordingsRecording["CalledNumber"].isNull())
			recordingsObject.calledNumber = valueRecordingsRecording["CalledNumber"].asString();
		if(!valueRecordingsRecording["StartTime"].isNull())
			recordingsObject.startTime = std::stol(valueRecordingsRecording["StartTime"].asString());
		if(!valueRecordingsRecording["Duration"].isNull())
			recordingsObject.duration = std::stoi(valueRecordingsRecording["Duration"].asString());
		if(!valueRecordingsRecording["FileName"].isNull())
			recordingsObject.fileName = valueRecordingsRecording["FileName"].asString();
		if(!valueRecordingsRecording["FilePath"].isNull())
			recordingsObject.filePath = valueRecordingsRecording["FilePath"].asString();
		if(!valueRecordingsRecording["FileDescription"].isNull())
			recordingsObject.fileDescription = valueRecordingsRecording["FileDescription"].asString();
		if(!valueRecordingsRecording["Channel"].isNull())
			recordingsObject.channel = valueRecordingsRecording["Channel"].asString();
		if(!valueRecordingsRecording["InstanceId"].isNull())
			recordingsObject.instanceId = valueRecordingsRecording["InstanceId"].asString();
		if(!valueRecordingsRecording["QualityCheckTid"].isNull())
			recordingsObject.qualityCheckTid = valueRecordingsRecording["QualityCheckTid"].asString();
		if(!valueRecordingsRecording["QualityCheckTaskId"].isNull())
			recordingsObject.qualityCheckTaskId = valueRecordingsRecording["QualityCheckTaskId"].asString();
		recordings_.push_back(recordingsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListRecordingsByContactIdResult::getMessage()const
{
	return message_;
}

int ListRecordingsByContactIdResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListRecordingsByContactIdResult::Recording> ListRecordingsByContactIdResult::getRecordings()const
{
	return recordings_;
}

std::string ListRecordingsByContactIdResult::getCode()const
{
	return code_;
}

bool ListRecordingsByContactIdResult::getSuccess()const
{
	return success_;
}

