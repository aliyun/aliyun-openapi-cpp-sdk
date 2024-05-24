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

#include <alibabacloud/live/model/ListMessageGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListMessageGroupResult::ListMessageGroupResult() :
	ServiceResult()
{}

ListMessageGroupResult::ListMessageGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMessageGroupResult::~ListMessageGroupResult()
{}

void ListMessageGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["HasMore"].isNull())
		result_.hasMore = resultNode["HasMore"].asString() == "true";
	if(!resultNode["Total"].isNull())
		result_.total = std::stoi(resultNode["Total"].asString());
	auto allGroupListNode = resultNode["GroupList"]["groupListItem"];
	for (auto resultNodeGroupListgroupListItem : allGroupListNode)
	{
		Result::GroupListItem groupListItemObject;
		if(!resultNodeGroupListgroupListItem["AppId"].isNull())
			groupListItemObject.appId = resultNodeGroupListgroupListItem["AppId"].asString();
		if(!resultNodeGroupListgroupListItem["CreateTime"].isNull())
			groupListItemObject.createTime = std::stol(resultNodeGroupListgroupListItem["CreateTime"].asString());
		if(!resultNodeGroupListgroupListItem["CreatorId"].isNull())
			groupListItemObject.creatorId = resultNodeGroupListgroupListItem["CreatorId"].asString();
		if(!resultNodeGroupListgroupListItem["Extension"].isNull())
			groupListItemObject.extension = resultNodeGroupListgroupListItem["Extension"].asString();
		if(!resultNodeGroupListgroupListItem["GroupId"].isNull())
			groupListItemObject.groupId = resultNodeGroupListgroupListItem["GroupId"].asString();
		if(!resultNodeGroupListgroupListItem["Status"].isNull())
			groupListItemObject.status = std::stoi(resultNodeGroupListgroupListItem["Status"].asString());
		result_.groupList.push_back(groupListItemObject);
	}

}

ListMessageGroupResult::Result ListMessageGroupResult::getResult()const
{
	return result_;
}

