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

#include <alibabacloud/retailcloud/model/UpdateAppMonitorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

UpdateAppMonitorsResult::UpdateAppMonitorsResult() :
	ServiceResult()
{}

UpdateAppMonitorsResult::UpdateAppMonitorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateAppMonitorsResult::~UpdateAppMonitorsResult()
{}

void UpdateAppMonitorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateAppMonitorsResult::getMsg()const
{
	return msg_;
}

std::string UpdateAppMonitorsResult::getCode()const
{
	return code_;
}

bool UpdateAppMonitorsResult::getSuccess()const
{
	return success_;
}

