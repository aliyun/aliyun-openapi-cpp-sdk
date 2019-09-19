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

#include <alibabacloud/aegis/model/DescribeDingTalkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeDingTalkResult::DescribeDingTalkResult() :
	ServiceResult()
{}

DescribeDingTalkResult::DescribeDingTalkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDingTalkResult::~DescribeDingTalkResult()
{}

void DescribeDingTalkResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActionListNode = value["ActionList"]["ActionListArr"];
	for (auto valueActionListActionListArr : allActionListNode)
	{
		ActionListArr actionListObject;
		if(!valueActionListActionListArr["GmtModified"].isNull())
			actionListObject.gmtModified = std::stol(valueActionListActionListArr["GmtModified"].asString());
		if(!valueActionListActionListArr["Id"].isNull())
			actionListObject.id = std::stoi(valueActionListActionListArr["Id"].asString());
		if(!valueActionListActionListArr["AliUid"].isNull())
			actionListObject.aliUid = std::stol(valueActionListActionListArr["AliUid"].asString());
		if(!valueActionListActionListArr["GmtCreate"].isNull())
			actionListObject.gmtCreate = std::stol(valueActionListActionListArr["GmtCreate"].asString());
		if(!valueActionListActionListArr["Url"].isNull())
			actionListObject.url = valueActionListActionListArr["Url"].asString();
		if(!valueActionListActionListArr["IntervalTime"].isNull())
			actionListObject.intervalTime = std::stoi(valueActionListActionListArr["IntervalTime"].asString());
		if(!valueActionListActionListArr["ActionName"].isNull())
			actionListObject.actionName = valueActionListActionListArr["ActionName"].asString();
		actionList_.push_back(actionListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());

}

DescribeDingTalkResult::PageInfo DescribeDingTalkResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeDingTalkResult::ActionListArr> DescribeDingTalkResult::getActionList()const
{
	return actionList_;
}

