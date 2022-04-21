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

#include <alibabacloud/voicenavigator/model/GenerateUploadUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

GenerateUploadUrlResult::GenerateUploadUrlResult() :
	ServiceResult()
{}

GenerateUploadUrlResult::GenerateUploadUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateUploadUrlResult::~GenerateUploadUrlResult()
{}

void GenerateUploadUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AccessId"].isNull())
		data_.accessId = dataNode["AccessId"].asString();
	if(!dataNode["Policy"].isNull())
		data_.policy = dataNode["Policy"].asString();
	if(!dataNode["Signature"].isNull())
		data_.signature = dataNode["Signature"].asString();
	if(!dataNode["Folder"].isNull())
		data_.folder = dataNode["Folder"].asString();
	if(!dataNode["Host"].isNull())
		data_.host = dataNode["Host"].asString();
	if(!dataNode["Expire"].isNull())
		data_.expire = std::stoi(dataNode["Expire"].asString());
	if(!dataNode["Success"].isNull())
		data_.success = dataNode["Success"].asString() == "true";
	if(!dataNode["Message"].isNull())
		data_.message = dataNode["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GenerateUploadUrlResult::getMessage()const
{
	return message_;
}

int GenerateUploadUrlResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GenerateUploadUrlResult::Data GenerateUploadUrlResult::getData()const
{
	return data_;
}

std::string GenerateUploadUrlResult::getCode()const
{
	return code_;
}

bool GenerateUploadUrlResult::getSuccess()const
{
	return success_;
}

