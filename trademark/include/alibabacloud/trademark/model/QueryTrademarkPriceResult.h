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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKPRICERESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryTrademarkPriceResult : public ServiceResult
			{
			public:
				struct PricesItem
				{
					float originalPrice;
					std::string classificationCode;
					float discountPrice;
					std::string currency;
					float tradePrice;
				};


				QueryTrademarkPriceResult();
				explicit QueryTrademarkPriceResult(const std::string &payload);
				~QueryTrademarkPriceResult();
				std::vector<PricesItem> getPrices()const;
				float getOriginalPrice()const;
				float getDiscountPrice()const;
				std::string getCurrency()const;
				float getTradePrice()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PricesItem> prices_;
				float originalPrice_;
				float discountPrice_;
				std::string currency_;
				float tradePrice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKPRICERESULT_H_