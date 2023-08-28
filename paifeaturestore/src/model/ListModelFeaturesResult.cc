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

#include <alibabacloud/paifeaturestore/model/ListModelFeaturesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

ListModelFeaturesResult::ListModelFeaturesResult() :
	ServiceResult()
{}

ListModelFeaturesResult::ListModelFeaturesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListModelFeaturesResult::~ListModelFeaturesResult()
{}

void ListModelFeaturesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModelFeaturesNode = value["ModelFeatures"]["ModelFeaturesItem"];
	for (auto valueModelFeaturesModelFeaturesItem : allModelFeaturesNode)
	{
		ModelFeaturesItem modelFeaturesObject;
		if(!valueModelFeaturesModelFeaturesItem["ModelFeatureId"].isNull())
			modelFeaturesObject.modelFeatureId = valueModelFeaturesModelFeaturesItem["ModelFeatureId"].asString();
		if(!valueModelFeaturesModelFeaturesItem["ProjectId"].isNull())
			modelFeaturesObject.projectId = valueModelFeaturesModelFeaturesItem["ProjectId"].asString();
		if(!valueModelFeaturesModelFeaturesItem["ProjectName"].isNull())
			modelFeaturesObject.projectName = valueModelFeaturesModelFeaturesItem["ProjectName"].asString();
		if(!valueModelFeaturesModelFeaturesItem["Name"].isNull())
			modelFeaturesObject.name = valueModelFeaturesModelFeaturesItem["Name"].asString();
		if(!valueModelFeaturesModelFeaturesItem["Owner"].isNull())
			modelFeaturesObject.owner = valueModelFeaturesModelFeaturesItem["Owner"].asString();
		if(!valueModelFeaturesModelFeaturesItem["GmtCreateTime"].isNull())
			modelFeaturesObject.gmtCreateTime = valueModelFeaturesModelFeaturesItem["GmtCreateTime"].asString();
		if(!valueModelFeaturesModelFeaturesItem["GmtModifiedTime"].isNull())
			modelFeaturesObject.gmtModifiedTime = valueModelFeaturesModelFeaturesItem["GmtModifiedTime"].asString();
		if(!valueModelFeaturesModelFeaturesItem["LabelTableName"].isNull())
			modelFeaturesObject.labelTableName = valueModelFeaturesModelFeaturesItem["LabelTableName"].asString();
		modelFeatures_.push_back(modelFeaturesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListModelFeaturesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListModelFeaturesResult::ModelFeaturesItem> ListModelFeaturesResult::getModelFeatures()const
{
	return modelFeatures_;
}

