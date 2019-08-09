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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTPRICEHISTORYRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTPRICEHISTORYRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeSpotPriceHistoryResult : public ServiceResult
			{
			public:
				struct SpotPriceType
				{
					float spotPrice;
					float originPrice;
					std::string ioOptimized;
					std::string zoneId;
					std::string networkType;
					std::string instanceType;
					std::string timestamp;
				};


				DescribeSpotPriceHistoryResult();
				explicit DescribeSpotPriceHistoryResult(const std::string &payload);
				~DescribeSpotPriceHistoryResult();
				std::string getCurrency()const;
				int getNextOffset()const;
				std::vector<SpotPriceType> getSpotPrices()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string currency_;
				int nextOffset_;
				std::vector<SpotPriceType> spotPrices_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESPOTPRICEHISTORYRESULT_H_