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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSEROPERATIONLOGREQUEST_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSEROPERATIONLOGREQUEST_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeUserOperationLogRequest : public RpcServiceRequest
			{

			public:
				DescribeUserOperationLogRequest();
				~DescribeUserOperationLogRequest();

				long getOperateUserId()const;
				void setOperateUserId(long operateUserId);
				std::string getStoreId()const;
				void setStoreId(const std::string& storeId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getFromDate()const;
				void setFromDate(const std::string& fromDate);
				long getItemId()const;
				void setItemId(long itemId);
				std::string getToDate()const;
				void setToDate(const std::string& toDate);
				std::string getEslBarCode()const;
				void setEslBarCode(const std::string& eslBarCode);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getItemBarCode()const;
				void setItemBarCode(const std::string& itemBarCode);
				std::string getItemTitle()const;
				void setItemTitle(const std::string& itemTitle);
				std::string getOperateStatus()const;
				void setOperateStatus(const std::string& operateStatus);
				bool getReverse()const;
				void setReverse(bool reverse);
				std::string getOperateType()const;
				void setOperateType(const std::string& operateType);

            private:
				long operateUserId_;
				std::string storeId_;
				int pageNumber_;
				std::string fromDate_;
				long itemId_;
				std::string toDate_;
				std::string eslBarCode_;
				int pageSize_;
				std::string itemBarCode_;
				std::string itemTitle_;
				std::string operateStatus_;
				bool reverse_;
				std::string operateType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSEROPERATIONLOGREQUEST_H_