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

#ifndef ALIBABACLOUD_CONFIG_MODEL_GETCONFIGRULERESULT_H_
#define ALIBABACLOUD_CONFIG_MODEL_GETCONFIGRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/config/ConfigExport.h>

namespace AlibabaCloud
{
	namespace Config
	{
		namespace Model
		{
			class ALIBABACLOUD_CONFIG_EXPORT GetConfigRuleResult : public ServiceResult
			{
			public:
				struct ConfigRule
				{
					struct Source
					{
						struct SourceDetailsItem
						{
							std::string eventSource;
							std::string messageType;
							std::string maximumExecutionFrequency;
						};
						std::string owner;
						std::string identifier;
						std::vector<std::string> sourceConditions;
						std::vector<SourceDetailsItem> sourceDetails;
						std::string conditions;
					};
					struct ManagedRule
					{
						struct SourceDetailsItem2
						{
							std::string eventSource;
							std::string messageType;
							std::string maximumExecutionFrequency;
						};
						std::string managedRuleName;
						std::string optionalInputParameterDetails;
						std::string description;
						std::string identifier;
						std::string compulsoryInputParameterDetails;
						std::vector<std::string> labels;
						std::vector<SourceDetailsItem2> sourceDetails1;
						std::string helpUrl;
					};
					struct CreateBy
					{
						std::string compliancePackId;
						std::string aggregatorName;
						std::string compliancePackName;
						std::string creatorId;
						std::string creatorType;
						std::string creatorName;
						std::string aggregatorId;
					};
					struct ConfigRuleEvaluationStatus
					{
						std::string lastErrorMessage;
						long lastFailedInvocationTimestamp;
						long lastSuccessfulEvaluationTimestamp;
						long firstActivatedTimestamp;
						bool firstEvaluationStarted;
						long lastFailedEvaluationTimestamp;
						std::string lastErrorCode;
						long lastSuccessfulInvocationTimestamp;
					};
					struct Scope
					{
						std::vector<std::string> complianceResourceTypes;
					};
					struct Compliance
					{
						std::string complianceType;
						int count;
					};
					std::string tagValueScope;
					std::string description;
					long accountId;
					Compliance compliance;
					std::string tagKeyLogicScope;
					CreateBy createBy;
					ConfigRuleEvaluationStatus configRuleEvaluationStatus;
					Source source;
					std::string maximumExecutionFrequency;
					std::string regionIdsScope;
					long modifiedTimestamp;
					std::string resourceGroupIdsScope;
					long createTimestamp;
					std::string inputParameters;
					std::string tagKeyScope;
					ManagedRule managedRule;
					std::string excludeResourceIdsScope;
					std::string configRuleState;
					std::string configRuleId;
					Scope scope;
					std::string configRuleArn;
					std::string configRuleTriggerTypes;
					std::string configRuleName;
					int riskLevel;
					std::string resourceTypesScope;
					std::string serviceChannel;
				};


				GetConfigRuleResult();
				explicit GetConfigRuleResult(const std::string &payload);
				~GetConfigRuleResult();
				ConfigRule getConfigRule()const;

			protected:
				void parse(const std::string &payload);
			private:
				ConfigRule configRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CONFIG_MODEL_GETCONFIGRULERESULT_H_