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
	auto allActionList = value["ActionList"]["ActionListArr"];
	for (auto value : allActionList)
	{
		ActionListArr actionListObject;
		if(!value["GmtModified"].isNull())
			actionListObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["Id"].isNull())
			actionListObject.id = std::stoi(value["Id"].asString());
		if(!value["AliUid"].isNull())
			actionListObject.aliUid = std::stol(value["AliUid"].asString());
		if(!value["GmtCreate"].isNull())
			actionListObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["Url"].isNull())
			actionListObject.url = value["Url"].asString();
		if(!value["IntervalTime"].isNull())
			actionListObject.intervalTime = std::stoi(value["IntervalTime"].asString());
		if(!value["ActionName"].isNull())
			actionListObject.actionName = value["ActionName"].asString();
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

