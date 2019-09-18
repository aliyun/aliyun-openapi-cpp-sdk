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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEPRODUCELISTREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEPRODUCELISTREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryTradeProduceListRequest : public RpcServiceRequest
			{

			public:
				QueryTradeProduceListRequest();
				~QueryTradeProduceListRequest();

				int getBuyerStatus()const;
				void setBuyerStatus(int buyerStatus);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getSortFiled()const;
				void setSortFiled(const std::string& sortFiled);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getPreOrderId()const;
				void setPreOrderId(const std::string& preOrderId);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getSortOrder()const;
				void setSortOrder(const std::string& sortOrder);
				std::string getRegisterNumber()const;
				void setRegisterNumber(const std::string& registerNumber);

            private:
				int buyerStatus_;
				int pageNum_;
				std::string sortFiled_;
				int pageSize_;
				std::string preOrderId_;
				std::string bizId_;
				std::string sortOrder_;
				std::string registerNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEPRODUCELISTREQUEST_H_