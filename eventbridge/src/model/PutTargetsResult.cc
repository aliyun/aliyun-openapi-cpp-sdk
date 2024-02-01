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

#include <alibabacloud/eventbridge/model/PutTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

PutTargetsResult::PutTargetsResult() :
	ServiceResult()
{}

PutTargetsResult::PutTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PutTargetsResult::~PutTargetsResult()
{}

void PutTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ErrorEntriesCount"].isNull())
		data_.errorEntriesCount = std::stoi(dataNode["ErrorEntriesCount"].asString());
	auto allErrorEntriesNode = dataNode["ErrorEntries"]["ErrorEntriesItem"];
	for (auto dataNodeErrorEntriesErrorEntriesItem : allErrorEntriesNode)
	{
		Data::ErrorEntriesItem errorEntriesItemObject;
		if(!dataNodeErrorEntriesErrorEntriesItem["ErrorMessage"].isNull())
			errorEntriesItemObject.errorMessage = dataNodeErrorEntriesErrorEntriesItem["ErrorMessage"].asString();
		if(!dataNodeErrorEntriesErrorEntriesItem["ErrorCode"].isNull())
			errorEntriesItemObject.errorCode = dataNodeErrorEntriesErrorEntriesItem["ErrorCode"].asString();
		if(!dataNodeErrorEntriesErrorEntriesItem["EntryId"].isNull())
			errorEntriesItemObject.entryId = dataNodeErrorEntriesErrorEntriesItem["EntryId"].asString();
		data_.errorEntries.push_back(errorEntriesItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string PutTargetsResult::getMessage()const
{
	return message_;
}

PutTargetsResult::Data PutTargetsResult::getData()const
{
	return data_;
}

std::string PutTargetsResult::getCode()const
{
	return code_;
}

bool PutTargetsResult::getSuccess()const
{
	return success_;
}

