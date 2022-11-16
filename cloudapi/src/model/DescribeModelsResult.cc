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

#include <alibabacloud/cloudapi/model/DescribeModelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeModelsResult::DescribeModelsResult() :
	ServiceResult()
{}

DescribeModelsResult::DescribeModelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeModelsResult::~DescribeModelsResult()
{}

void DescribeModelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModelDetailsNode = value["ModelDetails"]["ModelDetail"];
	for (auto valueModelDetailsModelDetail : allModelDetailsNode)
	{
		ModelDetail modelDetailsObject;
		if(!valueModelDetailsModelDetail["ModifiedTime"].isNull())
			modelDetailsObject.modifiedTime = valueModelDetailsModelDetail["ModifiedTime"].asString();
		if(!valueModelDetailsModelDetail["GroupId"].isNull())
			modelDetailsObject.groupId = valueModelDetailsModelDetail["GroupId"].asString();
		if(!valueModelDetailsModelDetail["Description"].isNull())
			modelDetailsObject.description = valueModelDetailsModelDetail["Description"].asString();
		if(!valueModelDetailsModelDetail["Schema"].isNull())
			modelDetailsObject.schema = valueModelDetailsModelDetail["Schema"].asString();
		if(!valueModelDetailsModelDetail["ModelName"].isNull())
			modelDetailsObject.modelName = valueModelDetailsModelDetail["ModelName"].asString();
		if(!valueModelDetailsModelDetail["CreatedTime"].isNull())
			modelDetailsObject.createdTime = valueModelDetailsModelDetail["CreatedTime"].asString();
		if(!valueModelDetailsModelDetail["ModelId"].isNull())
			modelDetailsObject.modelId = valueModelDetailsModelDetail["ModelId"].asString();
		if(!valueModelDetailsModelDetail["ModelRef"].isNull())
			modelDetailsObject.modelRef = valueModelDetailsModelDetail["ModelRef"].asString();
		modelDetails_.push_back(modelDetailsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeModelsResult::ModelDetail> DescribeModelsResult::getModelDetails()const
{
	return modelDetails_;
}

int DescribeModelsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeModelsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeModelsResult::getPageNumber()const
{
	return pageNumber_;
}

