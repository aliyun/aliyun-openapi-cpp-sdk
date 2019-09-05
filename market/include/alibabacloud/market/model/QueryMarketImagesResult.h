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

#ifndef ALIBABACLOUD_MARKET_MODEL_QUERYMARKETIMAGESRESULT_H_
#define ALIBABACLOUD_MARKET_MODEL_QUERYMARKETIMAGESRESULT_H_

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
			class ALIBABACLOUD_MARKET_EXPORT QueryMarketImagesResult : public ServiceResult
			{
			public:
				struct ImageProduct
				{
					struct Quota
					{
						long unusedQuota;
						long totalQuota;
						long usingQuota;
					};
					struct PriceInfo
					{
						struct Order
						{
							float originalPrice;
							std::string priceUnit;
							float discountPrice;
							std::string currency;
							int period;
							std::vector<std::string> ruleIdSet;
							float tradePrice;
						};
						struct Rule
						{
							long ruleId;
							std::string title;
							std::string name;
						};
						Order order;
						std::vector<Rule> rules;
					};
					struct Image
					{
						struct DiskDeviceMapping
						{
							std::string diskType;
							std::string snapshotId;
							std::string format;
							int size;
							std::string device;
							std::string importOSSBucket;
							std::string importOSSObject;
						};
						bool isDefault;
						std::vector<Image::DiskDeviceMapping> diskDeviceMappings;
						std::string versionDescription;
						std::string version;
						int imageSize;
						bool supportIO;
						std::string imageId;
						std::string region;
					};
					std::string buyUrl;
					std::string productName;
					long userCount;
					std::vector<ImageProduct::Image> images;
					int osBit;
					std::string detailUrl;
					std::string agreementUrl;
					std::vector<std::string> skuCodes;
					PriceInfo priceInfo;
					std::string shortDescription;
					float score;
					Quota quota;
					std::string imageProductCode;
					std::string supplierName;
					bool supportIO;
					std::string categoryName;
					std::string pictureUrl;
					std::string storeUrl;
					std::string baseSystem;
					long createdOn;
					std::string smallPicUrl;
					std::string osKind;
				};


				QueryMarketImagesResult();
				explicit QueryMarketImagesResult(const std::string &payload);
				~QueryMarketImagesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ImageProduct> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ImageProduct> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_QUERYMARKETIMAGESRESULT_H_