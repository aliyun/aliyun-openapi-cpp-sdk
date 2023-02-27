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

#include <alibabacloud/ice/model/ListCustomTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListCustomTemplatesResult::ListCustomTemplatesResult() :
	ServiceResult()
{}

ListCustomTemplatesResult::ListCustomTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCustomTemplatesResult::~ListCustomTemplatesResult()
{}

void ListCustomTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCustomTemplateListNode = value["CustomTemplateList"]["CustomTemplate"];
	for (auto valueCustomTemplateListCustomTemplate : allCustomTemplateListNode)
	{
		CustomTemplate customTemplateListObject;
		if(!valueCustomTemplateListCustomTemplate["TemplateId"].isNull())
			customTemplateListObject.templateId = valueCustomTemplateListCustomTemplate["TemplateId"].asString();
		if(!valueCustomTemplateListCustomTemplate["TemplateName"].isNull())
			customTemplateListObject.templateName = valueCustomTemplateListCustomTemplate["TemplateName"].asString();
		if(!valueCustomTemplateListCustomTemplate["Type"].isNull())
			customTemplateListObject.type = std::stoi(valueCustomTemplateListCustomTemplate["Type"].asString());
		if(!valueCustomTemplateListCustomTemplate["TypeName"].isNull())
			customTemplateListObject.typeName = valueCustomTemplateListCustomTemplate["TypeName"].asString();
		if(!valueCustomTemplateListCustomTemplate["Subtype"].isNull())
			customTemplateListObject.subtype = std::stoi(valueCustomTemplateListCustomTemplate["Subtype"].asString());
		if(!valueCustomTemplateListCustomTemplate["SubtypeName"].isNull())
			customTemplateListObject.subtypeName = valueCustomTemplateListCustomTemplate["SubtypeName"].asString();
		if(!valueCustomTemplateListCustomTemplate["Status"].isNull())
			customTemplateListObject.status = valueCustomTemplateListCustomTemplate["Status"].asString();
		if(!valueCustomTemplateListCustomTemplate["IsDefault"].isNull())
			customTemplateListObject.isDefault = valueCustomTemplateListCustomTemplate["IsDefault"].asString() == "true";
		if(!valueCustomTemplateListCustomTemplate["TemplateConfig"].isNull())
			customTemplateListObject.templateConfig = valueCustomTemplateListCustomTemplate["TemplateConfig"].asString();
		if(!valueCustomTemplateListCustomTemplate["Version"].isNull())
			customTemplateListObject.version = std::stoi(valueCustomTemplateListCustomTemplate["Version"].asString());
		if(!valueCustomTemplateListCustomTemplate["AppId"].isNull())
			customTemplateListObject.appId = valueCustomTemplateListCustomTemplate["AppId"].asString();
		if(!valueCustomTemplateListCustomTemplate["CreateTime"].isNull())
			customTemplateListObject.createTime = valueCustomTemplateListCustomTemplate["CreateTime"].asString();
		if(!valueCustomTemplateListCustomTemplate["ModifiedTime"].isNull())
			customTemplateListObject.modifiedTime = valueCustomTemplateListCustomTemplate["ModifiedTime"].asString();
		customTemplateList_.push_back(customTemplateListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListCustomTemplatesResult::getTotal()const
{
	return total_;
}

std::vector<ListCustomTemplatesResult::CustomTemplate> ListCustomTemplatesResult::getCustomTemplateList()const
{
	return customTemplateList_;
}

