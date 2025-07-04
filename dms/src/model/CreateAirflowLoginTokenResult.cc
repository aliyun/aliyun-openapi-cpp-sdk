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

#include <alibabacloud/dms/model/CreateAirflowLoginTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms;
using namespace AlibabaCloud::Dms::Model;

CreateAirflowLoginTokenResult::CreateAirflowLoginTokenResult() :
	ServiceResult()
{}

CreateAirflowLoginTokenResult::CreateAirflowLoginTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAirflowLoginTokenResult::~CreateAirflowLoginTokenResult()
{}

void CreateAirflowLoginTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Token"].isNull())
		data_.token = dataNode["Token"].asString();
	if(!dataNode["Host"].isNull())
		data_.host = dataNode["Host"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string CreateAirflowLoginTokenResult::getMessage()const
{
	return message_;
}

int CreateAirflowLoginTokenResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateAirflowLoginTokenResult::Data CreateAirflowLoginTokenResult::getData()const
{
	return data_;
}

std::string CreateAirflowLoginTokenResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateAirflowLoginTokenResult::getCode()const
{
	return code_;
}

bool CreateAirflowLoginTokenResult::getSuccess()const
{
	return success_;
}

