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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEELASTICITYASSURANCESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEELASTICITYASSURANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeElasticityAssurancesResult : public ServiceResult
			{
			public:
				struct ElasticityAssuranceItem
				{
					struct AllocatedResource
					{
						struct ElasticityAssuranceUsage
						{
							int usedAmount;
							std::string accountId;
							std::string serviceName;
						};
						int usedAmount;
						std::string zoneId;
						std::vector<AllocatedResource::ElasticityAssuranceUsage> elasticityAssuranceUsages;
						int availableAmount;
						int totalAmount;
						std::string instanceType;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					struct RecurrenceRule
					{
						int startHour;
						std::string recurrenceType;
						int endHour;
						std::string recurrenceValue;
					};
					std::string status;
					int usedAssuranceTimes;
					std::string description;
					std::string endTime;
					std::string resourceGroupId;
					std::string latestStartTime;
					std::string privatePoolOptionsName;
					std::string instanceChargeType;
					std::string elasticityAssuranceOwnerId;
					std::string startTime;
					std::vector<ElasticityAssuranceItem::RecurrenceRule> recurrenceRules;
					std::string startTimeType;
					std::string privatePoolOptionsMatchCriteria;
					std::vector<ElasticityAssuranceItem::AllocatedResource> allocatedResources;
					std::string privatePoolOptionsId;
					std::string totalAssuranceTimes;
					std::string packageType;
					std::string regionId;
					std::vector<ElasticityAssuranceItem::Tag> tags;
				};


				DescribeElasticityAssurancesResult();
				explicit DescribeElasticityAssurancesResult(const std::string &payload);
				~DescribeElasticityAssurancesResult();
				std::vector<ElasticityAssuranceItem> getElasticityAssuranceSet()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ElasticityAssuranceItem> elasticityAssuranceSet_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEELASTICITYASSURANCESRESULT_H_