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

#include <alibabacloud/ccc/model/ListRecordingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListRecordingsResult::ListRecordingsResult() :
	ServiceResult()
{}

ListRecordingsResult::ListRecordingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRecordingsResult::~ListRecordingsResult()
{}

void ListRecordingsResult::parse(const std::string &payload)
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
	auto allList = value["List"]["Recording"];
	for (auto value : allList)
	{
		Recordings::Recording recordingObject;
		if(!value["ContactId"].isNull())
			recordingObject.contactId = value["ContactId"].asString();
		if(!value["ContactType"].isNull())
			recordingObject.contactType = value["ContactType"].asString();
		if(!value["AgentId"].isNull())
			recordingObject.agentId = value["AgentId"].asString();
		if(!value["AgentName"].isNull())
			recordingObject.agentName = value["AgentName"].asString();
		if(!value["CallingNumber"].isNull())
			recordingObject.callingNumber = value["CallingNumber"].asString();
		if(!value["CalledNumber"].isNull())
			recordingObject.calledNumber = value["CalledNumber"].asString();
		if(!value["StartTime"].isNull())
			recordingObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["Duration"].isNull())
			recordingObject.duration = std::stoi(value["Duration"].asString());
		if(!value["FileName"].isNull())
			recordingObject.fileName = value["FileName"].asString();
		if(!value["FilePath"].isNull())
			recordingObject.filePath = value["FilePath"].asString();
		if(!value["FileDescription"].isNull())
			recordingObject.fileDescription = value["FileDescription"].asString();
		if(!value["Channel"].isNull())
			recordingObject.channel = value["Channel"].asString();
		if(!value["InstanceId"].isNull())
			recordingObject.instanceId = value["InstanceId"].asString();
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

std::string ListRecordingsResult::getMessage()const
{
	return message_;
}

int ListRecordingsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListRecordingsResult::Recordings ListRecordingsResult::getRecordings()const
{
	return recordings_;
}

std::string ListRecordingsResult::getCode()const
{
	return code_;
}

bool ListRecordingsResult::getSuccess()const
{
	return success_;
}

