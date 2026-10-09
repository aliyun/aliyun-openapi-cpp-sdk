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

#include <alibabacloud/airegistry/model/ListNamespacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AIRegistry;
using namespace AlibabaCloud::AIRegistry::Model;

ListNamespacesResult::ListNamespacesResult() :
	ServiceResult()
{}

ListNamespacesResult::ListNamespacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNamespacesResult::~ListNamespacesResult()
{}

void ListNamespacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	auto allItemsNode = dataNode["Items"]["Item"];
	for (auto dataNodeItemsItem : allItemsNode)
	{
		Data::Item itemObject;
		if(!dataNodeItemsItem["SourceIndex"].isNull())
			itemObject.sourceIndex = std::stoi(dataNodeItemsItem["SourceIndex"].asString());
		if(!dataNodeItemsItem["Description"].isNull())
			itemObject.description = dataNodeItemsItem["Description"].asString();
		if(!dataNodeItemsItem["PromptCount"].isNull())
			itemObject.promptCount = std::stoi(dataNodeItemsItem["PromptCount"].asString());
		if(!dataNodeItemsItem["CreatedTime"].isNull())
			itemObject.createdTime = dataNodeItemsItem["CreatedTime"].asString();
		if(!dataNodeItemsItem["IpWhitelist"].isNull())
			itemObject.ipWhitelist = dataNodeItemsItem["IpWhitelist"].asString();
		if(!dataNodeItemsItem["SkillCount"].isNull())
			itemObject.skillCount = std::stoi(dataNodeItemsItem["SkillCount"].asString());
		if(!dataNodeItemsItem["PublicAccessEnabled"].isNull())
			itemObject.publicAccessEnabled = dataNodeItemsItem["PublicAccessEnabled"].asString() == "true";
		if(!dataNodeItemsItem["NamespaceId"].isNull())
			itemObject.namespaceId = dataNodeItemsItem["NamespaceId"].asString();
		if(!dataNodeItemsItem["Tags"].isNull())
			itemObject.tags = dataNodeItemsItem["Tags"].asString();
		if(!dataNodeItemsItem["Source"].isNull())
			itemObject.source = dataNodeItemsItem["Source"].asString();
		if(!dataNodeItemsItem["Name"].isNull())
			itemObject.name = dataNodeItemsItem["Name"].asString();
		if(!dataNodeItemsItem["PublicDomain"].isNull())
			itemObject.publicDomain = dataNodeItemsItem["PublicDomain"].asString();
		data_.items.push_back(itemObject);
	}

}

ListNamespacesResult::Data ListNamespacesResult::getData()const
{
	return data_;
}

