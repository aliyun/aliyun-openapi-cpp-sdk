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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPERESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeRecommendInstanceTypeResult : public ServiceResult
			{
			public:
				struct RecommendInstanceType
				{
					struct InstanceType
					{
						std::string supportIoOptimized;
						int cores;
						std::string generation;
						int memory;
						std::string instanceTypeFamily;
						std::string instanceType;
					};
					struct Zone
					{
						std::vector<std::string> networkTypes;
						std::string zoneNo;
					};
					std::string zoneId;
					int priority;
					std::string networkType;
					std::string instanceChargeType;
					std::string commodityCode;
					std::string regionId;
					InstanceType instanceType;
					std::string scene;
					std::string spotStrategy;
					std::vector<RecommendInstanceType::Zone> zones;
				};


				DescribeRecommendInstanceTypeResult();
				explicit DescribeRecommendInstanceTypeResult(const std::string &payload);
				~DescribeRecommendInstanceTypeResult();
				std::vector<RecommendInstanceType> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<RecommendInstanceType> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBERECOMMENDINSTANCETYPERESULT_H_