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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBEELASTICSTRENGTHRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBEELASTICSTRENGTHRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeElasticStrengthResult : public ServiceResult
			{
			public:
				struct ResourcePool
				{
					struct InventoryHealth
					{
						int healthScore;
						int supplyScore;
						int adequacyScore;
						int hotScore;
					};
					std::string msg;
					std::string status;
					std::string zoneId;
					std::vector<std::string> vSwitchIds;
					InventoryHealth inventoryHealth;
					std::string instanceType;
					std::string code;
					double strength;
				};
				struct ElasticStrengthModel
				{
					struct ResourcePool2
					{
						struct InventoryHealth4
						{
							int healthScore;
							int supplyScore;
							int adequacyScore;
							int hotScore;
						};
						std::string msg;
						std::string status;
						std::string zoneId;
						std::vector<std::string> vSwitchIds3;
						InventoryHealth4 inventoryHealth4;
						std::string instanceType;
						std::string code;
						double strength;
					};
					std::vector<ElasticStrengthModel::ResourcePool2> resourcePools1;
					std::string scalingGroupId;
					std::string elasticStrength;
					double totalStrength;
				};


				DescribeElasticStrengthResult();
				explicit DescribeElasticStrengthResult(const std::string &payload);
				~DescribeElasticStrengthResult();
				std::vector<ResourcePool> getResourcePools()const;
				std::vector<ElasticStrengthModel> getElasticStrengthModels()const;
				std::string getElasticStrength()const;
				double getTotalStrength()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResourcePool> resourcePools_;
				std::vector<ElasticStrengthModel> elasticStrengthModels_;
				std::string elasticStrength_;
				double totalStrength_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBEELASTICSTRENGTHRESULT_H_