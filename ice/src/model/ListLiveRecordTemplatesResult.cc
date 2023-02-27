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

#include <alibabacloud/ice/model/ListLiveRecordTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListLiveRecordTemplatesResult::ListLiveRecordTemplatesResult() :
	ServiceResult()
{}

ListLiveRecordTemplatesResult::ListLiveRecordTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveRecordTemplatesResult::~ListLiveRecordTemplatesResult()
{}

void ListLiveRecordTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordTemplateListNode = value["RecordTemplateList"]["recordTemplates"];
	for (auto valueRecordTemplateListrecordTemplates : allRecordTemplateListNode)
	{
		RecordTemplates recordTemplateListObject;
		if(!valueRecordTemplateListrecordTemplates["Name"].isNull())
			recordTemplateListObject.name = valueRecordTemplateListrecordTemplates["Name"].asString();
		if(!valueRecordTemplateListrecordTemplates["Type"].isNull())
			recordTemplateListObject.type = valueRecordTemplateListrecordTemplates["Type"].asString();
		if(!valueRecordTemplateListrecordTemplates["LastModified"].isNull())
			recordTemplateListObject.lastModified = valueRecordTemplateListrecordTemplates["LastModified"].asString();
		if(!valueRecordTemplateListrecordTemplates["TemplateId"].isNull())
			recordTemplateListObject.templateId = valueRecordTemplateListrecordTemplates["TemplateId"].asString();
		if(!valueRecordTemplateListrecordTemplates["CreateTime"].isNull())
			recordTemplateListObject.createTime = valueRecordTemplateListrecordTemplates["CreateTime"].asString();
		auto allRecordFormatListNode = valueRecordTemplateListrecordTemplates["RecordFormatList"]["recordFormat"];
		for (auto valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat : allRecordFormatListNode)
		{
			RecordTemplates::RecordFormat recordFormatListObject;
			if(!valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["Format"].isNull())
				recordFormatListObject.format = valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["Format"].asString();
			if(!valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["SliceDuration"].isNull())
				recordFormatListObject.sliceDuration = std::stoi(valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["SliceDuration"].asString());
			if(!valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["OssObjectPrefix"].isNull())
				recordFormatListObject.ossObjectPrefix = valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["OssObjectPrefix"].asString();
			if(!valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["SliceOssObjectPrefix"].isNull())
				recordFormatListObject.sliceOssObjectPrefix = valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["SliceOssObjectPrefix"].asString();
			if(!valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["CycleDuration"].isNull())
				recordFormatListObject.cycleDuration = std::stoi(valueRecordTemplateListrecordTemplatesRecordFormatListrecordFormat["CycleDuration"].asString());
			recordTemplateListObject.recordFormatList.push_back(recordFormatListObject);
		}
		recordTemplateList_.push_back(recordTemplateListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["SortBy"].isNull())
		sortBy_ = value["SortBy"].asString();

}

std::vector<ListLiveRecordTemplatesResult::RecordTemplates> ListLiveRecordTemplatesResult::getRecordTemplateList()const
{
	return recordTemplateList_;
}

long ListLiveRecordTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

long ListLiveRecordTemplatesResult::getPageSize()const
{
	return pageSize_;
}

std::string ListLiveRecordTemplatesResult::getSortBy()const
{
	return sortBy_;
}

long ListLiveRecordTemplatesResult::getPageNo()const
{
	return pageNo_;
}

