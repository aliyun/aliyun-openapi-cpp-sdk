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

#include <alibabacloud/ecs/model/DescribeLaunchTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeLaunchTemplatesResult::DescribeLaunchTemplatesResult() :
	ServiceResult()
{}

DescribeLaunchTemplatesResult::DescribeLaunchTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLaunchTemplatesResult::~DescribeLaunchTemplatesResult()
{}

void DescribeLaunchTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLaunchTemplateSetsNode = value["LaunchTemplateSets"]["LaunchTemplateSet"];
	for (auto valueLaunchTemplateSetsLaunchTemplateSet : allLaunchTemplateSetsNode)
	{
		LaunchTemplateSet launchTemplateSetsObject;
		if(!valueLaunchTemplateSetsLaunchTemplateSet["CreateTime"].isNull())
			launchTemplateSetsObject.createTime = valueLaunchTemplateSetsLaunchTemplateSet["CreateTime"].asString();
		if(!valueLaunchTemplateSetsLaunchTemplateSet["ModifiedTime"].isNull())
			launchTemplateSetsObject.modifiedTime = valueLaunchTemplateSetsLaunchTemplateSet["ModifiedTime"].asString();
		if(!valueLaunchTemplateSetsLaunchTemplateSet["LaunchTemplateId"].isNull())
			launchTemplateSetsObject.launchTemplateId = valueLaunchTemplateSetsLaunchTemplateSet["LaunchTemplateId"].asString();
		if(!valueLaunchTemplateSetsLaunchTemplateSet["LaunchTemplateName"].isNull())
			launchTemplateSetsObject.launchTemplateName = valueLaunchTemplateSetsLaunchTemplateSet["LaunchTemplateName"].asString();
		if(!valueLaunchTemplateSetsLaunchTemplateSet["DefaultVersionNumber"].isNull())
			launchTemplateSetsObject.defaultVersionNumber = std::stol(valueLaunchTemplateSetsLaunchTemplateSet["DefaultVersionNumber"].asString());
		if(!valueLaunchTemplateSetsLaunchTemplateSet["LatestVersionNumber"].isNull())
			launchTemplateSetsObject.latestVersionNumber = std::stol(valueLaunchTemplateSetsLaunchTemplateSet["LatestVersionNumber"].asString());
		if(!valueLaunchTemplateSetsLaunchTemplateSet["CreatedBy"].isNull())
			launchTemplateSetsObject.createdBy = valueLaunchTemplateSetsLaunchTemplateSet["CreatedBy"].asString();
		if(!valueLaunchTemplateSetsLaunchTemplateSet["ResourceGroupId"].isNull())
			launchTemplateSetsObject.resourceGroupId = valueLaunchTemplateSetsLaunchTemplateSet["ResourceGroupId"].asString();
		auto allTagsNode = allLaunchTemplateSetsNode["Tags"]["Tag"];
		for (auto allLaunchTemplateSetsNodeTagsTag : allTagsNode)
		{
			LaunchTemplateSet::Tag tagsObject;
			if(!allLaunchTemplateSetsNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allLaunchTemplateSetsNodeTagsTag["TagKey"].asString();
			if(!allLaunchTemplateSetsNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allLaunchTemplateSetsNodeTagsTag["TagValue"].asString();
			launchTemplateSetsObject.tags.push_back(tagsObject);
		}
		launchTemplateSets_.push_back(launchTemplateSetsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeLaunchTemplatesResult::LaunchTemplateSet> DescribeLaunchTemplatesResult::getLaunchTemplateSets()const
{
	return launchTemplateSets_;
}

int DescribeLaunchTemplatesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeLaunchTemplatesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeLaunchTemplatesResult::getPageNumber()const
{
	return pageNumber_;
}

