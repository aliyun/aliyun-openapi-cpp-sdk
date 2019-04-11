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

#include <alibabacloud/vod/model/ListAITemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

ListAITemplateResult::ListAITemplateResult() :
	ServiceResult()
{}

ListAITemplateResult::ListAITemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAITemplateResult::~ListAITemplateResult()
{}

void ListAITemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTemplateInfoList = value["TemplateInfoList"]["TemplateInfoListItem"];
	for (auto value : allTemplateInfoList)
	{
		TemplateInfoListItem templateInfoListObject;
		if(!value["TemplateId"].isNull())
			templateInfoListObject.templateId = value["TemplateId"].asString();
		if(!value["TemplateType"].isNull())
			templateInfoListObject.templateType = value["TemplateType"].asString();
		if(!value["TemplateName"].isNull())
			templateInfoListObject.templateName = value["TemplateName"].asString();
		if(!value["TemplateConfig"].isNull())
			templateInfoListObject.templateConfig = value["TemplateConfig"].asString();
		if(!value["Source"].isNull())
			templateInfoListObject.source = value["Source"].asString();
		if(!value["IsDefault"].isNull())
			templateInfoListObject.isDefault = value["IsDefault"].asString();
		if(!value["CreationTime"].isNull())
			templateInfoListObject.creationTime = value["CreationTime"].asString();
		if(!value["ModifyTime"].isNull())
			templateInfoListObject.modifyTime = value["ModifyTime"].asString();
		templateInfoList_.push_back(templateInfoListObject);
	}

}

std::vector<ListAITemplateResult::TemplateInfoListItem> ListAITemplateResult::getTemplateInfoList()const
{
	return templateInfoList_;
}

