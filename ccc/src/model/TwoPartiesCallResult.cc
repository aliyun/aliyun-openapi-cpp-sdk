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

#include <alibabacloud/ccc/model/TwoPartiesCallResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

TwoPartiesCallResult::TwoPartiesCallResult() :
	ServiceResult()
{}

TwoPartiesCallResult::TwoPartiesCallResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TwoPartiesCallResult::~TwoPartiesCallResult()
{}

void TwoPartiesCallResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["StatusCode"].isNull())
		statusCode_ = value["StatusCode"].asString();
	if(!value["StatusDesc"].isNull())
		statusDesc_ = value["StatusDesc"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["TimeStamp"].isNull())
		timeStamp_ = value["TimeStamp"].asString();

}

std::string TwoPartiesCallResult::getStatusDesc()const
{
	return statusDesc_;
}

std::string TwoPartiesCallResult::getTaskId()const
{
	return taskId_;
}

std::string TwoPartiesCallResult::getMessage()const
{
	return message_;
}

int TwoPartiesCallResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string TwoPartiesCallResult::getCode()const
{
	return code_;
}

std::string TwoPartiesCallResult::getStatusCode()const
{
	return statusCode_;
}

bool TwoPartiesCallResult::getSuccess()const
{
	return success_;
}

std::string TwoPartiesCallResult::getTimeStamp()const
{
	return timeStamp_;
}

