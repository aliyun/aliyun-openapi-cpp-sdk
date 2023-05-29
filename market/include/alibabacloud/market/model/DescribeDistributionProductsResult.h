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

#ifndef ALIBABACLOUD_MARKET_MODEL_DESCRIBEDISTRIBUTIONPRODUCTSRESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_DESCRIBEDISTRIBUTIONPRODUCTSRESULT_H_

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
			class ALIBABACLOUD_MARKET_EXPORT DescribeDistributionProductsResult : public ServiceResult
			{
			public:
				struct Result
				{
					std::string submissionRadio;
					std::string imageUrl;
					std::string code;
					std::string name;
					std::string shortDescription;
					std::string type;
					std::string score;
					std::string firstCategoryName;
					std::string secondCategoryName;
					std::string price;
					std::string supplierName;
					std::string userCommentCount;
					std::string supplierUId;
					std::string tradeCount;
				};


				DescribeDistributionProductsResult();
				explicit DescribeDistributionProductsResult(const std::string &payload);
				~DescribeDistributionProductsResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<Result> getResults()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<Result> results_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_DESCRIBEDISTRIBUTIONPRODUCTSRESULT_H_