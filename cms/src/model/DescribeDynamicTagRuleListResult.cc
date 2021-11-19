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

#include <alibabacloud/cms/model/DescribeDynamicTagRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeDynamicTagRuleListResult::DescribeDynamicTagRuleListResult() :
	ServiceResult()
{}

DescribeDynamicTagRuleListResult::DescribeDynamicTagRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDynamicTagRuleListResult::~DescribeDynamicTagRuleListResult()
{}

void DescribeDynamicTagRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagGroupListNode = value["TagGroupList"]["TagGroup"];
	for (auto valueTagGroupListTagGroup : allTagGroupListNode)
	{
		TagGroup tagGroupListObject;
		if(!valueTagGroupListTagGroup["Status"].isNull())
			tagGroupListObject.status = valueTagGroupListTagGroup["Status"].asString();
		if(!valueTagGroupListTagGroup["MatchExpressFilterRelation"].isNull())
			tagGroupListObject.matchExpressFilterRelation = valueTagGroupListTagGroup["MatchExpressFilterRelation"].asString();
		if(!valueTagGroupListTagGroup["RegionId"].isNull())
			tagGroupListObject.regionId = valueTagGroupListTagGroup["RegionId"].asString();
		if(!valueTagGroupListTagGroup["TagKey"].isNull())
			tagGroupListObject.tagKey = valueTagGroupListTagGroup["TagKey"].asString();
		if(!valueTagGroupListTagGroup["DynamicTagRuleId"].isNull())
			tagGroupListObject.dynamicTagRuleId = valueTagGroupListTagGroup["DynamicTagRuleId"].asString();
		auto allMatchExpressNode = valueTagGroupListTagGroup["MatchExpress"]["MatchExpressItem"];
		for (auto valueTagGroupListTagGroupMatchExpressMatchExpressItem : allMatchExpressNode)
		{
			TagGroup::MatchExpressItem matchExpressObject;
			if(!valueTagGroupListTagGroupMatchExpressMatchExpressItem["TagValue"].isNull())
				matchExpressObject.tagValue = valueTagGroupListTagGroupMatchExpressMatchExpressItem["TagValue"].asString();
			if(!valueTagGroupListTagGroupMatchExpressMatchExpressItem["TagValueMatchFunction"].isNull())
				matchExpressObject.tagValueMatchFunction = valueTagGroupListTagGroupMatchExpressMatchExpressItem["TagValueMatchFunction"].asString();
			tagGroupListObject.matchExpress.push_back(matchExpressObject);
		}
		auto allTemplateIdList = value["TemplateIdList"]["TemplateIdList"];
		for (auto value : allTemplateIdList)
			tagGroupListObject.templateIdList.push_back(value.asString());
		auto allContactGroupList = value["ContactGroupList"]["ContactGroupList"];
		for (auto value : allContactGroupList)
			tagGroupListObject.contactGroupList.push_back(value.asString());
		tagGroupList_.push_back(tagGroupListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::string DescribeDynamicTagRuleListResult::getMessage()const
{
	return message_;
}

std::string DescribeDynamicTagRuleListResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDynamicTagRuleListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDynamicTagRuleListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDynamicTagRuleListResult::TagGroup> DescribeDynamicTagRuleListResult::getTagGroupList()const
{
	return tagGroupList_;
}

std::string DescribeDynamicTagRuleListResult::getCode()const
{
	return code_;
}

bool DescribeDynamicTagRuleListResult::getSuccess()const
{
	return success_;
}

