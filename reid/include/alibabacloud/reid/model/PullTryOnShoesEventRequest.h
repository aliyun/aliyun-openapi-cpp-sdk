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

#ifndef ALIBABACLOUD_REID_MODEL_PULLTRYONSHOESEVENTREQUEST_H_
#define ALIBABACLOUD_REID_MODEL_PULLTRYONSHOESEVENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/reid/ReidExport.h>

namespace AlibabaCloud
{
	namespace Reid
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_EXPORT PullTryOnShoesEventRequest : public RpcServiceRequest
			{

			public:
				PullTryOnShoesEventRequest();
				~PullTryOnShoesEventRequest();

				std::string getDate()const;
				void setDate(const std::string& date);
				long getStoreId()const;
				void setStoreId(long storeId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getSkuId()const;
				void setSkuId(const std::string& skuId);

            private:
				std::string date_;
				long storeId_;
				int pageNumber_;
				int pageSize_;
				std::string name_;
				std::string skuId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_MODEL_PULLTRYONSHOESEVENTREQUEST_H_