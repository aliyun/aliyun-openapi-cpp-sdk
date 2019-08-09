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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allLaunchTemplateSets = value["LaunchTemplateSets"]["LaunchTemplateSet"];
	for (auto value : allLaunchTemplateSets)
	{
		LaunchTemplateSet launchTemplateSetsObject;
		if(!value["CreateTime"].isNull())
			launchTemplateSetsObject.createTime = value["CreateTime"].asString();
		if(!value["ModifiedTime"].isNull())
			launchTemplateSetsObject.modifiedTime = value["ModifiedTime"].asString();
		if(!value["LaunchTemplateId"].isNull())
			launchTemplateSetsObject.launchTemplateId = value["LaunchTemplateId"].asString();
		if(!value["LaunchTemplateName"].isNull())
			launchTemplateSetsObject.launchTemplateName = value["LaunchTemplateName"].asString();
		if(!value["DefaultVersionNumber"].isNull())
			launchTemplateSetsObject.defaultVersionNumber = std::stol(value["DefaultVersionNumber"].asString());
		if(!value["LatestVersionNumber"].isNull())
			launchTemplateSetsObject.latestVersionNumber = std::stol(value["LatestVersionNumber"].asString());
		if(!value["CreatedBy"].isNull())
			launchTemplateSetsObject.createdBy = value["CreatedBy"].asString();
		if(!value["ResourceGroupId"].isNull())
			launchTemplateSetsObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			LaunchTemplateSet::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
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

