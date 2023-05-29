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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTSRESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/market/MarketExport.h>

namespace AlibabaCloud
{
	namespace Market
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKET_EXPORT DescribeProductsResult : public ServiceResult
			{
			public:
				struct ProductItem
				{
					long categoryId;
					std::string warrantyDate;
					std::string imageUrl;
					std::string operationSystem;
					std::string deliveryDate;
					std::string targetUrl;
					std::string code;
					std::string priceInfo;
					std::string shortDescription;
					std::string name;
					std::string deliveryWay;
					long supplierId;
					std::string score;
					std::string supplierName;
					std::string suggestedPrice;
					std::string tags;
				};


				DescribeProductsResult();
				explicit DescribeProductsResult(const std::string &payload);
				~DescribeProductsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ProductItem> getProductItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ProductItem> productItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEPRODUCTSRESULT_H_