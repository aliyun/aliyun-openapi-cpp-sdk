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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEMANDSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEMANDSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDemandsResult : public ServiceResult
			{
			public:
				struct Demand
				{
					struct SupplyInfo
					{
						std::string supplyStatus;
						std::string supplyStartTime;
						int amount;
						std::string supplyEndTime;
					};
					std::string zoneId;
					std::string demandTime;
					std::string endTime;
					std::string instanceTypeFamily;
					std::string instanceChargeType;
					std::vector<Demand::SupplyInfo> supplyInfos;
					std::string startTime;
					int period;
					int availableAmount;
					int totalAmount;
					int usedAmount;
					int deliveringAmount;
					std::string instanceType;
					std::string demandStatus;
					std::string periodUnit;
				};


				DescribeDemandsResult();
				explicit DescribeDemandsResult(const std::string &payload);
				~DescribeDemandsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Demand> getDemands()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Demand> demands_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEMANDSRESULT_H_