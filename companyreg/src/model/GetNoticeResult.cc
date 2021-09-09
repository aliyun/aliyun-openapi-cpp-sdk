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

#include <alibabacloud/companyreg/model/GetNoticeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetNoticeResult::GetNoticeResult() :
	ServiceResult()
{}

GetNoticeResult::GetNoticeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNoticeResult::~GetNoticeResult()
{}

void GetNoticeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Period"].isNull())
		period_ = value["Period"].asString();
	if(!value["MessagePromptType"].isNull())
		messagePromptType_ = value["MessagePromptType"].asString();
	if(!value["Month"].isNull())
		month_ = value["Month"].asString();

}

std::string GetNoticeResult::getMonth()const
{
	return month_;
}

std::string GetNoticeResult::getMessagePromptType()const
{
	return messagePromptType_;
}

std::string GetNoticeResult::getPeriod()const
{
	return period_;
}

