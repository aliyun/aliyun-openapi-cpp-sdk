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

#include <alibabacloud/ccc/model/GetCaseFileUploadUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetCaseFileUploadUrlResult::GetCaseFileUploadUrlResult() :
	ServiceResult()
{}

GetCaseFileUploadUrlResult::GetCaseFileUploadUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCaseFileUploadUrlResult::~GetCaseFileUploadUrlResult()
{}

void GetCaseFileUploadUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Url"].isNull())
		data_.url = dataNode["Url"].asString();
	if(!dataNode["CaseFileKey"].isNull())
		data_.caseFileKey = dataNode["CaseFileKey"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetCaseFileUploadUrlResult::getMessage()const
{
	return message_;
}

int GetCaseFileUploadUrlResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetCaseFileUploadUrlResult::Data GetCaseFileUploadUrlResult::getData()const
{
	return data_;
}

std::string GetCaseFileUploadUrlResult::getCode()const
{
	return code_;
}

