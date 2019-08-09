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

#include <alibabacloud/ccc/model/DialExResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

DialExResult::DialExResult() :
	ServiceResult()
{}

DialExResult::DialExResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DialExResult::~DialExResult()
{}

void DialExResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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

std::string DialExResult::getStatusDesc()const
{
	return statusDesc_;
}

std::string DialExResult::getTaskId()const
{
	return taskId_;
}

std::string DialExResult::getMessage()const
{
	return message_;
}

int DialExResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DialExResult::getCode()const
{
	return code_;
}

std::string DialExResult::getStatusCode()const
{
	return statusCode_;
}

bool DialExResult::getSuccess()const
{
	return success_;
}

std::string DialExResult::getTimeStamp()const
{
	return timeStamp_;
}

