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

#include <alibabacloud/airegistry/model/ListSkillsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

ListSkillsResult::ListSkillsResult() :
	ServiceResult()
{}

ListSkillsResult::ListSkillsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillsResult::~ListSkillsResult()
{}

void ListSkillsResult::parse(const std::string &payload)
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
	auto allPageItemsNode = dataNode["PageItems"]["PageItem"];
	for (auto dataNodePageItemsPageItem : allPageItemsNode)
	{
		Data::PageItem pageItemObject;
		if(!dataNodePageItemsPageItem["DraftMode"].isNull())
			pageItemObject.draftMode = dataNodePageItemsPageItem["DraftMode"].asString();
		if(!dataNodePageItemsPageItem["EditingVersion"].isNull())
			pageItemObject.editingVersion = dataNodePageItemsPageItem["EditingVersion"].asString();
		if(!dataNodePageItemsPageItem["Owner"].isNull())
			pageItemObject.owner = dataNodePageItemsPageItem["Owner"].asString();
		if(!dataNodePageItemsPageItem["Description"].isNull())
			pageItemObject.description = dataNodePageItemsPageItem["Description"].asString();
		if(!dataNodePageItemsPageItem["BizTags"].isNull())
			pageItemObject.bizTags = dataNodePageItemsPageItem["BizTags"].asString();
		if(!dataNodePageItemsPageItem["Labels"].isNull())
			pageItemObject.labels = dataNodePageItemsPageItem["Labels"].asString();
		if(!dataNodePageItemsPageItem["From"].isNull())
			pageItemObject.from = dataNodePageItemsPageItem["From"].asString();
		if(!dataNodePageItemsPageItem["Name"].isNull())
			pageItemObject.name = dataNodePageItemsPageItem["Name"].asString();
		if(!dataNodePageItemsPageItem["Scope"].isNull())
			pageItemObject.scope = dataNodePageItemsPageItem["Scope"].asString();
		if(!dataNodePageItemsPageItem["UpdateTime"].isNull())
			pageItemObject.updateTime = std::stol(dataNodePageItemsPageItem["UpdateTime"].asString());
		if(!dataNodePageItemsPageItem["Enable"].isNull())
			pageItemObject.enable = dataNodePageItemsPageItem["Enable"].asString() == "true";
		if(!dataNodePageItemsPageItem["NamespaceId"].isNull())
			pageItemObject.namespaceId = dataNodePageItemsPageItem["NamespaceId"].asString();
		if(!dataNodePageItemsPageItem["ReviewingVersion"].isNull())
			pageItemObject.reviewingVersion = dataNodePageItemsPageItem["ReviewingVersion"].asString();
		if(!dataNodePageItemsPageItem["OnlineCnt"].isNull())
			pageItemObject.onlineCnt = std::stoi(dataNodePageItemsPageItem["OnlineCnt"].asString());
		if(!dataNodePageItemsPageItem["Writeable"].isNull())
			pageItemObject.writeable = dataNodePageItemsPageItem["Writeable"].asString() == "true";
		if(!dataNodePageItemsPageItem["DownloadCount"].isNull())
			pageItemObject.downloadCount = std::stol(dataNodePageItemsPageItem["DownloadCount"].asString());
		data_.pageItems.push_back(pageItemObject);
	}

}

ListSkillsResult::Data ListSkillsResult::getData()const
{
	return data_;
}

