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

#include <alibabacloud/ice/model/ListTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

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
	auto allTemplatesNode = value["Templates"]["TemplatesItem"];
	for (auto valueTemplatesTemplatesItem : allTemplatesNode)
	{
		TemplatesItem templatesObject;
		if(!valueTemplatesTemplatesItem["TemplateId"].isNull())
			templatesObject.templateId = valueTemplatesTemplatesItem["TemplateId"].asString();
		if(!valueTemplatesTemplatesItem["Name"].isNull())
			templatesObject.name = valueTemplatesTemplatesItem["Name"].asString();
		if(!valueTemplatesTemplatesItem["Type"].isNull())
			templatesObject.type = valueTemplatesTemplatesItem["Type"].asString();
		if(!valueTemplatesTemplatesItem["Config"].isNull())
			templatesObject.config = valueTemplatesTemplatesItem["Config"].asString();
		if(!valueTemplatesTemplatesItem["PreviewMedia"].isNull())
			templatesObject.previewMedia = valueTemplatesTemplatesItem["PreviewMedia"].asString();
		if(!valueTemplatesTemplatesItem["Status"].isNull())
			templatesObject.status = valueTemplatesTemplatesItem["Status"].asString();
		if(!valueTemplatesTemplatesItem["CreateSource"].isNull())
			templatesObject.createSource = valueTemplatesTemplatesItem["CreateSource"].asString();
		if(!valueTemplatesTemplatesItem["ModifiedSource"].isNull())
			templatesObject.modifiedSource = valueTemplatesTemplatesItem["ModifiedSource"].asString();
		if(!valueTemplatesTemplatesItem["PreviewMediaStatus"].isNull())
			templatesObject.previewMediaStatus = valueTemplatesTemplatesItem["PreviewMediaStatus"].asString();
		if(!valueTemplatesTemplatesItem["CreationTime"].isNull())
			templatesObject.creationTime = valueTemplatesTemplatesItem["CreationTime"].asString();
		if(!valueTemplatesTemplatesItem["ModifiedTime"].isNull())
			templatesObject.modifiedTime = valueTemplatesTemplatesItem["ModifiedTime"].asString();
		if(!valueTemplatesTemplatesItem["CoverURL"].isNull())
			templatesObject.coverURL = valueTemplatesTemplatesItem["CoverURL"].asString();
		if(!valueTemplatesTemplatesItem["ClipsParam"].isNull())
			templatesObject.clipsParam = valueTemplatesTemplatesItem["ClipsParam"].asString();
		templates_.push_back(templatesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTemplatesResult::getNextToken()const
{
	return nextToken_;
}

int ListTemplatesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTemplatesResult::TemplatesItem> ListTemplatesResult::getTemplates()const
{
	return templates_;
}

