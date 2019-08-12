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

#include <alibabacloud/rtc/model/RemoveParticipantsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rtc;
using namespace AlibabaCloud::Rtc::Model;

RemoveParticipantsResult::RemoveParticipantsResult() :
	ServiceResult()
{}

RemoveParticipantsResult::RemoveParticipantsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RemoveParticipantsResult::~RemoveParticipantsResult()
{}

void RemoveParticipantsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allParticipants = value["Participants"]["Participant"];
	for (auto value : allParticipants)
	{
		Participant participantsObject;
		if(!value["Id"].isNull())
			participantsObject.id = value["Id"].asString();
		if(!value["Code"].isNull())
			participantsObject.code = value["Code"].asString();
		if(!value["Message"].isNull())
			participantsObject.message = value["Message"].asString();
		participants_.push_back(participantsObject);
	}
	if(!value["ConferenceId"].isNull())
		conferenceId_ = value["ConferenceId"].asString();

}

std::string RemoveParticipantsResult::getConferenceId()const
{
	return conferenceId_;
}

std::vector<RemoveParticipantsResult::Participant> RemoveParticipantsResult::getParticipants()const
{
	return participants_;
}

