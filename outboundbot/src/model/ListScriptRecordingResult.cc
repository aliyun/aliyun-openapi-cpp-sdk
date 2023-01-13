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

#include <alibabacloud/outboundbot/model/ListScriptRecordingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListScriptRecordingResult::ListScriptRecordingResult() :
	ServiceResult()
{}

ListScriptRecordingResult::ListScriptRecordingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScriptRecordingResult::~ListScriptRecordingResult()
{}

void ListScriptRecordingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allScriptRecordingsNode = value["ScriptRecordings"]["ScriptRecording"];
	for (auto valueScriptRecordingsScriptRecording : allScriptRecordingsNode)
	{
		ScriptRecording scriptRecordingsObject;
		if(!valueScriptRecordingsScriptRecording["RecordingContent"].isNull())
			scriptRecordingsObject.recordingContent = valueScriptRecordingsScriptRecording["RecordingContent"].asString();
		if(!valueScriptRecordingsScriptRecording["State"].isNull())
			scriptRecordingsObject.state = std::stoi(valueScriptRecordingsScriptRecording["State"].asString());
		if(!valueScriptRecordingsScriptRecording["StorageUuid"].isNull())
			scriptRecordingsObject.storageUuid = valueScriptRecordingsScriptRecording["StorageUuid"].asString();
		if(!valueScriptRecordingsScriptRecording["StateExtend"].isNull())
			scriptRecordingsObject.stateExtend = valueScriptRecordingsScriptRecording["StateExtend"].asString();
		if(!valueScriptRecordingsScriptRecording["InstanceId"].isNull())
			scriptRecordingsObject.instanceId = valueScriptRecordingsScriptRecording["InstanceId"].asString();
		if(!valueScriptRecordingsScriptRecording["GmtModified"].isNull())
			scriptRecordingsObject.gmtModified = std::stol(valueScriptRecordingsScriptRecording["GmtModified"].asString());
		if(!valueScriptRecordingsScriptRecording["ScriptId"].isNull())
			scriptRecordingsObject.scriptId = valueScriptRecordingsScriptRecording["ScriptId"].asString();
		if(!valueScriptRecordingsScriptRecording["Uuid"].isNull())
			scriptRecordingsObject.uuid = valueScriptRecordingsScriptRecording["Uuid"].asString();
		if(!valueScriptRecordingsScriptRecording["GmtUpload"].isNull())
			scriptRecordingsObject.gmtUpload = std::stol(valueScriptRecordingsScriptRecording["GmtUpload"].asString());
		if(!valueScriptRecordingsScriptRecording["RecordingDuration"].isNull())
			scriptRecordingsObject.recordingDuration = std::stoi(valueScriptRecordingsScriptRecording["RecordingDuration"].asString());
		if(!valueScriptRecordingsScriptRecording["RecordingName"].isNull())
			scriptRecordingsObject.recordingName = valueScriptRecordingsScriptRecording["RecordingName"].asString();
		if(!valueScriptRecordingsScriptRecording["GmtCreate"].isNull())
			scriptRecordingsObject.gmtCreate = std::stol(valueScriptRecordingsScriptRecording["GmtCreate"].asString());
		if(!valueScriptRecordingsScriptRecording["InnerId"].isNull())
			scriptRecordingsObject.innerId = valueScriptRecordingsScriptRecording["InnerId"].asString();
		scriptRecordings_.push_back(scriptRecordingsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListScriptRecordingResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListScriptRecordingResult::getMessage()const
{
	return message_;
}

int ListScriptRecordingResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListScriptRecordingResult::ScriptRecording> ListScriptRecordingResult::getScriptRecordings()const
{
	return scriptRecordings_;
}

int ListScriptRecordingResult::getPageNumber()const
{
	return pageNumber_;
}

int ListScriptRecordingResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListScriptRecordingResult::getCode()const
{
	return code_;
}

bool ListScriptRecordingResult::getSuccess()const
{
	return success_;
}

