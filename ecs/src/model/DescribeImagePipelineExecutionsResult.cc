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

#include <alibabacloud/ecs/model/DescribeImagePipelineExecutionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeImagePipelineExecutionsResult::DescribeImagePipelineExecutionsResult() :
	ServiceResult()
{}

DescribeImagePipelineExecutionsResult::DescribeImagePipelineExecutionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImagePipelineExecutionsResult::~DescribeImagePipelineExecutionsResult()
{}

void DescribeImagePipelineExecutionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagePipelineExecutionNode = value["ImagePipelineExecution"]["ImagePipelineExecutionSet"];
	for (auto valueImagePipelineExecutionImagePipelineExecutionSet : allImagePipelineExecutionNode)
	{
		ImagePipelineExecutionSet imagePipelineExecutionObject;
		if(!valueImagePipelineExecutionImagePipelineExecutionSet["CreationTime"].isNull())
			imagePipelineExecutionObject.creationTime = valueImagePipelineExecutionImagePipelineExecutionSet["CreationTime"].asString();
		if(!valueImagePipelineExecutionImagePipelineExecutionSet["ImagePipelineId"].isNull())
			imagePipelineExecutionObject.imagePipelineId = valueImagePipelineExecutionImagePipelineExecutionSet["ImagePipelineId"].asString();
		if(!valueImagePipelineExecutionImagePipelineExecutionSet["Status"].isNull())
			imagePipelineExecutionObject.status = valueImagePipelineExecutionImagePipelineExecutionSet["Status"].asString();
		if(!valueImagePipelineExecutionImagePipelineExecutionSet["ModifiedTime"].isNull())
			imagePipelineExecutionObject.modifiedTime = valueImagePipelineExecutionImagePipelineExecutionSet["ModifiedTime"].asString();
		if(!valueImagePipelineExecutionImagePipelineExecutionSet["ResourceGroupId"].isNull())
			imagePipelineExecutionObject.resourceGroupId = valueImagePipelineExecutionImagePipelineExecutionSet["ResourceGroupId"].asString();
		if(!valueImagePipelineExecutionImagePipelineExecutionSet["Message"].isNull())
			imagePipelineExecutionObject.message = valueImagePipelineExecutionImagePipelineExecutionSet["Message"].asString();
		if(!valueImagePipelineExecutionImagePipelineExecutionSet["ImageId"].isNull())
			imagePipelineExecutionObject.imageId = valueImagePipelineExecutionImagePipelineExecutionSet["ImageId"].asString();
		if(!valueImagePipelineExecutionImagePipelineExecutionSet["ExecutionId"].isNull())
			imagePipelineExecutionObject.executionId = valueImagePipelineExecutionImagePipelineExecutionSet["ExecutionId"].asString();
		auto allTagsNode = valueImagePipelineExecutionImagePipelineExecutionSet["Tags"]["Tag"];
		for (auto valueImagePipelineExecutionImagePipelineExecutionSetTagsTag : allTagsNode)
		{
			ImagePipelineExecutionSet::Tag tagsObject;
			if(!valueImagePipelineExecutionImagePipelineExecutionSetTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueImagePipelineExecutionImagePipelineExecutionSetTagsTag["TagValue"].asString();
			if(!valueImagePipelineExecutionImagePipelineExecutionSetTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueImagePipelineExecutionImagePipelineExecutionSetTagsTag["TagKey"].asString();
			imagePipelineExecutionObject.tags.push_back(tagsObject);
		}
		imagePipelineExecution_.push_back(imagePipelineExecutionObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int DescribeImagePipelineExecutionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeImagePipelineExecutionsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeImagePipelineExecutionsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<DescribeImagePipelineExecutionsResult::ImagePipelineExecutionSet> DescribeImagePipelineExecutionsResult::getImagePipelineExecution()const
{
	return imagePipelineExecution_;
}

