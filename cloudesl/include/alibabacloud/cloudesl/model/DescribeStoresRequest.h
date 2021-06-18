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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBESTORESREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBESTORESREQUEST_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeStoresRequest : public RpcServiceRequest
			{

			public:
				DescribeStoresRequest();
				~DescribeStoresRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getStoreName()const;
				void setStoreName(const std::string& storeName);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getFromDate()const;
				void setFromDate(const std::string& fromDate);
				std::string getTemplateVersion()const;
				void setTemplateVersion(const std::string& templateVersion);
				std::string getToDate()const;
				void setToDate(const std::string& toDate);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getUserStoreCode()const;
				void setUserStoreCode(const std::string& userStoreCode);

            private:
				std::string extraParams_;
				std::string storeName_;
				std::string storeId_;
				int pageNumber_;
				std::string fromDate_;
				std::string templateVersion_;
				std::string toDate_;
				int pageSize_;
				std::string userStoreCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBESTORESREQUEST_H_