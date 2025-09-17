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

#ifndef ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBESELLERINSTANCESRESULT_H_
#define ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBESELLERINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/marketplaceintl/MarketplaceIntlExport.h>

namespace AlibabaCloud
{
	namespace MarketplaceIntl
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKETPLACEINTL_EXPORT DescribeSellerInstancesResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					long instanceId;
					std::string instanceStatus;
					long userId;
					int chargeType;
					std::string commodityCode;
					long createdOn;
					std::string info;
					std::string hostInfo;
					std::string appInfo;
				};


				DescribeSellerInstancesResult();
				explicit DescribeSellerInstancesResult(const std::string &payload);
				~DescribeSellerInstancesResult();
				long getPageSize()const;
				std::string getMessage()const;
				long getPageNumber()const;
				std::string getVersion()const;
				long getCount()const;
				bool getFatal()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				long pageSize_;
				std::string message_;
				long pageNumber_;
				std::string version_;
				long count_;
				bool fatal_;
				std::string code_;
				bool success_;
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKETPLACEINTL_MODEL_DESCRIBESELLERINSTANCESRESULT_H_