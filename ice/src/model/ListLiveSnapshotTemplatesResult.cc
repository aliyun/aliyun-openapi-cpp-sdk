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

#include <alibabacloud/ice/model/ListLiveSnapshotTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListLiveSnapshotTemplatesResult::ListLiveSnapshotTemplatesResult() :
	ServiceResult()
{}

ListLiveSnapshotTemplatesResult::ListLiveSnapshotTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveSnapshotTemplatesResult::~ListLiveSnapshotTemplatesResult()
{}

void ListLiveSnapshotTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplateListNode = value["TemplateList"]["TemplateInfo"];
	for (auto valueTemplateListTemplateInfo : allTemplateListNode)
	{
		TemplateInfo templateListObject;
		if(!valueTemplateListTemplateInfo["TemplateId"].isNull())
			templateListObject.templateId = valueTemplateListTemplateInfo["TemplateId"].asString();
		if(!valueTemplateListTemplateInfo["TemplateName"].isNull())
			templateListObject.templateName = valueTemplateListTemplateInfo["TemplateName"].asString();
		if(!valueTemplateListTemplateInfo["Type"].isNull())
			templateListObject.type = valueTemplateListTemplateInfo["Type"].asString();
		if(!valueTemplateListTemplateInfo["TimeInterval"].isNull())
			templateListObject.timeInterval = std::stoi(valueTemplateListTemplateInfo["TimeInterval"].asString());
		if(!valueTemplateListTemplateInfo["CreateTime"].isNull())
			templateListObject.createTime = valueTemplateListTemplateInfo["CreateTime"].asString();
		templateList_.push_back(templateListObject);
	}
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["SortBy"].isNull())
		sortBy_ = value["SortBy"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListLiveSnapshotTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListLiveSnapshotTemplatesResult::TemplateInfo> ListLiveSnapshotTemplatesResult::getTemplateList()const
{
	return templateList_;
}

int ListLiveSnapshotTemplatesResult::getPageSize()const
{
	return pageSize_;
}

std::string ListLiveSnapshotTemplatesResult::getSortBy()const
{
	return sortBy_;
}

int ListLiveSnapshotTemplatesResult::getPageNo()const
{
	return pageNo_;
}

