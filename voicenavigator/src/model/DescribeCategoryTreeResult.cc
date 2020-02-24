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

#include <alibabacloud/voicenavigator/model/DescribeCategoryTreeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::VoiceNavigator;
using namespace AlibabaCloud::VoiceNavigator::Model;

DescribeCategoryTreeResult::DescribeCategoryTreeResult() :
	ServiceResult()
{}

DescribeCategoryTreeResult::DescribeCategoryTreeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCategoryTreeResult::~DescribeCategoryTreeResult()
{}

void DescribeCategoryTreeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLevelsNode = value["Levels"]["Level"];
	for (auto valueLevelsLevel : allLevelsNode)
	{
		Level levelsObject;
		auto allCategoriesNode = allLevelsNode["Categories"]["Category"];
		for (auto allLevelsNodeCategoriesCategory : allCategoriesNode)
		{
			Level::Category categoriesObject;
			if(!allLevelsNodeCategoriesCategory["InstanceId"].isNull())
				categoriesObject.instanceId = allLevelsNodeCategoriesCategory["InstanceId"].asString();
			if(!allLevelsNodeCategoriesCategory["Name"].isNull())
				categoriesObject.name = allLevelsNodeCategoriesCategory["Name"].asString();
			if(!allLevelsNodeCategoriesCategory["CategoryId"].isNull())
				categoriesObject.categoryId = allLevelsNodeCategoriesCategory["CategoryId"].asString();
			if(!allLevelsNodeCategoriesCategory["Level"].isNull())
				categoriesObject.level = std::stol(allLevelsNodeCategoriesCategory["Level"].asString());
			if(!allLevelsNodeCategoriesCategory["PreviousSiblingId"].isNull())
				categoriesObject.previousSiblingId = allLevelsNodeCategoriesCategory["PreviousSiblingId"].asString();
			if(!allLevelsNodeCategoriesCategory["NextSiblingId"].isNull())
				categoriesObject.nextSiblingId = allLevelsNodeCategoriesCategory["NextSiblingId"].asString();
			if(!allLevelsNodeCategoriesCategory["ParentId"].isNull())
				categoriesObject.parentId = allLevelsNodeCategoriesCategory["ParentId"].asString();
			levelsObject.categories.push_back(categoriesObject);
		}
		levels_.push_back(levelsObject);
	}

}

std::vector<DescribeCategoryTreeResult::Level> DescribeCategoryTreeResult::getLevels()const
{
	return levels_;
}

