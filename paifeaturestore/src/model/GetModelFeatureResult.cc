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

#include <alibabacloud/paifeaturestore/model/GetModelFeatureResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PaiFeatureStore;
using namespace AlibabaCloud::PaiFeatureStore::Model;

GetModelFeatureResult::GetModelFeatureResult() :
	ServiceResult()
{}

GetModelFeatureResult::GetModelFeatureResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetModelFeatureResult::~GetModelFeatureResult()
{}

void GetModelFeatureResult::parse(const std::string &payload)
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
	auto relationsNode = value["Relations"];
	auto allDomainsNode = relationsNode["Domains"]["DomainsItem"];
	for (auto relationsNodeDomainsDomainsItem : allDomainsNode)
	{
		Relations::DomainsItem domainsItemObject;
		if(!relationsNodeDomainsDomainsItem["Id"].isNull())
			domainsItemObject.id = relationsNodeDomainsDomainsItem["Id"].asString();
		if(!relationsNodeDomainsDomainsItem["Name"].isNull())
			domainsItemObject.name = relationsNodeDomainsDomainsItem["Name"].asString();
		if(!relationsNodeDomainsDomainsItem["DomainType"].isNull())
			domainsItemObject.domainType = relationsNodeDomainsDomainsItem["DomainType"].asString();
		relations_.domains.push_back(domainsItemObject);
	}
	auto allLinksNode = relationsNode["Links"]["LinksItem"];
	for (auto relationsNodeLinksLinksItem : allLinksNode)
	{
		Relations::LinksItem linksItemObject;
		if(!relationsNodeLinksLinksItem["From"].isNull())
			linksItemObject.from = relationsNodeLinksLinksItem["From"].asString();
		if(!relationsNodeLinksLinksItem["To"].isNull())
			linksItemObject.to = relationsNodeLinksLinksItem["To"].asString();
		if(!relationsNodeLinksLinksItem["Link"].isNull())
			linksItemObject.link = relationsNodeLinksLinksItem["Link"].asString();
		relations_.links.push_back(linksItemObject);
	}
	if(!value["ProjectId"].isNull())
		projectId_ = value["ProjectId"].asString();
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Owner"].isNull())
		owner_ = value["Owner"].asString();
	if(!value["GmtCreateTime"].isNull())
		gmtCreateTime_ = value["GmtCreateTime"].asString();
	if(!value["GmtModifiedTime"].isNull())
		gmtModifiedTime_ = value["GmtModifiedTime"].asString();
	if(!value["LabelTableId"].isNull())
		labelTableId_ = value["LabelTableId"].asString();
	if(!value["LabelTableName"].isNull())
		labelTableName_ = value["LabelTableName"].asString();
	if(!value["TrainingSetTable"].isNull())
		trainingSetTable_ = value["TrainingSetTable"].asString();
	if(!value["TrainingSetFGTable"].isNull())
		trainingSetFGTable_ = value["TrainingSetFGTable"].asString();
	if(!value["ExportTrainingSetTableScript"].isNull())
		exportTrainingSetTableScript_ = value["ExportTrainingSetTableScript"].asString();
	if(!value["LabelPriorityLevel"].isNull())
		labelPriorityLevel_ = std::stol(value["LabelPriorityLevel"].asString());

}

std::string GetModelFeatureResult::getOwner()const
{
	return owner_;
}

std::string GetModelFeatureResult::getProjectName()const
{
	return projectName_;
}

std::string GetModelFeatureResult::getProjectId()const
{
	return projectId_;
}

GetModelFeatureResult::Relations GetModelFeatureResult::getRelations()const
{
	return relations_;
}

std::string GetModelFeatureResult::getGmtModifiedTime()const
{
	return gmtModifiedTime_;
}

std::string GetModelFeatureResult::getTrainingSetFGTable()const
{
	return trainingSetFGTable_;
}

std::string GetModelFeatureResult::getName()const
{
	return name_;
}

std::string GetModelFeatureResult::getTrainingSetTable()const
{
	return trainingSetTable_;
}

long GetModelFeatureResult::getLabelPriorityLevel()const
{
	return labelPriorityLevel_;
}

std::string GetModelFeatureResult::getExportTrainingSetTableScript()const
{
	return exportTrainingSetTableScript_;
}

std::string GetModelFeatureResult::getLabelTableName()const
{
	return labelTableName_;
}

std::vector<GetModelFeatureResult::FeaturesItem> GetModelFeatureResult::getFeatures()const
{
	return features_;
}

std::string GetModelFeatureResult::getLabelTableId()const
{
	return labelTableId_;
}

std::string GetModelFeatureResult::getGmtCreateTime()const
{
	return gmtCreateTime_;
}

