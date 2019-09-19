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

#include <alibabacloud/ccc/model/ListRecordingOfDualTrackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListRecordingOfDualTrackResult::ListRecordingOfDualTrackResult() :
	ServiceResult()
{}

ListRecordingOfDualTrackResult::ListRecordingOfDualTrackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecordingOfDualTrackResult::~ListRecordingOfDualTrackResult()
{}

void ListRecordingOfDualTrackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto recordingsNode = value["Recordings"];
	if(!recordingsNode["TotalCount"].isNull())
		recordings_.totalCount = std::stoi(recordingsNode["TotalCount"].asString());
	if(!recordingsNode["PageNumber"].isNull())
		recordings_.pageNumber = std::stoi(recordingsNode["PageNumber"].asString());
	if(!recordingsNode["PageSize"].isNull())
		recordings_.pageSize = std::stoi(recordingsNode["PageSize"].asString());
	auto allListNode = recordingsNode["List"]["Recording"];
	for (auto recordingsNodeListRecording : allListNode)
	{
		Recordings::Recording recordingObject;
		if(!recordingsNodeListRecording["ContactId"].isNull())
			recordingObject.contactId = recordingsNodeListRecording["ContactId"].asString();
		if(!recordingsNodeListRecording["ContactType"].isNull())
			recordingObject.contactType = recordingsNodeListRecording["ContactType"].asString();
		if(!recordingsNodeListRecording["AgentId"].isNull())
			recordingObject.agentId = recordingsNodeListRecording["AgentId"].asString();
		if(!recordingsNodeListRecording["AgentName"].isNull())
			recordingObject.agentName = recordingsNodeListRecording["AgentName"].asString();
		if(!recordingsNodeListRecording["CallingNumber"].isNull())
			recordingObject.callingNumber = recordingsNodeListRecording["CallingNumber"].asString();
		if(!recordingsNodeListRecording["CalledNumber"].isNull())
			recordingObject.calledNumber = recordingsNodeListRecording["CalledNumber"].asString();
		if(!recordingsNodeListRecording["StartTime"].isNull())
			recordingObject.startTime = std::stol(recordingsNodeListRecording["StartTime"].asString());
		if(!recordingsNodeListRecording["Duration"].isNull())
			recordingObject.duration = std::stoi(recordingsNodeListRecording["Duration"].asString());
		if(!recordingsNodeListRecording["FileName"].isNull())
			recordingObject.fileName = recordingsNodeListRecording["FileName"].asString();
		if(!recordingsNodeListRecording["FilePath"].isNull())
			recordingObject.filePath = recordingsNodeListRecording["FilePath"].asString();
		if(!recordingsNodeListRecording["FileDescription"].isNull())
			recordingObject.fileDescription = recordingsNodeListRecording["FileDescription"].asString();
		if(!recordingsNodeListRecording["Channel"].isNull())
			recordingObject.channel = recordingsNodeListRecording["Channel"].asString();
		if(!recordingsNodeListRecording["InstanceId"].isNull())
			recordingObject.instanceId = recordingsNodeListRecording["InstanceId"].asString();
		recordings_.list.push_back(recordingObject);
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

std::string ListRecordingOfDualTrackResult::getMessage()const
{
	return message_;
}

int ListRecordingOfDualTrackResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListRecordingOfDualTrackResult::Recordings ListRecordingOfDualTrackResult::getRecordings()const
{
	return recordings_;
}

std::string ListRecordingOfDualTrackResult::getCode()const
{
	return code_;
}

bool ListRecordingOfDualTrackResult::getSuccess()const
{
	return success_;
}

