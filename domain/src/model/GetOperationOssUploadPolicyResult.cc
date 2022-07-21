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

#include <alibabacloud/domain/model/GetOperationOssUploadPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

GetOperationOssUploadPolicyResult::GetOperationOssUploadPolicyResult() :
	ServiceResult()
{}

GetOperationOssUploadPolicyResult::GetOperationOssUploadPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOperationOssUploadPolicyResult::~GetOperationOssUploadPolicyResult()
{}

void GetOperationOssUploadPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["FileDir"].isNull())
		fileDir_ = value["FileDir"].asString();
	if(!value["EncodedPolicy"].isNull())
		encodedPolicy_ = value["EncodedPolicy"].asString();
	if(!value["Accessid"].isNull())
		accessid_ = value["Accessid"].asString();
	if(!value["Signature"].isNull())
		signature_ = value["Signature"].asString();
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();

}

std::string GetOperationOssUploadPolicyResult::getFileDir()const
{
	return fileDir_;
}

std::string GetOperationOssUploadPolicyResult::getEncodedPolicy()const
{
	return encodedPolicy_;
}

std::string GetOperationOssUploadPolicyResult::getAccessid()const
{
	return accessid_;
}

std::string GetOperationOssUploadPolicyResult::getSignature()const
{
	return signature_;
}

std::string GetOperationOssUploadPolicyResult::getHost()const
{
	return host_;
}

std::string GetOperationOssUploadPolicyResult::getExpireTime()const
{
	return expireTime_;
}

