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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONMETADATARESULT_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONMETADATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/governance/GovernanceExport.h>

namespace AlibabaCloud
{
	namespace Governance
	{
		namespace Model
		{
			class ALIBABACLOUD_GOVERNANCE_EXPORT ListEvaluationMetadataResult : public ServiceResult
			{
			public:
				struct EvaluationMetadataItem
				{
					struct MetadataItem
					{
						struct RemediationMetadata
						{
							struct RemediationItem
							{
								struct Action
								{
									struct GuidanceItem
									{
										std::string buttonName;
										std::string buttonRef;
										std::string content;
										std::string title;
									};
									std::vector<Action::GuidanceItem> guidance;
									std::string suggestion;
									std::string description;
									std::string notice;
									std::string classification;
									std::string costDescription;
								};
								std::vector<RemediationItem::Action> actions;
								std::string remediationTarget;
								std::string remediationParameters;
								std::string analysisDefinition;
								std::string remediationType;
							};
							std::vector<RemediationItem> remediation;
						};
						struct ResourceMetadata
						{
							struct ResourcePropertyMetadataItem
							{
								std::string propertyName;
								std::string propertyReference;
								std::string displayName;
								std::string propertyType;
							};
							std::vector<ResourcePropertyMetadataItem> resourcePropertyMetadata;
						};
						std::string parentId;
						std::string category;
						std::string description;
						std::string scope;
						std::string displayName;
						std::string recommendationLevel;
						std::string stage;
						std::string id;
						RemediationMetadata remediationMetadata;
						ResourceMetadata resourceMetadata;
						std::string noRiskDisplayName;
					};
					std::string type;
					std::vector<EvaluationMetadataItem::MetadataItem> metadata;
				};


				ListEvaluationMetadataResult();
				explicit ListEvaluationMetadataResult(const std::string &payload);
				~ListEvaluationMetadataResult();
				std::vector<EvaluationMetadataItem> getEvaluationMetadata()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<EvaluationMetadataItem> evaluationMetadata_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONMETADATARESULT_H_