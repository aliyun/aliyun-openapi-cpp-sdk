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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMSREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMSREQUEST_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeItemsRequest : public RpcServiceRequest
			{

			public:
				DescribeItemsRequest();
				~DescribeItemsRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getItemId()const;
				void setItemId(const std::string& itemId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getItemBarCode()const;
				void setItemBarCode(const std::string& itemBarCode);
				bool getBePromotion()const;
				void setBePromotion(bool bePromotion);
				std::string getItemTitle()const;
				void setItemTitle(const std::string& itemTitle);
				std::string getSkuId()const;
				void setSkuId(const std::string& skuId);

            private:
				std::string extraParams_;
				std::string storeId_;
				int pageNumber_;
				std::string itemId_;
				int pageSize_;
				std::string itemBarCode_;
				bool bePromotion_;
				std::string itemTitle_;
				std::string skuId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMSREQUEST_H_