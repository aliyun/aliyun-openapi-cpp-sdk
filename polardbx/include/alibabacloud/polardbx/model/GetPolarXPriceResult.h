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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_GETPOLARXPRICERESULT_H_
#define ALIBABACLOUD_POLARDBX_MODEL_GETPOLARXPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardbx/PolardbxExport.h>

namespace AlibabaCloud
{
	namespace Polardbx
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDBX_EXPORT GetPolarXPriceResult : public ServiceResult
			{
			public:
				struct OrderPrice
				{
					struct Rule
					{
						long ruleDescId;
						std::string title;
						std::string name;
					};
					std::string totalCostAmount;
					std::string tradeAmount;
					std::string payType;
					std::vector<OrderPrice::Rule> rules;
					std::string originalAmount;
					std::string discountAmount;
					std::string dBInstanceName;
				};


				GetPolarXPriceResult();
				explicit GetPolarXPriceResult(const std::string &payload);
				~GetPolarXPriceResult();
				std::vector<OrderPrice> getOrderPriceList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<OrderPrice> orderPriceList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDBX_MODEL_GETPOLARXPRICERESULT_H_