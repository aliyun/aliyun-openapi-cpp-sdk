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

#include <alibabacloud/outboundbot/model/SaveAnnotationMissionSessionListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

SaveAnnotationMissionSessionListResult::SaveAnnotationMissionSessionListResult() :
	ServiceResult()
{}

SaveAnnotationMissionSessionListResult::SaveAnnotationMissionSessionListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SaveAnnotationMissionSessionListResult::~SaveAnnotationMissionSessionListResult()
{}

void SaveAnnotationMissionSessionListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	auto saveAnnotationMissionSessionListRequestNode = dataNode["SaveAnnotationMissionSessionListRequest"];
	if(!saveAnnotationMissionSessionListRequestNode["AnnotationMissionSessionListJsonString"].isNull())
		data_.saveAnnotationMissionSessionListRequest.annotationMissionSessionListJsonString = saveAnnotationMissionSessionListRequestNode["AnnotationMissionSessionListJsonString"].asString();
		auto allMessageList = dataNode["MessageList"]["MessageList"];
		for (auto value : allMessageList)
			data_.messageList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string SaveAnnotationMissionSessionListResult::getMessage()const
{
	return message_;
}

int SaveAnnotationMissionSessionListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

SaveAnnotationMissionSessionListResult::Data SaveAnnotationMissionSessionListResult::getData()const
{
	return data_;
}

std::string SaveAnnotationMissionSessionListResult::getCode()const
{
	return code_;
}

bool SaveAnnotationMissionSessionListResult::getSuccess()const
{
	return success_;
}

