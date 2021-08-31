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

#include <alibabacloud/edas/model/GetPackageStorageCredentialResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetPackageStorageCredentialResult::GetPackageStorageCredentialResult() :
	ServiceResult()
{}

GetPackageStorageCredentialResult::GetPackageStorageCredentialResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPackageStorageCredentialResult::~GetPackageStorageCredentialResult()
{}

void GetPackageStorageCredentialResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto credentialNode = value["Credential"];
	if(!credentialNode["AccessKeyId"].isNull())
		credential_.accessKeyId = credentialNode["AccessKeyId"].asString();
	if(!credentialNode["AccessKeySecret"].isNull())
		credential_.accessKeySecret = credentialNode["AccessKeySecret"].asString();
	if(!credentialNode["Bucket"].isNull())
		credential_.bucket = credentialNode["Bucket"].asString();
	if(!credentialNode["Expiration"].isNull())
		credential_.expiration = credentialNode["Expiration"].asString();
	if(!credentialNode["KeyPrefix"].isNull())
		credential_.keyPrefix = credentialNode["KeyPrefix"].asString();
	if(!credentialNode["RegionId"].isNull())
		credential_.regionId = credentialNode["RegionId"].asString();
	if(!credentialNode["SecurityToken"].isNull())
		credential_.securityToken = credentialNode["SecurityToken"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

GetPackageStorageCredentialResult::Credential GetPackageStorageCredentialResult::getCredential()const
{
	return credential_;
}

std::string GetPackageStorageCredentialResult::getMessage()const
{
	return message_;
}

int GetPackageStorageCredentialResult::getCode()const
{
	return code_;
}

