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

#include <alibabacloud/companyreg/model/GenerateCompanyRegUploadPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GenerateCompanyRegUploadPolicyResult::GenerateCompanyRegUploadPolicyResult() :
	ServiceResult()
{}

GenerateCompanyRegUploadPolicyResult::GenerateCompanyRegUploadPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateCompanyRegUploadPolicyResult::~GenerateCompanyRegUploadPolicyResult()
{}

void GenerateCompanyRegUploadPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
	if(!value["EncodedPolicy"].isNull())
		encodedPolicy_ = value["EncodedPolicy"].asString();
	if(!value["Min"].isNull())
		min_ = std::stol(value["Min"].asString());
	if(!value["Max"].isNull())
		max_ = std::stol(value["Max"].asString());
	if(!value["Encryption"].isNull())
		encryption_ = value["Encryption"].asString();

}

std::string GenerateCompanyRegUploadPolicyResult::getFileDir()const
{
	return fileDir_;
}

std::string GenerateCompanyRegUploadPolicyResult::getEncodedPolicy()const
{
	return encodedPolicy_;
}

long GenerateCompanyRegUploadPolicyResult::getMin()const
{
	return min_;
}

std::string GenerateCompanyRegUploadPolicyResult::getAccessId()const
{
	return accessId_;
}

long GenerateCompanyRegUploadPolicyResult::getMax()const
{
	return max_;
}

std::string GenerateCompanyRegUploadPolicyResult::getSignature()const
{
	return signature_;
}

std::string GenerateCompanyRegUploadPolicyResult::getHost()const
{
	return host_;
}

std::string GenerateCompanyRegUploadPolicyResult::getEncryption()const
{
	return encryption_;
}

long GenerateCompanyRegUploadPolicyResult::getExpireTime()const
{
	return expireTime_;
}

