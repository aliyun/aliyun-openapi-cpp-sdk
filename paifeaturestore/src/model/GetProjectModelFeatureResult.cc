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

#include <alibabacloud/paifeaturestore/model/GetProjectModelFeatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetProjectModelFeatureResult::GetProjectModelFeatureResult() :
	ServiceResult()
{}

GetProjectModelFeatureResult::GetProjectModelFeatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectModelFeatureResult::~GetProjectModelFeatureResult()
{}

void GetProjectModelFeatureResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFeaturesNode = value["Features"]["FeaturesItem"];
	for (auto valueFeaturesFeaturesItem : allFeaturesNode)
	{
		FeaturesItem featuresObject;
		if(!valueFeaturesFeaturesItem["FeatureViewId"].isNull())
			featuresObject.featureViewId = valueFeaturesFeaturesItem["FeatureViewId"].asString();
		if(!valueFeaturesFeaturesItem["FeatureViewName"].isNull())
			featuresObject.featureViewName = valueFeaturesFeaturesItem["FeatureViewName"].asString();
		if(!valueFeaturesFeaturesItem["Name"].isNull())
			featuresObject.name = valueFeaturesFeaturesItem["Name"].asString();
		if(!valueFeaturesFeaturesItem["Type"].isNull())
			featuresObject.type = valueFeaturesFeaturesItem["Type"].asString();
		if(!valueFeaturesFeaturesItem["AliasName"].isNull())
			featuresObject.aliasName = valueFeaturesFeaturesItem["AliasName"].asString();
		features_.push_back(featuresObject);
	}
	if(!value["ModelFeatureId"].isNull())
		modelFeatureId_ = value["ModelFeatureId"].asString();
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Owner"].isNull())
		owner_ = value["Owner"].asString();
	if(!value["LabelTableId"].isNull())
		labelTableId_ = value["LabelTableId"].asString();
	if(!value["LabelDatasourceId"].isNull())
		labelDatasourceId_ = value["LabelDatasourceId"].asString();
	if(!value["LabelDatasourceTable"].isNull())
		labelDatasourceTable_ = value["LabelDatasourceTable"].asString();
	if(!value["LabelEventTime"].isNull())
		labelEventTime_ = value["LabelEventTime"].asString();
	if(!value["TrainingSetTable"].isNull())
		trainingSetTable_ = value["TrainingSetTable"].asString();
	if(!value["TrainingSetFGTable"].isNull())
		trainingSetFGTable_ = value["TrainingSetFGTable"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();

}

std::string GetProjectModelFeatureResult::getOwner()const
{
	return owner_;
}

std::string GetProjectModelFeatureResult::getProjectName()const
{
	return projectName_;
}

std::string GetProjectModelFeatureResult::getLabelDatasourceTable()const
{
	return labelDatasourceTable_;
}

std::string GetProjectModelFeatureResult::getProjectId()const
{
	return projectId_;
}

std::string GetProjectModelFeatureResult::getLabelDatasourceId()const
{
	return labelDatasourceId_;
}

std::string GetProjectModelFeatureResult::getModelFeatureId()const
{
	return modelFeatureId_;
}

std::string GetProjectModelFeatureResult::getTrainingSetFGTable()const
{
	return trainingSetFGTable_;
}

std::string GetProjectModelFeatureResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

std::string GetProjectModelFeatureResult::getName()const
{
	return name_;
}

std::string GetProjectModelFeatureResult::getTrainingSetTable()const
{
	return trainingSetTable_;
}

std::string GetProjectModelFeatureResult::getLabelEventTime()const
{
	return labelEventTime_;
}

std::vector<GetProjectModelFeatureResult::FeaturesItem> GetProjectModelFeatureResult::getFeatures()const
{
	return features_;
}

std::string GetProjectModelFeatureResult::getLabelTableId()const
{
	return labelTableId_;
}

std::string GetProjectModelFeatureResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

