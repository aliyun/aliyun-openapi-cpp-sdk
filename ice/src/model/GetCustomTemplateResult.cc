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

#include <alibabacloud/ice/model/GetCustomTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetCustomTemplateResult::GetCustomTemplateResult() :
	ServiceResult()
{}

GetCustomTemplateResult::GetCustomTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCustomTemplateResult::~GetCustomTemplateResult()
{}

void GetCustomTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto customTemplateNode = value["CustomTemplate"];
	if(!customTemplateNode["TemplateId"].isNull())
		customTemplate_.templateId = customTemplateNode["TemplateId"].asString();
	if(!customTemplateNode["TemplateName"].isNull())
		customTemplate_.templateName = customTemplateNode["TemplateName"].asString();
	if(!customTemplateNode["Type"].isNull())
		customTemplate_.type = std::stoi(customTemplateNode["Type"].asString());
	if(!customTemplateNode["TypeName"].isNull())
		customTemplate_.typeName = customTemplateNode["TypeName"].asString();
	if(!customTemplateNode["Subtype"].isNull())
		customTemplate_.subtype = std::stoi(customTemplateNode["Subtype"].asString());
	if(!customTemplateNode["SubtypeName"].isNull())
		customTemplate_.subtypeName = customTemplateNode["SubtypeName"].asString();
	if(!customTemplateNode["Status"].isNull())
		customTemplate_.status = customTemplateNode["Status"].asString();
	if(!customTemplateNode["IsDefault"].isNull())
		customTemplate_.isDefault = customTemplateNode["IsDefault"].asString() == "true";
	if(!customTemplateNode["TemplateConfig"].isNull())
		customTemplate_.templateConfig = customTemplateNode["TemplateConfig"].asString();
	if(!customTemplateNode["Version"].isNull())
		customTemplate_.version = std::stoi(customTemplateNode["Version"].asString());
	if(!customTemplateNode["AppId"].isNull())
		customTemplate_.appId = customTemplateNode["AppId"].asString();
	if(!customTemplateNode["CreateTime"].isNull())
		customTemplate_.createTime = customTemplateNode["CreateTime"].asString();
	if(!customTemplateNode["ModifiedTime"].isNull())
		customTemplate_.modifiedTime = customTemplateNode["ModifiedTime"].asString();

}

GetCustomTemplateResult::CustomTemplate GetCustomTemplateResult::getCustomTemplate()const
{
	return customTemplate_;
}

