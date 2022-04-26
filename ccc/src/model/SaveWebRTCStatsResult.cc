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

#include <alibabacloud/ccc/model/SaveWebRTCStatsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

SaveWebRTCStatsResult::SaveWebRTCStatsResult() :
	ServiceResult()
{}

SaveWebRTCStatsResult::SaveWebRTCStatsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SaveWebRTCStatsResult::~SaveWebRTCStatsResult()
{}

void SaveWebRTCStatsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stol(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TimeStamp"].isNull())
		timeStamp_ = std::stol(value["TimeStamp"].asString());
	if(!value["RowCount"].isNull())
		rowCount_ = std::stol(value["RowCount"].asString());

}

std::string SaveWebRTCStatsResult::getMessage()const
{
	return message_;
}

long SaveWebRTCStatsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

long SaveWebRTCStatsResult::getRowCount()const
{
	return rowCount_;
}

std::string SaveWebRTCStatsResult::getCode()const
{
	return code_;
}

bool SaveWebRTCStatsResult::getSuccess()const
{
	return success_;
}

long SaveWebRTCStatsResult::getTimeStamp()const
{
	return timeStamp_;
}

