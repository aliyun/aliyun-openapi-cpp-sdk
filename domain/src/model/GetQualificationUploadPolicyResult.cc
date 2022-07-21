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

#include <alibabacloud/domain/model/GetQualificationUploadPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

GetQualificationUploadPolicyResult::GetQualificationUploadPolicyResult() :
	ServiceResult()
{}

GetQualificationUploadPolicyResult::GetQualificationUploadPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetQualificationUploadPolicyResult::~GetQualificationUploadPolicyResult()
{}

void GetQualificationUploadPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Policy"].isNull())
		policy_ = value["Policy"].asString();
	if(!value["Expire"].isNull())
		expire_ = value["Expire"].asString();
	if(!value["Accessid"].isNull())
		accessid_ = value["Accessid"].asString();
	if(!value["Signature"].isNull())
		signature_ = value["Signature"].asString();
	if(!value["Host"].isNull())
		host_ = value["Host"].asString();
	if(!value["Prefix"].isNull())
		prefix_ = value["Prefix"].asString();
	if(!value["Dir"].isNull())
		dir_ = value["Dir"].asString();

}

std::string GetQualificationUploadPolicyResult::getPolicy()const
{
	return policy_;
}

std::string GetQualificationUploadPolicyResult::getExpire()const
{
	return expire_;
}

std::string GetQualificationUploadPolicyResult::getAccessid()const
{
	return accessid_;
}

std::string GetQualificationUploadPolicyResult::getSignature()const
{
	return signature_;
}

std::string GetQualificationUploadPolicyResult::getHost()const
{
	return host_;
}

std::string GetQualificationUploadPolicyResult::getPrefix()const
{
	return prefix_;
}

std::string GetQualificationUploadPolicyResult::getDir()const
{
	return dir_;
}

