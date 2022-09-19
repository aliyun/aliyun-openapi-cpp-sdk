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

#include <alibabacloud/viapi-regen/model/GetUploadPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Viapi_regen;
using namespace AlibabaCloud::Viapi_regen::Model;

GetUploadPolicyResult::GetUploadPolicyResult() :
	ServiceResult()
{}

GetUploadPolicyResult::GetUploadPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUploadPolicyResult::~GetUploadPolicyResult()
{}

void GetUploadPolicyResult::parse(const std::string &payload)
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
	if(!dataNode["ObjectKey"].isNull())
		data_.objectKey = dataNode["ObjectKey"].asString();
	if(!dataNode["FileName"].isNull())
		data_.fileName = dataNode["FileName"].asString();
	if(!dataNode["BucketName"].isNull())
		data_.bucketName = dataNode["BucketName"].asString();
	if(!dataNode["Endpoint"].isNull())
		data_.endpoint = dataNode["Endpoint"].asString();
	if(!dataNode["OriginalFilename"].isNull())
		data_.originalFilename = dataNode["OriginalFilename"].asString();
	if(!dataNode["SignedHttpUrl"].isNull())
		data_.signedHttpUrl = dataNode["SignedHttpUrl"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::string GetUploadPolicyResult::getMessage()const
{
	return message_;
}

GetUploadPolicyResult::Data GetUploadPolicyResult::getData()const
{
	return data_;
}

std::string GetUploadPolicyResult::getCode()const
{
	return code_;
}

