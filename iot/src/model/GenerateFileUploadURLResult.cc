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

#include <alibabacloud/iot/model/GenerateFileUploadURLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

GenerateFileUploadURLResult::GenerateFileUploadURLResult() :
	ServiceResult()
{}

GenerateFileUploadURLResult::GenerateFileUploadURLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateFileUploadURLResult::~GenerateFileUploadURLResult()
{}

void GenerateFileUploadURLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Key"].isNull())
		data_.key = dataNode["Key"].asString();
	if(!dataNode["Host"].isNull())
		data_.host = dataNode["Host"].asString();
	if(!dataNode["Policy"].isNull())
		data_.policy = dataNode["Policy"].asString();
	if(!dataNode["OssAccessKeyId"].isNull())
		data_.ossAccessKeyId = dataNode["OssAccessKeyId"].asString();
	if(!dataNode["Signature"].isNull())
		data_.signature = dataNode["Signature"].asString();
	if(!dataNode["ObjectStorage"].isNull())
		data_.objectStorage = dataNode["ObjectStorage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

GenerateFileUploadURLResult::Data GenerateFileUploadURLResult::getData()const
{
	return data_;
}

std::string GenerateFileUploadURLResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string GenerateFileUploadURLResult::getCode()const
{
	return code_;
}

bool GenerateFileUploadURLResult::getSuccess()const
{
	return success_;
}

