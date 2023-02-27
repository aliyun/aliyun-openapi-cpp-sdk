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

#include <alibabacloud/ice/model/ListSystemTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListSystemTemplatesResult::ListSystemTemplatesResult() :
	ServiceResult()
{}

ListSystemTemplatesResult::ListSystemTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSystemTemplatesResult::~ListSystemTemplatesResult()
{}

void ListSystemTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSystemTemplateListNode = value["SystemTemplateList"]["SystemTemplate"];
	for (auto valueSystemTemplateListSystemTemplate : allSystemTemplateListNode)
	{
		SystemTemplate systemTemplateListObject;
		if(!valueSystemTemplateListSystemTemplate["TemplateId"].isNull())
			systemTemplateListObject.templateId = valueSystemTemplateListSystemTemplate["TemplateId"].asString();
		if(!valueSystemTemplateListSystemTemplate["TemplateName"].isNull())
			systemTemplateListObject.templateName = valueSystemTemplateListSystemTemplate["TemplateName"].asString();
		if(!valueSystemTemplateListSystemTemplate["Type"].isNull())
			systemTemplateListObject.type = std::stoi(valueSystemTemplateListSystemTemplate["Type"].asString());
		if(!valueSystemTemplateListSystemTemplate["TypeName"].isNull())
			systemTemplateListObject.typeName = valueSystemTemplateListSystemTemplate["TypeName"].asString();
		if(!valueSystemTemplateListSystemTemplate["Subtype"].isNull())
			systemTemplateListObject.subtype = std::stoi(valueSystemTemplateListSystemTemplate["Subtype"].asString());
		if(!valueSystemTemplateListSystemTemplate["SubtypeName"].isNull())
			systemTemplateListObject.subtypeName = valueSystemTemplateListSystemTemplate["SubtypeName"].asString();
		if(!valueSystemTemplateListSystemTemplate["Status"].isNull())
			systemTemplateListObject.status = valueSystemTemplateListSystemTemplate["Status"].asString();
		if(!valueSystemTemplateListSystemTemplate["TemplateConfig"].isNull())
			systemTemplateListObject.templateConfig = valueSystemTemplateListSystemTemplate["TemplateConfig"].asString();
		systemTemplateList_.push_back(systemTemplateListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListSystemTemplatesResult::getTotal()const
{
	return total_;
}

std::vector<ListSystemTemplatesResult::SystemTemplate> ListSystemTemplatesResult::getSystemTemplateList()const
{
	return systemTemplateList_;
}

