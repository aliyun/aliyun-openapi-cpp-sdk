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
	auto allResult = value["Result"];
	for (auto value : allResult)
	{
		Result resultObject;
		if(!value["AlertName"].isNull())
			resultObject.alertName = value["AlertName"].asString();
		if(!value["Dimensions"].isNull())
			resultObject.dimensions = value["Dimensions"].asString();
		if(!value["Type"].isNull())
			resultObject.type = value["Type"].asString();
		if(!value["Id"].isNull())
			resultObject.id = value["Id"].asString();
		if(!value["StartTime"].isNull())
			resultObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			resultObject.endTime = std::stol(value["EndTime"].asString());
		result_.push_back(resultObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();
	if(!value["traceId"].isNull())
		traceId_ = value["traceId"].asString();

}

std::string GetNotifyPolicyResult::getMessage()const
{
	return message_;
}

std::string GetNotifyPolicyResult::getTraceId()const
{
	return traceId_;
}

std::string GetNotifyPolicyResult::getCode()const
{
	return code_;
}

std::string GetNotifyPolicyResult::getSuccess()const
{
	return success_;
}

std::vector<GetNotifyPolicyResult::Result> GetNotifyPolicyResult::getResult()const
{
	return result_;
}

