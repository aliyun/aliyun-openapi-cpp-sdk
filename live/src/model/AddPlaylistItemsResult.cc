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

#include <alibabacloud/live/model/AddPlaylistItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

AddPlaylistItemsResult::AddPlaylistItemsResult() :
	ServiceResult()
{}

AddPlaylistItemsResult::AddPlaylistItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddPlaylistItemsResult::~AddPlaylistItemsResult()
{}

void AddPlaylistItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto itemsNode = value["Items"];
	auto allFailedItemsNode = itemsNode["FailedItems"]["FailedItem"];
	for (auto itemsNodeFailedItemsFailedItem : allFailedItemsNode)
	{
		Items::FailedItem failedItemObject;
		if(!itemsNodeFailedItemsFailedItem["ItemId"].isNull())
			failedItemObject.itemId = itemsNodeFailedItemsFailedItem["ItemId"].asString();
		if(!itemsNodeFailedItemsFailedItem["ItemName"].isNull())
			failedItemObject.itemName = itemsNodeFailedItemsFailedItem["ItemName"].asString();
		items_.failedItems.push_back(failedItemObject);
	}
	auto allSuccessItemsNode = itemsNode["SuccessItems"]["SuccessItem"];
	for (auto itemsNodeSuccessItemsSuccessItem : allSuccessItemsNode)
	{
		Items::SuccessItem successItemObject;
		if(!itemsNodeSuccessItemsSuccessItem["ItemId"].isNull())
			successItemObject.itemId = itemsNodeSuccessItemsSuccessItem["ItemId"].asString();
		if(!itemsNodeSuccessItemsSuccessItem["ItemName"].isNull())
			successItemObject.itemName = itemsNodeSuccessItemsSuccessItem["ItemName"].asString();
		items_.successItems.push_back(successItemObject);
	}
	if(!value["ProgramId"].isNull())
		programId_ = value["ProgramId"].asString();

}

AddPlaylistItemsResult::Items AddPlaylistItemsResult::getItems()const
{
	return items_;
}

std::string AddPlaylistItemsResult::getProgramId()const
{
	return programId_;
}

