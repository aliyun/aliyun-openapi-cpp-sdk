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

#include <alibabacloud/ccc/model/GetPredictiveTaskDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetPredictiveTaskDataResult::GetPredictiveTaskDataResult() :
	ServiceResult()
{}

GetPredictiveTaskDataResult::GetPredictiveTaskDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPredictiveTaskDataResult::~GetPredictiveTaskDataResult()
{}

void GetPredictiveTaskDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Abandoned"].isNull())
		data_.abandoned = dataNode["Abandoned"].asString() == "true";
	if(!dataNode["ContactId"].isNull())
		data_.contactId = dataNode["ContactId"].asString();
	if(!dataNode["Answered"].isNull())
		data_.answered = dataNode["Answered"].asString() == "true";
	if(!dataNode["Connected"].isNull())
		data_.connected = dataNode["Connected"].asString() == "true";
	if(!dataNode["DialDuration"].isNull())
		data_.dialDuration = std::stol(dataNode["DialDuration"].asString());
	if(!dataNode["EndTime"].isNull())
		data_.endTime = std::stol(dataNode["EndTime"].asString());
	if(!dataNode["JobGroupId"].isNull())
		data_.jobGroupId = dataNode["JobGroupId"].asString();
	if(!dataNode["QueueDuration"].isNull())
		data_.queueDuration = std::stol(dataNode["QueueDuration"].asString());
	if(!dataNode["StartTime"].isNull())
		data_.startTime = std::stol(dataNode["StartTime"].asString());
	if(!dataNode["TalkDuration"].isNull())
		data_.talkDuration = std::stol(dataNode["TalkDuration"].asString());
	if(!dataNode["TaskId"].isNull())
		data_.taskId = dataNode["TaskId"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string GetPredictiveTaskDataResult::getMessage()const
{
	return message_;
}

long GetPredictiveTaskDataResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetPredictiveTaskDataResult::Data GetPredictiveTaskDataResult::getData()const
{
	return data_;
}

std::string GetPredictiveTaskDataResult::getCode()const
{
	return code_;
}

std::string GetPredictiveTaskDataResult::getSuccess()const
{
	return success_;
}

