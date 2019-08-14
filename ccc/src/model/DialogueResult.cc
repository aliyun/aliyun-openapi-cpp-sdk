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

#include <alibabacloud/ccc/model/DialogueResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

DialogueResult::DialogueResult() :
	ServiceResult()
{}

DialogueResult::DialogueResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DialogueResult::~DialogueResult()
{}

void DialogueResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto feedbackNode = value["Feedback"];
	if(!feedbackNode["Content"].isNull())
		feedback_.content = feedbackNode["Content"].asString();
	if(!feedbackNode["Action"].isNull())
		feedback_.action = feedbackNode["Action"].asString();
	if(!feedbackNode["ActionParams"].isNull())
		feedback_.actionParams = feedbackNode["ActionParams"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string DialogueResult::getMessage()const
{
	return message_;
}

DialogueResult::Feedback DialogueResult::getFeedback()const
{
	return feedback_;
}

int DialogueResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DialogueResult::getCode()const
{
	return code_;
}

bool DialogueResult::getSuccess()const
{
	return success_;
}

