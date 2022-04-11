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

#include <alibabacloud/vod/model/GetDefaultAITemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

GetDefaultAITemplateResult::GetDefaultAITemplateResult() :
	ServiceResult()
{}

GetDefaultAITemplateResult::GetDefaultAITemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDefaultAITemplateResult::~GetDefaultAITemplateResult()
{}

void GetDefaultAITemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto templateInfoNode = value["TemplateInfo"];
	if(!templateInfoNode["CreationTime"].isNull())
		templateInfo_.creationTime = templateInfoNode["CreationTime"].asString();
	if(!templateInfoNode["IsDefault"].isNull())
		templateInfo_.isDefault = templateInfoNode["IsDefault"].asString();
	if(!templateInfoNode["TemplateType"].isNull())
		templateInfo_.templateType = templateInfoNode["TemplateType"].asString();
	if(!templateInfoNode["TemplateConfig"].isNull())
		templateInfo_.templateConfig = templateInfoNode["TemplateConfig"].asString();
	if(!templateInfoNode["TemplateName"].isNull())
		templateInfo_.templateName = templateInfoNode["TemplateName"].asString();
	if(!templateInfoNode["Source"].isNull())
		templateInfo_.source = templateInfoNode["Source"].asString();
	if(!templateInfoNode["TemplateId"].isNull())
		templateInfo_.templateId = templateInfoNode["TemplateId"].asString();
	if(!templateInfoNode["ModifyTime"].isNull())
		templateInfo_.modifyTime = templateInfoNode["ModifyTime"].asString();

}

GetDefaultAITemplateResult::TemplateInfo GetDefaultAITemplateResult::getTemplateInfo()const
{
	return templateInfo_;
}

