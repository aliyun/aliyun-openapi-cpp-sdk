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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYORDERSREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYORDERSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT ListNotaryOrdersRequest : public RpcServiceRequest
			{

			public:
				ListNotaryOrdersRequest();
				~ListNotaryOrdersRequest();

				long getStartOrderDate()const;
				void setStartOrderDate(long startOrderDate);
				int getNotaryType()const;
				void setNotaryType(int notaryType);
				int getPageNum()const;
				void setPageNum(int pageNum);
				int getSortKeyType()const;
				void setSortKeyType(int sortKeyType);
				std::string getSortByType()const;
				void setSortByType(const std::string& sortByType);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				long getEndOrderDate()const;
				void setEndOrderDate(long endOrderDate);
				std::string getAliyunOrderId()const;
				void setAliyunOrderId(const std::string& aliyunOrderId);
				int getNotaryStatus()const;
				void setNotaryStatus(int notaryStatus);

            private:
				long startOrderDate_;
				int notaryType_;
				int pageNum_;
				int sortKeyType_;
				std::string sortByType_;
				int pageSize_;
				std::string bizId_;
				long endOrderDate_;
				std::string aliyunOrderId_;
				int notaryStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYORDERSREQUEST_H_