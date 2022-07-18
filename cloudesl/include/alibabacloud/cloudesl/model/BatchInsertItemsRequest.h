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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_BATCHINSERTITEMSREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_BATCHINSERTITEMSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT BatchInsertItemsRequest : public RpcServiceRequest
			{
			public:
				struct ItemInfo
				{
					int memberPrice;
					int actionPrice;
					bool beSourceCode;
					std::string brandName;
					std::string promotionStart;
					std::string priceUnit;
					std::string rank;
					int itemInfoIndex;
					std::string itemBarCode;
					std::string customizeFeatureK;
					std::string customizeFeatureL;
					std::string customizeFeatureM;
					std::string customizeFeatureN;
					bool bePromotion;
					std::string customizeFeatureO;
					std::string customizeFeatureP;
					std::string promotionEnd;
					std::string itemTitle;
					std::string customizeFeatureQ;
					std::string customizeFeatureR;
					std::string customizeFeatureC;
					std::string customizeFeatureD;
					std::string itemQrCode;
					std::string customizeFeatureE;
					std::string promotionReason;
					std::string inventoryStatus;
					std::string customizeFeatureF;
					std::string customizeFeatureG;
					std::string customizeFeatureH;
					std::string customizeFeatureI;
					std::string customizeFeatureJ;
					std::string customizeFeatureA;
					std::string customizeFeatureB;
					int suggestPrice;
					std::string forestFirstId;
					std::string productionPlace;
					std::string sourceCode;
					std::string manufacturer;
					std::string itemId;
					bool beMember;
					std::string customizeFeatureS;
					std::string customizeFeatureT;
					std::string customizeFeatureU;
					std::string templateSceneId;
					std::string customizeFeatureV;
					std::string customizeFeatureW;
					std::string customizeFeatureX;
					std::string customizeFeatureY;
					std::string customizeFeatureZ;
					int salesPrice;
					int originalPrice;
					std::string itemShortTitle;
					std::string itemPicUrl;
					std::string forestSecondId;
					std::string supplierName;
					bool beClearance;
					std::string material;
					std::string modelNumber;
					std::string saleSpec;
					std::string categoryName;
					std::string taxFee;
					std::string energyEfficiency;
					std::string promotionText;
					std::string skuId;
				};

			public:
				BatchInsertItemsRequest();
				~BatchInsertItemsRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				bool getSyncByItemId()const;
				void setSyncByItemId(bool syncByItemId);
				std::vector<ItemInfo> getItemInfo()const;
				void setItemInfo(const std::vector<ItemInfo>& itemInfo);

            private:
				std::string extraParams_;
				std::string storeId_;
				bool syncByItemId_;
				std::vector<ItemInfo> itemInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_BATCHINSERTITEMSREQUEST_H_