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

#include <alibabacloud/governance/model/ListEvaluationMetadataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Governance;
using namespace AlibabaCloud::Governance::Model;

ListEvaluationMetadataResult::ListEvaluationMetadataResult() :
	ServiceResult()
{}

ListEvaluationMetadataResult::ListEvaluationMetadataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEvaluationMetadataResult::~ListEvaluationMetadataResult()
{}

void ListEvaluationMetadataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEvaluationMetadataNode = value["EvaluationMetadata"]["EvaluationMetadataItem"];
	for (auto valueEvaluationMetadataEvaluationMetadataItem : allEvaluationMetadataNode)
	{
		EvaluationMetadataItem evaluationMetadataObject;
		if(!valueEvaluationMetadataEvaluationMetadataItem["Type"].isNull())
			evaluationMetadataObject.type = valueEvaluationMetadataEvaluationMetadataItem["Type"].asString();
		auto allMetadataNode = valueEvaluationMetadataEvaluationMetadataItem["Metadata"]["MetadataItem"];
		for (auto valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem : allMetadataNode)
		{
			EvaluationMetadataItem::MetadataItem metadataObject;
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Category"].isNull())
				metadataObject.category = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Category"].asString();
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Description"].isNull())
				metadataObject.description = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Description"].asString();
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["DisplayName"].isNull())
				metadataObject.displayName = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["DisplayName"].asString();
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Id"].isNull())
				metadataObject.id = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Id"].asString();
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["NoRiskDisplayName"].isNull())
				metadataObject.noRiskDisplayName = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["NoRiskDisplayName"].asString();
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["ParentId"].isNull())
				metadataObject.parentId = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["ParentId"].asString();
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["RecommendationLevel"].isNull())
				metadataObject.recommendationLevel = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["RecommendationLevel"].asString();
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Scope"].isNull())
				metadataObject.scope = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Scope"].asString();
			if(!valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Stage"].isNull())
				metadataObject.stage = valueEvaluationMetadataEvaluationMetadataItemMetadataMetadataItem["Stage"].asString();
			auto remediationMetadataNode = value["RemediationMetadata"];
			auto allRemediationNode = remediationMetadataNode["Remediation"]["RemediationItem"];
			for (auto remediationMetadataNodeRemediationRemediationItem : allRemediationNode)
			{
				EvaluationMetadataItem::MetadataItem::RemediationMetadata::RemediationItem remediationItemObject;
				if(!remediationMetadataNodeRemediationRemediationItem["AnalysisDefinition"].isNull())
					remediationItemObject.analysisDefinition = remediationMetadataNodeRemediationRemediationItem["AnalysisDefinition"].asString();
				if(!remediationMetadataNodeRemediationRemediationItem["RemediationParameters"].isNull())
					remediationItemObject.remediationParameters = remediationMetadataNodeRemediationRemediationItem["RemediationParameters"].asString();
				if(!remediationMetadataNodeRemediationRemediationItem["RemediationTarget"].isNull())
					remediationItemObject.remediationTarget = remediationMetadataNodeRemediationRemediationItem["RemediationTarget"].asString();
				if(!remediationMetadataNodeRemediationRemediationItem["RemediationType"].isNull())
					remediationItemObject.remediationType = remediationMetadataNodeRemediationRemediationItem["RemediationType"].asString();
				auto allActionsNode = remediationMetadataNodeRemediationRemediationItem["Actions"]["Action"];
				for (auto remediationMetadataNodeRemediationRemediationItemActionsAction : allActionsNode)
				{
					EvaluationMetadataItem::MetadataItem::RemediationMetadata::RemediationItem::Action actionsObject;
					if(!remediationMetadataNodeRemediationRemediationItemActionsAction["Classification"].isNull())
						actionsObject.classification = remediationMetadataNodeRemediationRemediationItemActionsAction["Classification"].asString();
					if(!remediationMetadataNodeRemediationRemediationItemActionsAction["CostDescription"].isNull())
						actionsObject.costDescription = remediationMetadataNodeRemediationRemediationItemActionsAction["CostDescription"].asString();
					if(!remediationMetadataNodeRemediationRemediationItemActionsAction["Description"].isNull())
						actionsObject.description = remediationMetadataNodeRemediationRemediationItemActionsAction["Description"].asString();
					if(!remediationMetadataNodeRemediationRemediationItemActionsAction["Notice"].isNull())
						actionsObject.notice = remediationMetadataNodeRemediationRemediationItemActionsAction["Notice"].asString();
					if(!remediationMetadataNodeRemediationRemediationItemActionsAction["Suggestion"].isNull())
						actionsObject.suggestion = remediationMetadataNodeRemediationRemediationItemActionsAction["Suggestion"].asString();
					auto allGuidanceNode = remediationMetadataNodeRemediationRemediationItemActionsAction["Guidance"]["GuidanceItem"];
					for (auto remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem : allGuidanceNode)
					{
						EvaluationMetadataItem::MetadataItem::RemediationMetadata::RemediationItem::Action::GuidanceItem guidanceObject;
						if(!remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem["ButtonName"].isNull())
							guidanceObject.buttonName = remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem["ButtonName"].asString();
						if(!remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem["ButtonRef"].isNull())
							guidanceObject.buttonRef = remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem["ButtonRef"].asString();
						if(!remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem["Content"].isNull())
							guidanceObject.content = remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem["Content"].asString();
						if(!remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem["Title"].isNull())
							guidanceObject.title = remediationMetadataNodeRemediationRemediationItemActionsActionGuidanceGuidanceItem["Title"].asString();
						actionsObject.guidance.push_back(guidanceObject);
					}
					remediationItemObject.actions.push_back(actionsObject);
				}
				metadataObject.remediationMetadata.remediation.push_back(remediationItemObject);
			}
			auto resourceMetadataNode = value["ResourceMetadata"];
			auto allResourcePropertyMetadataNode = resourceMetadataNode["ResourcePropertyMetadata"]["ResourcePropertyMetadataItem"];
			for (auto resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem : allResourcePropertyMetadataNode)
			{
				EvaluationMetadataItem::MetadataItem::ResourceMetadata::ResourcePropertyMetadataItem resourcePropertyMetadataItemObject;
				if(!resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem["DisplayName"].isNull())
					resourcePropertyMetadataItemObject.displayName = resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem["DisplayName"].asString();
				if(!resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem["PropertyName"].isNull())
					resourcePropertyMetadataItemObject.propertyName = resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem["PropertyName"].asString();
				if(!resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem["PropertyReference"].isNull())
					resourcePropertyMetadataItemObject.propertyReference = resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem["PropertyReference"].asString();
				if(!resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem["PropertyType"].isNull())
					resourcePropertyMetadataItemObject.propertyType = resourceMetadataNodeResourcePropertyMetadataResourcePropertyMetadataItem["PropertyType"].asString();
				metadataObject.resourceMetadata.resourcePropertyMetadata.push_back(resourcePropertyMetadataItemObject);
			}
			evaluationMetadataObject.metadata.push_back(metadataObject);
		}
		evaluationMetadata_.push_back(evaluationMetadataObject);
	}

}

std::vector<ListEvaluationMetadataResult::EvaluationMetadataItem> ListEvaluationMetadataResult::getEvaluationMetadata()const
{
	return evaluationMetadata_;
}

