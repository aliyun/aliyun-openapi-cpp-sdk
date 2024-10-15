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

#include <alibabacloud/ecs/model/DescribeImageComponentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeImageComponentsResult::DescribeImageComponentsResult() :
	ServiceResult()
{}

DescribeImageComponentsResult::DescribeImageComponentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageComponentsResult::~DescribeImageComponentsResult()
{}

void DescribeImageComponentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageComponentNode = value["ImageComponent"]["ImageComponentSet"];
	for (auto valueImageComponentImageComponentSet : allImageComponentNode)
	{
		ImageComponentSet imageComponentObject;
		if(!valueImageComponentImageComponentSet["CreationTime"].isNull())
			imageComponentObject.creationTime = valueImageComponentImageComponentSet["CreationTime"].asString();
		if(!valueImageComponentImageComponentSet["Description"].isNull())
			imageComponentObject.description = valueImageComponentImageComponentSet["Description"].asString();
		if(!valueImageComponentImageComponentSet["SystemType"].isNull())
			imageComponentObject.systemType = valueImageComponentImageComponentSet["SystemType"].asString();
		if(!valueImageComponentImageComponentSet["ImageComponentId"].isNull())
			imageComponentObject.imageComponentId = valueImageComponentImageComponentSet["ImageComponentId"].asString();
		if(!valueImageComponentImageComponentSet["ComponentType"].isNull())
			imageComponentObject.componentType = valueImageComponentImageComponentSet["ComponentType"].asString();
		if(!valueImageComponentImageComponentSet["ResourceGroupId"].isNull())
			imageComponentObject.resourceGroupId = valueImageComponentImageComponentSet["ResourceGroupId"].asString();
		if(!valueImageComponentImageComponentSet["Name"].isNull())
			imageComponentObject.name = valueImageComponentImageComponentSet["Name"].asString();
		if(!valueImageComponentImageComponentSet["Content"].isNull())
			imageComponentObject.content = valueImageComponentImageComponentSet["Content"].asString();
		if(!valueImageComponentImageComponentSet["Owner"].isNull())
			imageComponentObject.owner = valueImageComponentImageComponentSet["Owner"].asString();
		if(!valueImageComponentImageComponentSet["ComponentVersion"].isNull())
			imageComponentObject.componentVersion = valueImageComponentImageComponentSet["ComponentVersion"].asString();
		auto allTagsNode = valueImageComponentImageComponentSet["Tags"]["Tag"];
		for (auto valueImageComponentImageComponentSetTagsTag : allTagsNode)
		{
			ImageComponentSet::Tag tagsObject;
			if(!valueImageComponentImageComponentSetTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueImageComponentImageComponentSetTagsTag["TagValue"].asString();
			if(!valueImageComponentImageComponentSetTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueImageComponentImageComponentSetTagsTag["TagKey"].asString();
			imageComponentObject.tags.push_back(tagsObject);
		}
		auto allParametersNode = valueImageComponentImageComponentSet["Parameters"]["Parameter"];
		for (auto valueImageComponentImageComponentSetParametersParameter : allParametersNode)
		{
			ImageComponentSet::_Parameter parametersObject;
			if(!valueImageComponentImageComponentSetParametersParameter["Name"].isNull())
				parametersObject.name = valueImageComponentImageComponentSetParametersParameter["Name"].asString();
			if(!valueImageComponentImageComponentSetParametersParameter["Type"].isNull())
				parametersObject.type = valueImageComponentImageComponentSetParametersParameter["Type"].asString();
			if(!valueImageComponentImageComponentSetParametersParameter["DefaultValue"].isNull())
				parametersObject.defaultValue = valueImageComponentImageComponentSetParametersParameter["DefaultValue"].asString();
			imageComponentObject.parameters.push_back(parametersObject);
		}
		imageComponent_.push_back(imageComponentObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeImageComponentsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeImageComponentsResult::ImageComponentSet> DescribeImageComponentsResult::getImageComponent()const
{
	return imageComponent_;
}

std::string DescribeImageComponentsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeImageComponentsResult::getMaxResults()const
{
	return maxResults_;
}

