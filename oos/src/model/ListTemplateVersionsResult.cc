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

#include <alibabacloud/oos/model/ListTemplateVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListTemplateVersionsResult::ListTemplateVersionsResult() :
	ServiceResult()
{}

ListTemplateVersionsResult::ListTemplateVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTemplateVersionsResult::~ListTemplateVersionsResult()
{}

void ListTemplateVersionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateVersionsNode = value["TemplateVersions"]["TemplateVersion"];
	for (auto valueTemplateVersionsTemplateVersion : allTemplateVersionsNode)
	{
		TemplateVersion templateVersionsObject;
		if(!valueTemplateVersionsTemplateVersion["Description"].isNull())
			templateVersionsObject.description = valueTemplateVersionsTemplateVersion["Description"].asString();
		if(!valueTemplateVersionsTemplateVersion["UpdatedDate"].isNull())
			templateVersionsObject.updatedDate = valueTemplateVersionsTemplateVersion["UpdatedDate"].asString();
		if(!valueTemplateVersionsTemplateVersion["UpdatedBy"].isNull())
			templateVersionsObject.updatedBy = valueTemplateVersionsTemplateVersion["UpdatedBy"].asString();
		if(!valueTemplateVersionsTemplateVersion["VersionName"].isNull())
			templateVersionsObject.versionName = valueTemplateVersionsTemplateVersion["VersionName"].asString();
		if(!valueTemplateVersionsTemplateVersion["TemplateVersion"].isNull())
			templateVersionsObject.templateVersion = valueTemplateVersionsTemplateVersion["TemplateVersion"].asString();
		if(!valueTemplateVersionsTemplateVersion["TemplateFormat"].isNull())
			templateVersionsObject.templateFormat = valueTemplateVersionsTemplateVersion["TemplateFormat"].asString();
		templateVersions_.push_back(templateVersionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListTemplateVersionsResult::getNextToken()const
{
	return nextToken_;
}

int ListTemplateVersionsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTemplateVersionsResult::TemplateVersion> ListTemplateVersionsResult::getTemplateVersions()const
{
	return templateVersions_;
}

