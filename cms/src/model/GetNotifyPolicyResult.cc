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

#include <alibabacloud/cms/model/GetNotifyPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

GetNotifyPolicyResult::GetNotifyPolicyResult() :
	ServiceResult()
{}

GetNotifyPolicyResult::GetNotifyPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNotifyPolicyResult::~GetNotifyPolicyResult()
{}

void GetNotifyPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AlertName"].isNull())
		result_.alertName = resultNode["AlertName"].asString();
	if(!resultNode["Dimensions"].isNull())
		result_.dimensions = resultNode["Dimensions"].asString();
	if(!resultNode["Type"].isNull())
		result_.type = resultNode["Type"].asString();
	if(!resultNode["Id"].isNull())
		result_.id = resultNode["Id"].asString();
	if(!resultNode["StartTime"].isNull())
		result_.startTime = std::stol(resultNode["StartTime"].asString());
	if(!resultNode["EndTime"].isNull())
		result_.endTime = std::stol(resultNode["EndTime"].asString());
	if(!resultNode["GroupId"].isNull())
		result_.groupId = resultNode["GroupId"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string GetNotifyPolicyResult::getMessage()const
{
	return message_;
}

std::string GetNotifyPolicyResult::getCode()const
{
	return code_;
}

std::string GetNotifyPolicyResult::getSuccess()const
{
	return success_;
}

GetNotifyPolicyResult::Result GetNotifyPolicyResult::getResult()const
{
	return result_;
}

