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

#include <alibabacloud/cloudesl/model/DescribeEventReasonResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeEventReasonResult::DescribeEventReasonResult() :
	ServiceResult()
{}

DescribeEventReasonResult::DescribeEventReasonResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventReasonResult::~DescribeEventReasonResult()
{}

void DescribeEventReasonResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventReasonsNode = value["EventReasons"]["EventReason"];
	for (auto valueEventReasonsEventReason : allEventReasonsNode)
	{
		EventReason eventReasonsObject;
		if(!valueEventReasonsEventReason["Category"].isNull())
			eventReasonsObject.category = valueEventReasonsEventReason["Category"].asString();
		auto allReasons = value["Reasons"]["Reason"];
		for (auto value : allReasons)
			eventReasonsObject.reasons.push_back(value.asString());
		auto allReasonI18ns = value["ReasonI18ns"]["ReasonI18n"];
		for (auto value : allReasonI18ns)
			eventReasonsObject.reasonI18ns.push_back(value.asString());
		eventReasons_.push_back(eventReasonsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string DescribeEventReasonResult::getMessage()const
{
	return message_;
}

std::string DescribeEventReasonResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeEventReasonResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeEventReasonResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeEventReasonResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeEventReasonResult::getCode()const
{
	return code_;
}

bool DescribeEventReasonResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeEventReasonResult::EventReason> DescribeEventReasonResult::getEventReasons()const
{
	return eventReasons_;
}

