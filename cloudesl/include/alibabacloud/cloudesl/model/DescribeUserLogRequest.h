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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERLOGREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERLOGREQUEST_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeUserLogRequest : public RpcServiceRequest
			{

			public:
				DescribeUserLogRequest();
				~DescribeUserLogRequest();

				std::string getExtraParams()const;
				void setExtraParams(const std::string& extraParams);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getFromDate()const;
				void setFromDate(const std::string& fromDate);
				std::string getOperationStatus()const;
				void setOperationStatus(const std::string& operationStatus);
				std::string getToDate()const;
				void setToDate(const std::string& toDate);
				std::string getEslBarCode()const;
				void setEslBarCode(const std::string& eslBarCode);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getItemBarCode()const;
				void setItemBarCode(const std::string& itemBarCode);
				std::string getItemShortTitle()const;
				void setItemShortTitle(const std::string& itemShortTitle);
				std::string getOperationType()const;
				void setOperationType(const std::string& operationType);
				std::string getLogId()const;
				void setLogId(const std::string& logId);

            private:
				std::string extraParams_;
				std::string storeId_;
				std::string userId_;
				int pageNumber_;
				std::string fromDate_;
				std::string operationStatus_;
				std::string toDate_;
				std::string eslBarCode_;
				int pageSize_;
				std::string itemBarCode_;
				std::string itemShortTitle_;
				std::string operationType_;
				std::string logId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERLOGREQUEST_H_