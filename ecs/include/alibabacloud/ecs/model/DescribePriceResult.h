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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICERESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribePriceResult : public ServiceResult
			{
			public:
				struct PriceInfo
				{
					struct Price
					{
						struct ResourcePriceModel
						{
							struct Rule1
							{
								std::string description;
								long ruleId;
							};
							float originalPrice;
							float discountPrice;
							std::vector<ResourcePriceModel::Rule1> subRules;
							std::string resource;
							float tradePrice;
						};
						float originalPrice;
						float reservedInstanceHourPrice;
						float discountPrice;
						std::string currency;
						std::vector<ResourcePriceModel> detailInfos;
						float tradePrice;
					};
					struct Rule
					{
						std::string description;
						long ruleId;
					};
					Price price;
					std::vector<Rule> rules;
				};


				DescribePriceResult();
				explicit DescribePriceResult(const std::string &payload);
				~DescribePriceResult();
				PriceInfo getPriceInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				PriceInfo priceInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICERESULT_H_