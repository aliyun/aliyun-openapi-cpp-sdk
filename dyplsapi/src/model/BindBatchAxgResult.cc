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

#include <alibabacloud/dyplsapi/model/BindBatchAxgResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dyplsapi;
using namespace AlibabaCloud::Dyplsapi::Model;

BindBatchAxgResult::BindBatchAxgResult() :
	ServiceResult()
{}

BindBatchAxgResult::BindBatchAxgResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BindBatchAxgResult::~BindBatchAxgResult()
{}

void BindBatchAxgResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSecretBindListNode = value["SecretBindList"]["SecretBind"];
	for (auto valueSecretBindListSecretBind : allSecretBindListNode)
	{
		SecretBind secretBindListObject;
		if(!valueSecretBindListSecretBind["SecretNo"].isNull())
			secretBindListObject.secretNo = valueSecretBindListSecretBind["SecretNo"].asString();
		if(!valueSecretBindListSecretBind["SubsId"].isNull())
			secretBindListObject.subsId = valueSecretBindListSecretBind["SubsId"].asString();
		if(!valueSecretBindListSecretBind["Extension"].isNull())
			secretBindListObject.extension = valueSecretBindListSecretBind["Extension"].asString();
		if(!valueSecretBindListSecretBind["GroupId"].isNull())
			secretBindListObject.groupId = valueSecretBindListSecretBind["GroupId"].asString();
		if(!valueSecretBindListSecretBind["PhoneNoA"].isNull())
			secretBindListObject.phoneNoA = valueSecretBindListSecretBind["PhoneNoA"].asString();
		if(!valueSecretBindListSecretBind["Code"].isNull())
			secretBindListObject.code = valueSecretBindListSecretBind["Code"].asString();
		if(!valueSecretBindListSecretBind["Message"].isNull())
			secretBindListObject.message = valueSecretBindListSecretBind["Message"].asString();
		secretBindList_.push_back(secretBindListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string BindBatchAxgResult::getMessage()const
{
	return message_;
}

std::vector<BindBatchAxgResult::SecretBind> BindBatchAxgResult::getSecretBindList()const
{
	return secretBindList_;
}

std::string BindBatchAxgResult::getCode()const
{
	return code_;
}

