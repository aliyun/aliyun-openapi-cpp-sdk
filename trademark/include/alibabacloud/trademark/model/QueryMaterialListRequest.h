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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYMATERIALLISTREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYMATERIALLISTREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryMaterialListRequest : public RpcServiceRequest
			{

			public:
				QueryMaterialListRequest();
				~QueryMaterialListRequest();

				int getType()const;
				void setType(int type);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getName()const;
				void setName(const std::string& name);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCardNumber()const;
				void setCardNumber(const std::string& cardNumber);
				int getRegion()const;
				void setRegion(int region);
				int getStatus()const;
				void setStatus(int status);

            private:
				int type_;
				int pageNum_;
				std::string name_;
				int pageSize_;
				std::string cardNumber_;
				int region_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYMATERIALLISTREQUEST_H_