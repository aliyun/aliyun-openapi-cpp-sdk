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
					std::string saleSpec;
					int originalPrice;
					std::string promotionStart;
					std::string itemId;
					std::string brandName;
					std::string customizeFeatureZ;
					std::string promotionEnd;
					std::string energyEfficiency;
					std::string customizeFeatureY;
					std::string inventoryStatus;
					std::string customizeFeatureX;
					std::string customizeFeatureW;
					std::string customizeFeatureV;
					std::string customizeFeatureU;
					std::string customizeFeatureT;
					std::string customizeFeatureS;
					std::string manufacturer;
					std::string taxFee;
					std::string modelNumber;
					std::string customizeFeatureJ;
					std::string customizeFeatureI;
					std::string customizeFeatureH;
					std::string promotionReason;
					std::string customizeFeatureG;
					std::string customizeFeatureF;
					std::string customizeFeatureE;
					std::string customizeFeatureD;
					std::string customizeFeatureC;
					std::string customizeFeatureR;
					std::string customizeFeatureQ;
					std::string customizeFeatureP;
					std::string customizeFeatureO;
					std::string customizeFeatureN;
					std::string customizeFeatureM;
					std::string customizeFeatureL;
					std::string customizeFeatureK;
					int itemInfoIndex;
					std::string itemQrCode;
					std::string gmtCreate;
					std::string customizeFeatureB;
					std::string customizeFeatureA;
					int memberPrice;
					std::string skuId;
					bool bePromotion;
					int suggestPrice;
					std::string sourceCode;
					std::string gmtModified;
					std::string itemBarCode;
					std::string templateSceneId;
					int salesPrice;
					std::string itemShortTitle;
					std::string itemPicUrl;
					std::string itemTitle;
					bool beMember;
					std::string productionPlace;
					bool beClearance;
					std::string forestFirstId;
					int actionPrice;
					std::string rank;
					std::string material;
					std::string forestSecondId;
					std::string promotionText;
					std::string priceUnit;
					std::string supplierName;
					std::string categoryName;
					bool beSourceCode;
				};


				DescribeItemsResult();
				explicit DescribeItemsResult(const std::string &payload);
				~DescribeItemsResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ItemInfo> getItems()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorCode()const;
				std::string getTemplateSceneId()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<ItemInfo> items_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string errorCode_;
				std::string templateSceneId_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMSRESULT_H_