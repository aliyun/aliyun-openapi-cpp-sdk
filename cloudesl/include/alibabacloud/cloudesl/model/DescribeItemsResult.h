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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMSRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeItemsResult : public ServiceResult
			{
			public:
				struct ItemInfo
				{
					int suggestPrice;
					std::string saleSpec;
					std::string sourceCode;
					int originalPrice;
					std::string promotionStart;
					std::string itemBarCode;
					long itemId;
					std::string brandName;
					std::string promotionEnd;
					std::string energyEfficiency;
					std::string itemShortTitle;
					std::string storeId;
					std::string itemTitle;
					std::string productionPlace;
					std::string extraAttribute;
					std::string positionCode;
					std::string modelNumber;
					std::string customizeFeatureJ;
					std::string forestFirstId;
					std::string customizeFeatureI;
					std::string optionGroups;
					std::string customizeFeatureH;
					std::string promotionReason;
					std::string customizeFeatureG;
					std::string companyId;
					std::string customizeFeatureF;
					std::string customizeFeatureE;
					std::string customizeFeatureD;
					std::string customizeFeatureC;
					int actionPrice;
					std::string rank;
					std::string forestSecondId;
					std::string promotionText;
					std::string itemQrCode;
					std::string priceUnit;
					std::string customizeFeatureB;
					std::string categoryName;
					bool beSourceCode;
					std::string customizeFeatureA;
					int memberPrice;
					std::string skuId;
					bool bePromotion;
				};


				DescribeItemsResult();
				explicit DescribeItemsResult(const std::string &payload);
				~DescribeItemsResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ItemInfo> getItems()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<ItemInfo> items_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMSRESULT_H_