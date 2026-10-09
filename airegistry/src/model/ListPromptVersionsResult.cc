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

#include <alibabacloud/airegistry/model/ListPromptVersionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

ListPromptVersionsResult::ListPromptVersionsResult() :
	ServiceResult()
{}

ListPromptVersionsResult::ListPromptVersionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPromptVersionsResult::~ListPromptVersionsResult()
{}

void ListPromptVersionsResult::parse(const std::string &payload)
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
		if(!dataNodePageItemsItem["Status"].isNull())
			itemObject.status = dataNodePageItemsItem["Status"].asString();
		if(!dataNodePageItemsItem["Version"].isNull())
			itemObject.version = dataNodePageItemsItem["Version"].asString();
		if(!dataNodePageItemsItem["SrcUser"].isNull())
			itemObject.srcUser = dataNodePageItemsItem["SrcUser"].asString();
		if(!dataNodePageItemsItem["PromptKey"].isNull())
			itemObject.promptKey = dataNodePageItemsItem["PromptKey"].asString();
		if(!dataNodePageItemsItem["GmtModified"].isNull())
			itemObject.gmtModified = std::stol(dataNodePageItemsItem["GmtModified"].asString());
		if(!dataNodePageItemsItem["CommitMsg"].isNull())
			itemObject.commitMsg = dataNodePageItemsItem["CommitMsg"].asString();
		data_.pageItems.push_back(itemObject);
	}

}

ListPromptVersionsResult::Data ListPromptVersionsResult::getData()const
{
	return data_;
}

