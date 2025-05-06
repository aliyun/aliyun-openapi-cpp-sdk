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

#include <alibabacloud/itag/model/GetGroupHandlingSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Itag;
using namespace AlibabaCloud::Itag::Model;

GetGroupHandlingSummaryResult::GetGroupHandlingSummaryResult() :
	ServiceResult()
{}

GetGroupHandlingSummaryResult::GetGroupHandlingSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGroupHandlingSummaryResult::~GetGroupHandlingSummaryResult()
{}

void GetGroupHandlingSummaryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Marking"].isNull())
		result_.marking = std::stoi(resultNode["Marking"].asString());
	if(!resultNode["Checking"].isNull())
		result_.checking = std::stoi(resultNode["Checking"].asString());
	if(!resultNode["MarkingFromReject"].isNull())
		result_.markingFromReject = std::stoi(resultNode["MarkingFromReject"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["ErrInfo"].isNull())
		errInfo_ = value["ErrInfo"].asString();
	if(!value["Succ"].isNull())
		succ_ = value["Succ"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetGroupHandlingSummaryResult::getMsg()const
{
	return msg_;
}

std::string GetGroupHandlingSummaryResult::getRequestId()const
{
	return requestId_;
}

bool GetGroupHandlingSummaryResult::getSucc()const
{
	return succ_;
}

std::string GetGroupHandlingSummaryResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetGroupHandlingSummaryResult::getErrInfo()const
{
	return errInfo_;
}

int GetGroupHandlingSummaryResult::getCode()const
{
	return code_;
}

GetGroupHandlingSummaryResult::Result GetGroupHandlingSummaryResult::getResult()const
{
	return result_;
}

