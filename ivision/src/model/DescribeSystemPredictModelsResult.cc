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

#include <alibabacloud/ivision/model/DescribeSystemPredictModelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribeSystemPredictModelsResult::DescribeSystemPredictModelsResult() :
	ServiceResult()
{}

DescribeSystemPredictModelsResult::DescribeSystemPredictModelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSystemPredictModelsResult::~DescribeSystemPredictModelsResult()
{}

void DescribeSystemPredictModelsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModels = value["Models"]["Model"];
	for (auto value : allModels)
	{
		Model modelsObject;
		if(!value["ModelId"].isNull())
			modelsObject.modelId = value["ModelId"].asString();
		if(!value["Type"].isNull())
			modelsObject.type = value["Type"].asString();
		if(!value["Name"].isNull())
			modelsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			modelsObject.description = value["Description"].asString();
		if(!value["Scene"].isNull())
			modelsObject.scene = value["Scene"].asString();
		if(!value["CreationTime"].isNull())
			modelsObject.creationTime = value["CreationTime"].asString();
		models_.push_back(modelsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

long DescribeSystemPredictModelsResult::getTotalNum()const
{
	return totalNum_;
}

long DescribeSystemPredictModelsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeSystemPredictModelsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeSystemPredictModelsResult::Model> DescribeSystemPredictModelsResult::getModels()const
{
	return models_;
}

