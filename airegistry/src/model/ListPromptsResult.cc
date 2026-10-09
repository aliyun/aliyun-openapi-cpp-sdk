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

#include <alibabacloud/airegistry/model/ListPromptsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

ListPromptsResult::ListPromptsResult() :
	ServiceResult()
{}

ListPromptsResult::ListPromptsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPromptsResult::~ListPromptsResult()
{}

void ListPromptsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PagesAvailable"].isNull())
		data_.pagesAvailable = std::stoi(dataNode["PagesAvailable"].asString());
	auto allPageItemsNode = dataNode["PageItems"]["Item"];
	for (auto dataNodePageItemsItem : allPageItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodePageItemsItem["EditingVersion"].isNull())
			itemObject.editingVersion = dataNodePageItemsItem["EditingVersion"].asString();
		if(!dataNodePageItemsItem["Description"].isNull())
			itemObject.description = dataNodePageItemsItem["Description"].asString();
		if(!dataNodePageItemsItem["SchemaVersion"].isNull())
			itemObject.schemaVersion = std::stoi(dataNodePageItemsItem["SchemaVersion"].asString());
		if(!dataNodePageItemsItem["LatestVersion"].isNull())
			itemObject.latestVersion = dataNodePageItemsItem["LatestVersion"].asString();
		if(!dataNodePageItemsItem["PromptKey"].isNull())
			itemObject.promptKey = dataNodePageItemsItem["PromptKey"].asString();
		if(!dataNodePageItemsItem["GmtModified"].isNull())
			itemObject.gmtModified = std::stol(dataNodePageItemsItem["GmtModified"].asString());
		if(!dataNodePageItemsItem["Labels"].isNull())
			itemObject.labels = dataNodePageItemsItem["Labels"].asString();
		if(!dataNodePageItemsItem["ReviewingVersion"].isNull())
			itemObject.reviewingVersion = dataNodePageItemsItem["ReviewingVersion"].asString();
		if(!dataNodePageItemsItem["OnlineCnt"].isNull())
			itemObject.onlineCnt = std::stoi(dataNodePageItemsItem["OnlineCnt"].asString());
		auto allBizTags = value["BizTags"]["BizTag"];
		for (auto value : allBizTags)
			itemObject.bizTags.push_back(value.asString());
		data_.pageItems.push_back(itemObject);
	}

}

ListPromptsResult::Data ListPromptsResult::getData()const
{
	return data_;
}

