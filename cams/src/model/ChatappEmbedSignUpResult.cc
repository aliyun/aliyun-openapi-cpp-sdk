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

#include <alibabacloud/cams/model/ChatappEmbedSignUpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cams;
using namespace AlibabaCloud::Cams::Model;

ChatappEmbedSignUpResult::ChatappEmbedSignUpResult() :
	ServiceResult()
{}

ChatappEmbedSignUpResult::ChatappEmbedSignUpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ChatappEmbedSignUpResult::~ChatappEmbedSignUpResult()
{}

void ChatappEmbedSignUpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWabasNode = value["Wabas"]["Waba列表"];
	for (auto valueWabasWaba列表 : allWabasNode)
	{
		Waba列表 wabasObject;
		if(!valueWabasWaba列表["Id"].isNull())
			wabasObject.id = valueWabasWaba列表["Id"].asString();
		if(!valueWabasWaba列表["Name"].isNull())
			wabasObject.name = valueWabasWaba列表["Name"].asString();
		if(!valueWabasWaba列表["Currency"].isNull())
			wabasObject.currency = valueWabasWaba列表["Currency"].asString();
		if(!valueWabasWaba列表["AccountReviewStatus"].isNull())
			wabasObject.accountReviewStatus = valueWabasWaba列表["AccountReviewStatus"].asString();
		if(!valueWabasWaba列表["MessageTemplateNamespace"].isNull())
			wabasObject.messageTemplateNamespace = valueWabasWaba列表["MessageTemplateNamespace"].asString();
		wabas_.push_back(wabasObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["AccessDeniedDetail"].isNull())
		accessDeniedDetail_ = value["AccessDeniedDetail"].asString();

}

std::string ChatappEmbedSignUpResult::getAccessDeniedDetail()const
{
	return accessDeniedDetail_;
}

std::string ChatappEmbedSignUpResult::getMessage()const
{
	return message_;
}

std::vector<ChatappEmbedSignUpResult::Waba列表> ChatappEmbedSignUpResult::getWabas()const
{
	return wabas_;
}

std::string ChatappEmbedSignUpResult::getCode()const
{
	return code_;
}

