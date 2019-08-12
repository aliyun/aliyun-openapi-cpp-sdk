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

#include <alibabacloud/sts/model/AssumeRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sts;
using namespace AlibabaCloud::Sts::Model;

AssumeRoleResult::AssumeRoleResult() :
	ServiceResult()
{}

AssumeRoleResult::AssumeRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AssumeRoleResult::~AssumeRoleResult()
{}

void AssumeRoleResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto credentialsNode = value["Credentials"];
	if(!credentialsNode["SecurityToken"].isNull())
		credentials_.securityToken = credentialsNode["SecurityToken"].asString();
	if(!credentialsNode["AccessKeySecret"].isNull())
		credentials_.accessKeySecret = credentialsNode["AccessKeySecret"].asString();
	if(!credentialsNode["AccessKeyId"].isNull())
		credentials_.accessKeyId = credentialsNode["AccessKeyId"].asString();
	if(!credentialsNode["Expiration"].isNull())
		credentials_.expiration = credentialsNode["Expiration"].asString();
	auto assumedRoleUserNode = value["AssumedRoleUser"];
	if(!assumedRoleUserNode["Arn"].isNull())
		assumedRoleUser_.arn = assumedRoleUserNode["Arn"].asString();
	if(!assumedRoleUserNode["AssumedRoleId"].isNull())
		assumedRoleUser_.assumedRoleId = assumedRoleUserNode["AssumedRoleId"].asString();

}

AssumeRoleResult::AssumedRoleUser AssumeRoleResult::getAssumedRoleUser()const
{
	return assumedRoleUser_;
}

AssumeRoleResult::Credentials AssumeRoleResult::getCredentials()const
{
	return credentials_;
}

