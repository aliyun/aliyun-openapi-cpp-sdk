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

#include <alibabacloud/csb/model/FindCredentialsListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindCredentialsListResult::FindCredentialsListResult() :
	ServiceResult()
{}

FindCredentialsListResult::FindCredentialsListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindCredentialsListResult::~FindCredentialsListResult()
{}

void FindCredentialsListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allCredentialList = value["CredentialList"]["Credential"];
	for (auto value : allCredentialList)
	{
		Data::Credential credentialObject;
		if(!value["GmtCreate"].isNull())
			credentialObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["Id"].isNull())
			credentialObject.id = std::stol(value["Id"].asString());
		if(!value["Name"].isNull())
			credentialObject.name = value["Name"].asString();
		if(!value["OwnerAttr"].isNull())
			credentialObject.ownerAttr = value["OwnerAttr"].asString();
		if(!value["UserId"].isNull())
			credentialObject.userId = value["UserId"].asString();
		auto currentCredentialNode = value["CurrentCredential"];
		if(!currentCredentialNode["AccessKey"].isNull())
			credentialObject.currentCredential.accessKey = currentCredentialNode["AccessKey"].asString();
		if(!currentCredentialNode["SecretKey"].isNull())
			credentialObject.currentCredential.secretKey = currentCredentialNode["SecretKey"].asString();
		auto newCredentialNode = value["NewCredential"];
		if(!newCredentialNode["AccessKey"].isNull())
			credentialObject.newCredential.accessKey = newCredentialNode["AccessKey"].asString();
		if(!newCredentialNode["SecretKey"].isNull())
			credentialObject.newCredential.secretKey = newCredentialNode["SecretKey"].asString();
		data_.credentialList.push_back(credentialObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindCredentialsListResult::getMessage()const
{
	return message_;
}

FindCredentialsListResult::Data FindCredentialsListResult::getData()const
{
	return data_;
}

int FindCredentialsListResult::getCode()const
{
	return code_;
}

