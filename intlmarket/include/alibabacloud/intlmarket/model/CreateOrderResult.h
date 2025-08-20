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

#ifndef ALIBABACLOUD_INTLMARKET_MODEL_CREATEORDERRESULT_H_
#define ALIBABACLOUD_INTLMARKET_MODEL_CREATEORDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/intlmarket/IntlMarketExport.h>

namespace AlibabaCloud
{
	namespace IntlMarket
	{
		namespace Model
		{
			class ALIBABACLOUD_INTLMARKET_EXPORT CreateOrderResult : public ServiceResult
			{
			public:


				CreateOrderResult();
				explicit CreateOrderResult(const std::string &payload);
				~CreateOrderResult();
				std::vector<std::string> getInstanceIds()const;
				std::string getOrderId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> instanceIds_;
				std::string orderId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_INTLMARKET_MODEL_CREATEORDERRESULT_H_