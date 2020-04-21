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

#include <alibabacloud/csb/model/FindAllLinkRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

FindAllLinkRuleResult::FindAllLinkRuleResult() :
	ServiceResult()
{}

FindAllLinkRuleResult::FindAllLinkRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindAllLinkRuleResult::~FindAllLinkRuleResult()
{}

void FindAllLinkRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allLinkRuleListNode = dataNode["LinkRuleList"]["LinkRuleListItem"];
	for (auto dataNodeLinkRuleListLinkRuleListItem : allLinkRuleListNode)
	{
		Data::LinkRuleListItem linkRuleListItemObject;
		if(!dataNodeLinkRuleListLinkRuleListItem["CsbId"].isNull())
			linkRuleListItemObject.csbId = std::stol(dataNodeLinkRuleListLinkRuleListItem["CsbId"].asString());
		if(!dataNodeLinkRuleListLinkRuleListItem["OwnerId"].isNull())
			linkRuleListItemObject.ownerId = dataNodeLinkRuleListLinkRuleListItem["OwnerId"].asString();
		if(!dataNodeLinkRuleListLinkRuleListItem["GmtCreate"].isNull())
			linkRuleListItemObject.gmtCreate = std::stol(dataNodeLinkRuleListLinkRuleListItem["GmtCreate"].asString());
		if(!dataNodeLinkRuleListLinkRuleListItem["GmtModified"].isNull())
			linkRuleListItemObject.gmtModified = std::stol(dataNodeLinkRuleListLinkRuleListItem["GmtModified"].asString());
		if(!dataNodeLinkRuleListLinkRuleListItem["Id"].isNull())
			linkRuleListItemObject.id = std::stol(dataNodeLinkRuleListLinkRuleListItem["Id"].asString());
		if(!dataNodeLinkRuleListLinkRuleListItem["Deleted"].isNull())
			linkRuleListItemObject.deleted = std::stoi(dataNodeLinkRuleListLinkRuleListItem["Deleted"].asString());
		if(!dataNodeLinkRuleListLinkRuleListItem["OriginName"].isNull())
			linkRuleListItemObject.originName = dataNodeLinkRuleListLinkRuleListItem["OriginName"].asString();
		if(!dataNodeLinkRuleListLinkRuleListItem["TargetName"].isNull())
			linkRuleListItemObject.targetName = dataNodeLinkRuleListLinkRuleListItem["TargetName"].asString();
		data_.linkRuleList.push_back(linkRuleListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string FindAllLinkRuleResult::getMessage()const
{
	return message_;
}

FindAllLinkRuleResult::Data FindAllLinkRuleResult::getData()const
{
	return data_;
}

int FindAllLinkRuleResult::getCode()const
{
	return code_;
}

