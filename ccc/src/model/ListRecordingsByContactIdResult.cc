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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allRecordings = value["Recordings"]["Recording"];
	for (auto value : allRecordings)
	{
		Recording recordingsObject;
		if(!value["ContactId"].isNull())
			recordingsObject.contactId = value["ContactId"].asString();
		if(!value["ContactType"].isNull())
			recordingsObject.contactType = value["ContactType"].asString();
		if(!value["AgentId"].isNull())
			recordingsObject.agentId = value["AgentId"].asString();
		if(!value["AgentName"].isNull())
			recordingsObject.agentName = value["AgentName"].asString();
		if(!value["CallingNumber"].isNull())
			recordingsObject.callingNumber = value["CallingNumber"].asString();
		if(!value["CalledNumber"].isNull())
			recordingsObject.calledNumber = value["CalledNumber"].asString();
		if(!value["StartTime"].isNull())
			recordingsObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["Duration"].isNull())
			recordingsObject.duration = std::stoi(value["Duration"].asString());
		if(!value["FileName"].isNull())
			recordingsObject.fileName = value["FileName"].asString();
		if(!value["FilePath"].isNull())
			recordingsObject.filePath = value["FilePath"].asString();
		if(!value["FileDescription"].isNull())
			recordingsObject.fileDescription = value["FileDescription"].asString();
		if(!value["Channel"].isNull())
			recordingsObject.channel = value["Channel"].asString();
		if(!value["InstanceId"].isNull())
			recordingsObject.instanceId = value["InstanceId"].asString();
		if(!value["QualityCheckTid"].isNull())
			recordingsObject.qualityCheckTid = value["QualityCheckTid"].asString();
		if(!value["QualityCheckTaskId"].isNull())
			recordingsObject.qualityCheckTaskId = value["QualityCheckTaskId"].asString();
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

