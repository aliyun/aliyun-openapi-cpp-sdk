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

#include <alibabacloud/ice/model/GetSystemTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetSystemTemplateResult::GetSystemTemplateResult() :
	ServiceResult()
{}

GetSystemTemplateResult::GetSystemTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSystemTemplateResult::~GetSystemTemplateResult()
{}

void GetSystemTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto systemTemplateNode = value["SystemTemplate"];
	if(!systemTemplateNode["TemplateId"].isNull())
		systemTemplate_.templateId = systemTemplateNode["TemplateId"].asString();
	if(!systemTemplateNode["TemplateName"].isNull())
		systemTemplate_.templateName = systemTemplateNode["TemplateName"].asString();
	if(!systemTemplateNode["Type"].isNull())
		systemTemplate_.type = std::stoi(systemTemplateNode["Type"].asString());
	if(!systemTemplateNode["TypeName"].isNull())
		systemTemplate_.typeName = systemTemplateNode["TypeName"].asString();
	if(!systemTemplateNode["Subtype"].isNull())
		systemTemplate_.subtype = std::stoi(systemTemplateNode["Subtype"].asString());
	if(!systemTemplateNode["SubtypeName"].isNull())
		systemTemplate_.subtypeName = systemTemplateNode["SubtypeName"].asString();
	if(!systemTemplateNode["Status"].isNull())
		systemTemplate_.status = systemTemplateNode["Status"].asString();
	if(!systemTemplateNode["TemplateConfig"].isNull())
		systemTemplate_.templateConfig = systemTemplateNode["TemplateConfig"].asString();

}

GetSystemTemplateResult::SystemTemplate GetSystemTemplateResult::getSystemTemplate()const
{
	return systemTemplate_;
}

