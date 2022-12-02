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

#include <alibabacloud/sas/model/ListHoneypotResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListHoneypotResult::ListHoneypotResult() :
	ServiceResult()
{}

ListHoneypotResult::ListHoneypotResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHoneypotResult::~ListHoneypotResult()
{}

void ListHoneypotResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["HoneypotId"].isNull())
			listObject.honeypotId = valueListListItem["HoneypotId"].asString();
		if(!valueListListItem["HoneypotName"].isNull())
			listObject.honeypotName = valueListListItem["HoneypotName"].asString();
		if(!valueListListItem["ControlNodeName"].isNull())
			listObject.controlNodeName = valueListListItem["ControlNodeName"].asString();
		if(!valueListListItem["HoneypotImageName"].isNull())
			listObject.honeypotImageName = valueListListItem["HoneypotImageName"].asString();
		if(!valueListListItem["PresetId"].isNull())
			listObject.presetId = valueListListItem["PresetId"].asString();
		if(!valueListListItem["HoneypotImageDisplayName"].isNull())
			listObject.honeypotImageDisplayName = valueListListItem["HoneypotImageDisplayName"].asString();
		if(!valueListListItem["NodeId"].isNull())
			listObject.nodeId = valueListListItem["NodeId"].asString();
		if(!valueListListItem["HoneypotImageId"].isNull())
			listObject.honeypotImageId = valueListListItem["HoneypotImageId"].asString();
		auto allState = value["State"]["State"];
		for (auto value : allState)
			listObject.state.push_back(value.asString());
		list_.push_back(listObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["LastRowKey"].isNull())
		pageInfo_.lastRowKey = pageInfoNode["LastRowKey"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

ListHoneypotResult::PageInfo ListHoneypotResult::getPageInfo()const
{
	return pageInfo_;
}

std::string ListHoneypotResult::getMessage()const
{
	return message_;
}

int ListHoneypotResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListHoneypotResult::ListItem> ListHoneypotResult::getList()const
{
	return list_;
}

std::string ListHoneypotResult::getCode()const
{
	return code_;
}

bool ListHoneypotResult::getSuccess()const
{
	return success_;
}

