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

#include <alibabacloud/ivision/model/DescribePredictModelsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribePredictModelsResult::DescribePredictModelsResult() :
	ServiceResult()
{}

DescribePredictModelsResult::DescribePredictModelsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePredictModelsResult::~DescribePredictModelsResult()
{}

void DescribePredictModelsResult::parse(const std::string &payload)
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
		if(!value["Name"].isNull())
			modelsObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			modelsObject.description = value["Description"].asString();
		if(!value["ProjectId"].isNull())
			modelsObject.projectId = value["ProjectId"].asString();
		if(!value["ProjectName"].isNull())
			modelsObject.projectName = value["ProjectName"].asString();
		if(!value["IterationId"].isNull())
			modelsObject.iterationId = value["IterationId"].asString();
		if(!value["IterationVersion"].isNull())
			modelsObject.iterationVersion = value["IterationVersion"].asString();
		if(!value["Regions"].isNull())
			modelsObject.regions = value["Regions"].asString();
		if(!value["CreationTime"].isNull())
			modelsObject.creationTime = value["CreationTime"].asString();
		if(!value["Source"].isNull())
			modelsObject.source = value["Source"].asString();
		if(!value["Type"].isNull())
			modelsObject.type = value["Type"].asString();
		if(!value["DeployStatus"].isNull())
			modelsObject.deployStatus = value["DeployStatus"].asString();
		if(!value["Precision"].isNull())
			modelsObject.precision = value["Precision"].asString();
		if(!value["Recall"].isNull())
			modelsObject.recall = value["Recall"].asString();
		if(!value["MAP"].isNull())
			modelsObject.mAP = value["MAP"].asString();
		models_.push_back(modelsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());

}

long DescribePredictModelsResult::getTotalNum()const
{
	return totalNum_;
}

long DescribePredictModelsResult::getPageSize()const
{
	return pageSize_;
}

long DescribePredictModelsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribePredictModelsResult::Model> DescribePredictModelsResult::getModels()const
{
	return models_;
}

