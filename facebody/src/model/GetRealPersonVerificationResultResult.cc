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

#include <alibabacloud/facebody/model/GetRealPersonVerificationResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Facebody;
using namespace AlibabaCloud::Facebody::Model;

GetRealPersonVerificationResultResult::GetRealPersonVerificationResultResult() :
	ServiceResult()
{}

GetRealPersonVerificationResultResult::GetRealPersonVerificationResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRealPersonVerificationResultResult::~GetRealPersonVerificationResultResult()
{}

void GetRealPersonVerificationResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Passed"].isNull())
		data_.passed = dataNode["Passed"].asString() == "true";
	if(!dataNode["IdentityInfo"].isNull())
		data_.identityInfo = dataNode["IdentityInfo"].asString();
	if(!dataNode["MaterialMatch"].isNull())
		data_.materialMatch = dataNode["MaterialMatch"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetRealPersonVerificationResultResult::Data GetRealPersonVerificationResultResult::getData()const
{
	return data_;
}

std::string GetRealPersonVerificationResultResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GetRealPersonVerificationResultResult::getCode()const
{
	return code_;
}

bool GetRealPersonVerificationResultResult::getSuccess()const
{
	return success_;
}

