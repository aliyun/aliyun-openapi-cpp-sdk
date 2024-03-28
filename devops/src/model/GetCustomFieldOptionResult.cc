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

#include <alibabacloud/devops/model/GetCustomFieldOptionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetCustomFieldOptionResult::GetCustomFieldOptionResult() :
	ServiceResult()
{}

GetCustomFieldOptionResult::GetCustomFieldOptionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCustomFieldOptionResult::~GetCustomFieldOptionResult()
{}

void GetCustomFieldOptionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allfiledsNode = value["fileds"]["field"];
	for (auto valuefiledsfield : allfiledsNode)
	{
		Field filedsObject;
		if(!valuefiledsfield["displayValue"].isNull())
			filedsObject.displayValue = valuefiledsfield["displayValue"].asString();
		if(!valuefiledsfield["fieldIdentifier"].isNull())
			filedsObject.fieldIdentifier = valuefiledsfield["fieldIdentifier"].asString();
		if(!valuefiledsfield["identifier"].isNull())
			filedsObject.identifier = valuefiledsfield["identifier"].asString();
		if(!valuefiledsfield["level"].isNull())
			filedsObject.level = std::stol(valuefiledsfield["level"].asString());
		if(!valuefiledsfield["position"].isNull())
			filedsObject.position = std::stol(valuefiledsfield["position"].asString());
		if(!valuefiledsfield["value"].isNull())
			filedsObject.value = valuefiledsfield["value"].asString();
		if(!valuefiledsfield["valueEn"].isNull())
			filedsObject.valueEn = valuefiledsfield["valueEn"].asString();
		fileds_.push_back(filedsObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::vector<GetCustomFieldOptionResult::Field> GetCustomFieldOptionResult::getfileds()const
{
	return fileds_;
}

std::string GetCustomFieldOptionResult::getRequestId()const
{
	return requestId_;
}

std::string GetCustomFieldOptionResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string GetCustomFieldOptionResult::getErrorCode()const
{
	return errorCode_;
}

bool GetCustomFieldOptionResult::getSuccess()const
{
	return success_;
}

