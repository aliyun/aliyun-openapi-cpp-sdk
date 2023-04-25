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

#include <alibabacloud/ccc/model/GetAudioFileResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetAudioFileResult::GetAudioFileResult() :
	ServiceResult()
{}

GetAudioFileResult::GetAudioFileResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAudioFileResult::~GetAudioFileResult()
{}

void GetAudioFileResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["AudioFileName"].isNull())
		data_.audioFileName = dataNode["AudioFileName"].asString();
	if(!dataNode["OssFileKey"].isNull())
		data_.ossFileKey = dataNode["OssFileKey"].asString();
	if(!dataNode["UpdatedTime"].isNull())
		data_.updatedTime = dataNode["UpdatedTime"].asString();
	if(!dataNode["AudioResourceId"].isNull())
		data_.audioResourceId = dataNode["AudioResourceId"].asString();
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["CreatedTime"].isNull())
		data_.createdTime = dataNode["CreatedTime"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetAudioFileResult::getMessage()const
{
	return message_;
}

int GetAudioFileResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetAudioFileResult::Data GetAudioFileResult::getData()const
{
	return data_;
}

std::string GetAudioFileResult::getCode()const
{
	return code_;
}

