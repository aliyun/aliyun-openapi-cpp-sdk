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

#include <alibabacloud/ecs/model/DescribeImagePipelinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeImagePipelinesResult::DescribeImagePipelinesResult() :
	ServiceResult()
{}

DescribeImagePipelinesResult::DescribeImagePipelinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImagePipelinesResult::~DescribeImagePipelinesResult()
{}

void DescribeImagePipelinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagePipelineNode = value["ImagePipeline"]["ImagePipelineSet"];
	for (auto valueImagePipelineImagePipelineSet : allImagePipelineNode)
	{
		ImagePipelineSet imagePipelineObject;
		if(!valueImagePipelineImagePipelineSet["CreationTime"].isNull())
			imagePipelineObject.creationTime = valueImagePipelineImagePipelineSet["CreationTime"].asString();
		if(!valueImagePipelineImagePipelineSet["DeleteInstanceOnFailure"].isNull())
			imagePipelineObject.deleteInstanceOnFailure = valueImagePipelineImagePipelineSet["DeleteInstanceOnFailure"].asString() == "true";
		if(!valueImagePipelineImagePipelineSet["InstanceType"].isNull())
			imagePipelineObject.instanceType = valueImagePipelineImagePipelineSet["InstanceType"].asString();
		if(!valueImagePipelineImagePipelineSet["InternetMaxBandwidthOut"].isNull())
			imagePipelineObject.internetMaxBandwidthOut = std::stoi(valueImagePipelineImagePipelineSet["InternetMaxBandwidthOut"].asString());
		if(!valueImagePipelineImagePipelineSet["ImagePipelineId"].isNull())
			imagePipelineObject.imagePipelineId = valueImagePipelineImagePipelineSet["ImagePipelineId"].asString();
		if(!valueImagePipelineImagePipelineSet["VSwitchId"].isNull())
			imagePipelineObject.vSwitchId = valueImagePipelineImagePipelineSet["VSwitchId"].asString();
		if(!valueImagePipelineImagePipelineSet["SystemDiskSize"].isNull())
			imagePipelineObject.systemDiskSize = std::stoi(valueImagePipelineImagePipelineSet["SystemDiskSize"].asString());
		if(!valueImagePipelineImagePipelineSet["Description"].isNull())
			imagePipelineObject.description = valueImagePipelineImagePipelineSet["Description"].asString();
		if(!valueImagePipelineImagePipelineSet["BaseImage"].isNull())
			imagePipelineObject.baseImage = valueImagePipelineImagePipelineSet["BaseImage"].asString();
		if(!valueImagePipelineImagePipelineSet["ResourceGroupId"].isNull())
			imagePipelineObject.resourceGroupId = valueImagePipelineImagePipelineSet["ResourceGroupId"].asString();
		if(!valueImagePipelineImagePipelineSet["ImageName"].isNull())
			imagePipelineObject.imageName = valueImagePipelineImagePipelineSet["ImageName"].asString();
		if(!valueImagePipelineImagePipelineSet["BaseImageType"].isNull())
			imagePipelineObject.baseImageType = valueImagePipelineImagePipelineSet["BaseImageType"].asString();
		if(!valueImagePipelineImagePipelineSet["Name"].isNull())
			imagePipelineObject.name = valueImagePipelineImagePipelineSet["Name"].asString();
		if(!valueImagePipelineImagePipelineSet["BuildContent"].isNull())
			imagePipelineObject.buildContent = valueImagePipelineImagePipelineSet["BuildContent"].asString();
		auto allTagsNode = valueImagePipelineImagePipelineSet["Tags"]["Tag"];
		for (auto valueImagePipelineImagePipelineSetTagsTag : allTagsNode)
		{
			ImagePipelineSet::Tag tagsObject;
			if(!valueImagePipelineImagePipelineSetTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueImagePipelineImagePipelineSetTagsTag["TagValue"].asString();
			if(!valueImagePipelineImagePipelineSetTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueImagePipelineImagePipelineSetTagsTag["TagKey"].asString();
			imagePipelineObject.tags.push_back(tagsObject);
		}
		auto allToRegionIds = value["ToRegionIds"]["ToRegionId"];
		for (auto value : allToRegionIds)
			imagePipelineObject.toRegionIds.push_back(value.asString());
		auto allAddAccounts = value["AddAccounts"]["AddAccount"];
		for (auto value : allAddAccounts)
			imagePipelineObject.addAccounts.push_back(value.asString());
		imagePipeline_.push_back(imagePipelineObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeImagePipelinesResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeImagePipelinesResult::getNextToken()const
{
	return nextToken_;
}

int DescribeImagePipelinesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeImagePipelinesResult::ImagePipelineSet> DescribeImagePipelinesResult::getImagePipeline()const
{
	return imagePipeline_;
}

