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
	auto allTemplateInfoListNode = value["TemplateInfoList"]["TemplateInfoListItem"];
	for (auto valueTemplateInfoListTemplateInfoListItem : allTemplateInfoListNode)
	{
		TemplateInfoListItem templateInfoListObject;
		if(!valueTemplateInfoListTemplateInfoListItem["CreationTime"].isNull())
			templateInfoListObject.creationTime = valueTemplateInfoListTemplateInfoListItem["CreationTime"].asString();
		if(!valueTemplateInfoListTemplateInfoListItem["IsDefault"].isNull())
			templateInfoListObject.isDefault = valueTemplateInfoListTemplateInfoListItem["IsDefault"].asString();
		if(!valueTemplateInfoListTemplateInfoListItem["TemplateType"].isNull())
			templateInfoListObject.templateType = valueTemplateInfoListTemplateInfoListItem["TemplateType"].asString();
		if(!valueTemplateInfoListTemplateInfoListItem["TemplateConfig"].isNull())
			templateInfoListObject.templateConfig = valueTemplateInfoListTemplateInfoListItem["TemplateConfig"].asString();
		if(!valueTemplateInfoListTemplateInfoListItem["TemplateName"].isNull())
			templateInfoListObject.templateName = valueTemplateInfoListTemplateInfoListItem["TemplateName"].asString();
		if(!valueTemplateInfoListTemplateInfoListItem["Source"].isNull())
			templateInfoListObject.source = valueTemplateInfoListTemplateInfoListItem["Source"].asString();
		if(!valueTemplateInfoListTemplateInfoListItem["TemplateId"].isNull())
			templateInfoListObject.templateId = valueTemplateInfoListTemplateInfoListItem["TemplateId"].asString();
		if(!valueTemplateInfoListTemplateInfoListItem["ModifyTime"].isNull())
			templateInfoListObject.modifyTime = valueTemplateInfoListTemplateInfoListItem["ModifyTime"].asString();
		templateInfoList_.push_back(templateInfoListObject);
	}

}

std::vector<ListAITemplateResult::TemplateInfoListItem> ListAITemplateResult::getTemplateInfoList()const
{
	return templateInfoList_;
}

