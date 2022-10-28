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

#include <alibabacloud/dms-enterprise/model/ListClassificationTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListClassificationTemplatesResult::ListClassificationTemplatesResult() :
	ServiceResult()
{}

ListClassificationTemplatesResult::ListClassificationTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClassificationTemplatesResult::~ListClassificationTemplatesResult()
{}

void ListClassificationTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateListNode = value["TemplateList"]["TemplateListItem"];
	for (auto valueTemplateListTemplateListItem : allTemplateListNode)
	{
		TemplateListItem templateListObject;
		if(!valueTemplateListTemplateListItem["TemplateId"].isNull())
			templateListObject.templateId = std::stol(valueTemplateListTemplateListItem["TemplateId"].asString());
		if(!valueTemplateListTemplateListItem["Name"].isNull())
			templateListObject.name = valueTemplateListTemplateListItem["Name"].asString();
		if(!valueTemplateListTemplateListItem["TemplateType"].isNull())
			templateListObject.templateType = valueTemplateListTemplateListItem["TemplateType"].asString();
		if(!valueTemplateListTemplateListItem["Remark"].isNull())
			templateListObject.remark = valueTemplateListTemplateListItem["Remark"].asString();
		templateList_.push_back(templateListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<ListClassificationTemplatesResult::TemplateListItem> ListClassificationTemplatesResult::getTemplateList()const
{
	return templateList_;
}

std::string ListClassificationTemplatesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListClassificationTemplatesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListClassificationTemplatesResult::getSuccess()const
{
	return success_;
}

