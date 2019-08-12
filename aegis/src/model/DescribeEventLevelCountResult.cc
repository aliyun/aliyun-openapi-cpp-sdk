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

#include <alibabacloud/aegis/model/DescribeEventLevelCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeEventLevelCountResult::DescribeEventLevelCountResult() :
	ServiceResult()
{}

DescribeEventLevelCountResult::DescribeEventLevelCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventLevelCountResult::~DescribeEventLevelCountResult()
{}

void DescribeEventLevelCountResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto eventLevelsNode = value["EventLevels"];
	if(!eventLevelsNode["Serious"].isNull())
		eventLevels_.serious = std::stoi(eventLevelsNode["Serious"].asString());
	if(!eventLevelsNode["Suspicious"].isNull())
		eventLevels_.suspicious = std::stoi(eventLevelsNode["Suspicious"].asString());
	if(!eventLevelsNode["Remind"].isNull())
		eventLevels_.remind = std::stoi(eventLevelsNode["Remind"].asString());

}

DescribeEventLevelCountResult::EventLevels DescribeEventLevelCountResult::getEventLevels()const
{
	return eventLevels_;
}

