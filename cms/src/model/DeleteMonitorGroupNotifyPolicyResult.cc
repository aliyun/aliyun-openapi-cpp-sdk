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

#include <alibabacloud/cms/model/DeleteMonitorGroupNotifyPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DeleteMonitorGroupNotifyPolicyResult::DeleteMonitorGroupNotifyPolicyResult() :
	ServiceResult()
{}

DeleteMonitorGroupNotifyPolicyResult::DeleteMonitorGroupNotifyPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteMonitorGroupNotifyPolicyResult::~DeleteMonitorGroupNotifyPolicyResult()
{}

void DeleteMonitorGroupNotifyPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Result"].isNull())
		result_ = std::stoi(value["Result"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string DeleteMonitorGroupNotifyPolicyResult::getMessage()const
{
	return message_;
}

std::string DeleteMonitorGroupNotifyPolicyResult::getCode()const
{
	return code_;
}

std::string DeleteMonitorGroupNotifyPolicyResult::getSuccess()const
{
	return success_;
}

int DeleteMonitorGroupNotifyPolicyResult::getResult()const
{
	return result_;
}

