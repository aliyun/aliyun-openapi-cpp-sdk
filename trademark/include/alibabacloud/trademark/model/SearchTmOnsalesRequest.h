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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_SEARCHTMONSALESREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_SEARCHTMONSALESREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT SearchTmOnsalesRequest : public RpcServiceRequest
			{

			public:
				SearchTmOnsalesRequest();
				~SearchTmOnsalesRequest();

				std::string getTmName()const;
				void setTmName(const std::string& tmName);
				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getTopSearch()const;
				void setTopSearch(const std::string& topSearch);
				int getRegLeft()const;
				void setRegLeft(int regLeft);
				std::string getClassification()const;
				void setClassification(const std::string& classification);
				int getPageNum()const;
				void setPageNum(int pageNum);
				long getOrderPriceLeft()const;
				void setOrderPriceLeft(long orderPriceLeft);
				bool getQueryAll()const;
				void setQueryAll(bool queryAll);
				std::string getSortName()const;
				void setSortName(const std::string& sortName);
				long getOrderPriceRight()const;
				void setOrderPriceRight(long orderPriceRight);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSortOrder()const;
				void setSortOrder(const std::string& sortOrder);
				std::string getTag()const;
				void setTag(const std::string& tag);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				std::string getRegisterNumber()const;
				void setRegisterNumber(const std::string& registerNumber);
				int getRegRight()const;
				void setRegRight(int regRight);

            private:
				std::string tmName_;
				std::string productCode_;
				std::string topSearch_;
				int regLeft_;
				std::string classification_;
				int pageNum_;
				long orderPriceLeft_;
				bool queryAll_;
				std::string sortName_;
				long orderPriceRight_;
				int pageSize_;
				std::string sortOrder_;
				std::string tag_;
				std::string keyword_;
				std::string registerNumber_;
				int regRight_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_SEARCHTMONSALESREQUEST_H_