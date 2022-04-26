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

#include <alibabacloud/ccc/model/GetDoNotCallFileUploadParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetDoNotCallFileUploadParametersResult::GetDoNotCallFileUploadParametersResult() :
	ServiceResult()
{}

GetDoNotCallFileUploadParametersResult::GetDoNotCallFileUploadParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDoNotCallFileUploadParametersResult::~GetDoNotCallFileUploadParametersResult()
{}

void GetDoNotCallFileUploadParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["FilePath"].isNull())
		data_.filePath = dataNode["FilePath"].asString();
	if(!dataNode["Signature"].isNull())
		data_.signature = dataNode["Signature"].asString();
	if(!dataNode["Host"].isNull())
		data_.host = dataNode["Host"].asString();
	if(!dataNode["Policy"].isNull())
		data_.policy = dataNode["Policy"].asString();
	if(!dataNode["ExpireTime"].isNull())
		data_.expireTime = std::stoi(dataNode["ExpireTime"].asString());
	if(!dataNode["AccessKeyId"].isNull())
		data_.accessKeyId = dataNode["AccessKeyId"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetDoNotCallFileUploadParametersResult::getMessage()const
{
	return message_;
}

int GetDoNotCallFileUploadParametersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetDoNotCallFileUploadParametersResult::Data GetDoNotCallFileUploadParametersResult::getData()const
{
	return data_;
}

std::string GetDoNotCallFileUploadParametersResult::getCode()const
{
	return code_;
}

bool GetDoNotCallFileUploadParametersResult::getSuccess()const
{
	return success_;
}

