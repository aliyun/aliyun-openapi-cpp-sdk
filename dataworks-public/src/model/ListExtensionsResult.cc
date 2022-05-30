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

#include <alibabacloud/dataworks-public/model/ListExtensionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListExtensionsResult::ListExtensionsResult() :
	ServiceResult()
{}

ListExtensionsResult::ListExtensionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExtensionsResult::~ListExtensionsResult()
{}

void ListExtensionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pagingInfoNode = value["PagingInfo"];
	if(!pagingInfoNode["PageNumber"].isNull())
		pagingInfo_.pageNumber = std::stoi(pagingInfoNode["PageNumber"].asString());
	if(!pagingInfoNode["PageSize"].isNull())
		pagingInfo_.pageSize = std::stoi(pagingInfoNode["PageSize"].asString());
	if(!pagingInfoNode["TotalCount"].isNull())
		pagingInfo_.totalCount = std::stoi(pagingInfoNode["TotalCount"].asString());
	auto allExtensionsNode = pagingInfoNode["Extensions"]["ExtensionsItem"];
	for (auto pagingInfoNodeExtensionsExtensionsItem : allExtensionsNode)
	{
		PagingInfo::ExtensionsItem extensionsItemObject;
		if(!pagingInfoNodeExtensionsExtensionsItem["Status"].isNull())
			extensionsItemObject.status = std::stoi(pagingInfoNodeExtensionsExtensionsItem["Status"].asString());
		if(!pagingInfoNodeExtensionsExtensionsItem["ExtensionDesc"].isNull())
			extensionsItemObject.extensionDesc = pagingInfoNodeExtensionsExtensionsItem["ExtensionDesc"].asString();
		if(!pagingInfoNodeExtensionsExtensionsItem["ExtensionName"].isNull())
			extensionsItemObject.extensionName = pagingInfoNodeExtensionsExtensionsItem["ExtensionName"].asString();
		if(!pagingInfoNodeExtensionsExtensionsItem["Owner"].isNull())
			extensionsItemObject.owner = pagingInfoNodeExtensionsExtensionsItem["Owner"].asString();
		if(!pagingInfoNodeExtensionsExtensionsItem["ExtensionCode"].isNull())
			extensionsItemObject.extensionCode = pagingInfoNodeExtensionsExtensionsItem["ExtensionCode"].asString();
		auto allBindEventListNode = pagingInfoNodeExtensionsExtensionsItem["BindEventList"]["BindEventListItem"];
		for (auto pagingInfoNodeExtensionsExtensionsItemBindEventListBindEventListItem : allBindEventListNode)
		{
			PagingInfo::ExtensionsItem::BindEventListItem bindEventListObject;
			if(!pagingInfoNodeExtensionsExtensionsItemBindEventListBindEventListItem["EventName"].isNull())
				bindEventListObject.eventName = pagingInfoNodeExtensionsExtensionsItemBindEventListBindEventListItem["EventName"].asString();
			if(!pagingInfoNodeExtensionsExtensionsItemBindEventListBindEventListItem["EventCode"].isNull())
				bindEventListObject.eventCode = pagingInfoNodeExtensionsExtensionsItemBindEventListBindEventListItem["EventCode"].asString();
			extensionsItemObject.bindEventList.push_back(bindEventListObject);
		}
		pagingInfo_.extensions.push_back(extensionsItemObject);
	}

}

ListExtensionsResult::PagingInfo ListExtensionsResult::getPagingInfo()const
{
	return pagingInfo_;
}

