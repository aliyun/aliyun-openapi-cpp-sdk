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

#include <alibabacloud/green/model/CreateAuditCallbackResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

CreateAuditCallbackResult::CreateAuditCallbackResult() :
	ServiceResult()
{}

CreateAuditCallbackResult::CreateAuditCallbackResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateAuditCallbackResult::~CreateAuditCallbackResult()
{}

void CreateAuditCallbackResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCallbackTypes = value["CallbackTypes"]["CallbackType"];
	for (const auto &item : allCallbackTypes)
		callbackTypes_.push_back(item.asString());
	auto allCallbackSuggestions = value["CallbackSuggestions"]["CallbackSuggestion"];
	for (const auto &item : allCallbackSuggestions)
		callbackSuggestions_.push_back(item.asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["Seed"].isNull())
		seed_ = value["Seed"].asString();
	if(!value["CryptType"].isNull())
		cryptType_ = value["CryptType"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifiedTime"].isNull())
		modifiedTime_ = value["ModifiedTime"].asString();

}

std::string CreateAuditCallbackResult::getCryptType()const
{
	return cryptType_;
}

std::string CreateAuditCallbackResult::getModifiedTime()const
{
	return modifiedTime_;
}

std::string CreateAuditCallbackResult::getSeed()const
{
	return seed_;
}

std::string CreateAuditCallbackResult::getCreateTime()const
{
	return createTime_;
}

std::vector<std::string> CreateAuditCallbackResult::getCallbackTypes()const
{
	return callbackTypes_;
}

long CreateAuditCallbackResult::getId()const
{
	return id_;
}

std::vector<std::string> CreateAuditCallbackResult::getCallbackSuggestions()const
{
	return callbackSuggestions_;
}

std::string CreateAuditCallbackResult::getUrl()const
{
	return url_;
}

std::string CreateAuditCallbackResult::getName()const
{
	return name_;
}

