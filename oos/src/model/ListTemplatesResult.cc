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

#include <alibabacloud/oos/model/ListTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListTemplatesResult::ListTemplatesResult() :
	ServiceResult()
{}

ListTemplatesResult::ListTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTemplatesResult::~ListTemplatesResult()
{}

void ListTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesNode = value["Templates"]["Template"];
	for (auto valueTemplatesTemplate : allTemplatesNode)
	{
		_Template templatesObject;
		if(!valueTemplatesTemplate["Hash"].isNull())
			templatesObject.hash = valueTemplatesTemplate["Hash"].asString();
		if(!valueTemplatesTemplate["UpdatedDate"].isNull())
			templatesObject.updatedDate = valueTemplatesTemplate["UpdatedDate"].asString();
		if(!valueTemplatesTemplate["UpdatedBy"].isNull())
			templatesObject.updatedBy = valueTemplatesTemplate["UpdatedBy"].asString();
		if(!valueTemplatesTemplate["TemplateType"].isNull())
			templatesObject.templateType = valueTemplatesTemplate["TemplateType"].asString();
		if(!valueTemplatesTemplate["Tags"].isNull())
			templatesObject.tags = valueTemplatesTemplate["Tags"].asString();
		if(!valueTemplatesTemplate["TemplateName"].isNull())
			templatesObject.templateName = valueTemplatesTemplate["TemplateName"].asString();
		if(!valueTemplatesTemplate["TemplateVersion"].isNull())
			templatesObject.templateVersion = valueTemplatesTemplate["TemplateVersion"].asString();
		if(!valueTemplatesTemplate["TemplateFormat"].isNull())
			templatesObject.templateFormat = valueTemplatesTemplate["TemplateFormat"].asString();
		if(!valueTemplatesTemplate["Popularity"].isNull())
			templatesObject.popularity = std::stoi(valueTemplatesTemplate["Popularity"].asString());
		if(!valueTemplatesTemplate["TotalExecutionCount"].isNull())
			templatesObject.totalExecutionCount = std::stoi(valueTemplatesTemplate["TotalExecutionCount"].asString());
		if(!valueTemplatesTemplate["Description"].isNull())
			templatesObject.description = valueTemplatesTemplate["Description"].asString();
		if(!valueTemplatesTemplate["ResourceGroupId"].isNull())
			templatesObject.resourceGroupId = valueTemplatesTemplate["ResourceGroupId"].asString();
		if(!valueTemplatesTemplate["CreatedBy"].isNull())
			templatesObject.createdBy = valueTemplatesTemplate["CreatedBy"].asString();
		if(!valueTemplatesTemplate["CreatedDate"].isNull())
			templatesObject.createdDate = valueTemplatesTemplate["CreatedDate"].asString();
		if(!valueTemplatesTemplate["Category"].isNull())
			templatesObject.category = valueTemplatesTemplate["Category"].asString();
		if(!valueTemplatesTemplate["HasTrigger"].isNull())
			templatesObject.hasTrigger = valueTemplatesTemplate["HasTrigger"].asString() == "true";
		if(!valueTemplatesTemplate["TemplateId"].isNull())
			templatesObject.templateId = valueTemplatesTemplate["TemplateId"].asString();
		if(!valueTemplatesTemplate["ShareType"].isNull())
			templatesObject.shareType = valueTemplatesTemplate["ShareType"].asString();
		templates_.push_back(templatesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListTemplatesResult::getNextToken()const
{
	return nextToken_;
}

int ListTemplatesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTemplatesResult::_Template> ListTemplatesResult::getTemplates()const
{
	return templates_;
}

