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

#include <alibabacloud/ice/model/ListSmartSysAvatarModelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

ListSmartSysAvatarModelsResult::ListSmartSysAvatarModelsResult() :
	ServiceResult()
{}

ListSmartSysAvatarModelsResult::ListSmartSysAvatarModelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSmartSysAvatarModelsResult::~ListSmartSysAvatarModelsResult()
{}

void ListSmartSysAvatarModelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSmartSysAvatarModelListNode = value["SmartSysAvatarModelList"]["SmartSysAvatarModelListItem"];
	for (auto valueSmartSysAvatarModelListSmartSysAvatarModelListItem : allSmartSysAvatarModelListNode)
	{
		SmartSysAvatarModelListItem smartSysAvatarModelListObject;
		if(!valueSmartSysAvatarModelListSmartSysAvatarModelListItem["AvatarName"].isNull())
			smartSysAvatarModelListObject.avatarName = valueSmartSysAvatarModelListSmartSysAvatarModelListItem["AvatarName"].asString();
		if(!valueSmartSysAvatarModelListSmartSysAvatarModelListItem["AvatarId"].isNull())
			smartSysAvatarModelListObject.avatarId = valueSmartSysAvatarModelListSmartSysAvatarModelListItem["AvatarId"].asString();
		if(!valueSmartSysAvatarModelListSmartSysAvatarModelListItem["CoverUrl"].isNull())
			smartSysAvatarModelListObject.coverUrl = valueSmartSysAvatarModelListSmartSysAvatarModelListItem["CoverUrl"].asString();
		if(!valueSmartSysAvatarModelListSmartSysAvatarModelListItem["VideoUrl"].isNull())
			smartSysAvatarModelListObject.videoUrl = valueSmartSysAvatarModelListSmartSysAvatarModelListItem["VideoUrl"].asString();
		smartSysAvatarModelList_.push_back(smartSysAvatarModelListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListSmartSysAvatarModelsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListSmartSysAvatarModelsResult::SmartSysAvatarModelListItem> ListSmartSysAvatarModelsResult::getSmartSysAvatarModelList()const
{
	return smartSysAvatarModelList_;
}

