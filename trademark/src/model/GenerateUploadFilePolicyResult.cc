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

#include <alibabacloud/trademark/model/GenerateUploadFilePolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Trademark;
using namespace AlibabaCloud::Trademark::Model;

GenerateUploadFilePolicyResult::GenerateUploadFilePolicyResult() :
	ServiceResult()
{}

GenerateUploadFilePolicyResult::GenerateUploadFilePolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateUploadFilePolicyResult::~GenerateUploadFilePolicyResult()
{}

void GenerateUploadFilePolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EncodedPolicy"].isNull())
		encodedPolicy_ = value["EncodedPolicy"].asString();
	if(!value["AccessId"].isNull())
		accessId_ = value["AccessId"].asString();
	if(!value["Signature"].isNull())
		signature_ = value["Signature"].asString();
	if(!value["FileDir"].isNull())
		fileDir_ = value["FileDir"].asString();
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = std::stol(value["ExpireTime"].asString());

}

std::string GenerateUploadFilePolicyResult::getFileDir()const
{
	return fileDir_;
}

std::string GenerateUploadFilePolicyResult::getEncodedPolicy()const
{
	return encodedPolicy_;
}

std::string GenerateUploadFilePolicyResult::getAccessId()const
{
	return accessId_;
}

std::string GenerateUploadFilePolicyResult::getSignature()const
{
	return signature_;
}

std::string GenerateUploadFilePolicyResult::getHost()const
{
	return host_;
}

long GenerateUploadFilePolicyResult::getExpireTime()const
{
	return expireTime_;
}

