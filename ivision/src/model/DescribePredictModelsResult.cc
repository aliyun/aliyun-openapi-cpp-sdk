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
	auto allModelsNode = value["Models"]["Model"];
	for (auto valueModelsModel : allModelsNode)
	{
		Model modelsObject;
		if(!valueModelsModel["ModelId"].isNull())
			modelsObject.modelId = valueModelsModel["ModelId"].asString();
		if(!valueModelsModel["Name"].isNull())
			modelsObject.name = valueModelsModel["Name"].asString();
		if(!valueModelsModel["Description"].isNull())
			modelsObject.description = valueModelsModel["Description"].asString();
		if(!valueModelsModel["ProjectId"].isNull())
			modelsObject.projectId = valueModelsModel["ProjectId"].asString();
		if(!valueModelsModel["ProjectName"].isNull())
			modelsObject.projectName = valueModelsModel["ProjectName"].asString();
		if(!valueModelsModel["IterationId"].isNull())
			modelsObject.iterationId = valueModelsModel["IterationId"].asString();
		if(!valueModelsModel["IterationVersion"].isNull())
			modelsObject.iterationVersion = valueModelsModel["IterationVersion"].asString();
		if(!valueModelsModel["Regions"].isNull())
			modelsObject.regions = valueModelsModel["Regions"].asString();
		if(!valueModelsModel["CreationTime"].isNull())
			modelsObject.creationTime = valueModelsModel["CreationTime"].asString();
		if(!valueModelsModel["Source"].isNull())
			modelsObject.source = valueModelsModel["Source"].asString();
		if(!valueModelsModel["Type"].isNull())
			modelsObject.type = valueModelsModel["Type"].asString();
		if(!valueModelsModel["DeployStatus"].isNull())
			modelsObject.deployStatus = valueModelsModel["DeployStatus"].asString();
		if(!valueModelsModel["Precision"].isNull())
			modelsObject.precision = valueModelsModel["Precision"].asString();
		if(!valueModelsModel["Recall"].isNull())
			modelsObject.recall = valueModelsModel["Recall"].asString();
		if(!valueModelsModel["MAP"].isNull())
			modelsObject.mAP = valueModelsModel["MAP"].asString();
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

