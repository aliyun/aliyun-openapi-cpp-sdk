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

#include <alibabacloud/governance/model/GetAccountFactoryBaselineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

GetAccountFactoryBaselineResult::GetAccountFactoryBaselineResult() :
	ServiceResult()
{}

GetAccountFactoryBaselineResult::GetAccountFactoryBaselineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccountFactoryBaselineResult::~GetAccountFactoryBaselineResult()
{}

void GetAccountFactoryBaselineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaselineItemsNode = value["BaselineItems"]["BaselineItem"];
	for (auto valueBaselineItemsBaselineItem : allBaselineItemsNode)
	{
		BaselineItem baselineItemsObject;
		if(!valueBaselineItemsBaselineItem["Config"].isNull())
			baselineItemsObject.config = valueBaselineItemsBaselineItem["Config"].asString();
		if(!valueBaselineItemsBaselineItem["Name"].isNull())
			baselineItemsObject.name = valueBaselineItemsBaselineItem["Name"].asString();
		if(!valueBaselineItemsBaselineItem["Version"].isNull())
			baselineItemsObject.version = valueBaselineItemsBaselineItem["Version"].asString();
		baselineItems_.push_back(baselineItemsObject);
	}
	if(!value["BaselineId"].isNull())
		baselineId_ = value["BaselineId"].asString();
	if(!value["BaselineName"].isNull())
		baselineName_ = value["BaselineName"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["UpdateTime"].isNull())
		updateTime_ = value["UpdateTime"].asString();

}

std::string GetAccountFactoryBaselineResult::getBaselineId()const
{
	return baselineId_;
}

std::vector<GetAccountFactoryBaselineResult::BaselineItem> GetAccountFactoryBaselineResult::getBaselineItems()const
{
	return baselineItems_;
}

std::string GetAccountFactoryBaselineResult::getType()const
{
	return type_;
}

std::string GetAccountFactoryBaselineResult::getDescription()const
{
	return description_;
}

std::string GetAccountFactoryBaselineResult::getCreateTime()const
{
	return createTime_;
}

std::string GetAccountFactoryBaselineResult::getBaselineName()const
{
	return baselineName_;
}

std::string GetAccountFactoryBaselineResult::getUpdateTime()const
{
	return updateTime_;
}

