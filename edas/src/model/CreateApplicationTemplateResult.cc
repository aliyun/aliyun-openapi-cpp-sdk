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

#include <alibabacloud/edas/model/CreateApplicationTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

CreateApplicationTemplateResult::CreateApplicationTemplateResult() :
	ServiceResult()
{}

CreateApplicationTemplateResult::CreateApplicationTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateApplicationTemplateResult::~CreateApplicationTemplateResult()
{}

void CreateApplicationTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ShowName"].isNull())
		data_.showName = dataNode["ShowName"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Attributes"].isNull())
		data_.attributes = dataNode["Attributes"].asString();
	auto sourceConfigNode = dataNode["SourceConfig"];
	if(!sourceConfigNode["SourceUrl"].isNull())
		data_.sourceConfig.sourceUrl = sourceConfigNode["SourceUrl"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CreateApplicationTemplateResult::getMessage()const
{
	return message_;
}

CreateApplicationTemplateResult::Data CreateApplicationTemplateResult::getData()const
{
	return data_;
}

int CreateApplicationTemplateResult::getCode()const
{
	return code_;
}

