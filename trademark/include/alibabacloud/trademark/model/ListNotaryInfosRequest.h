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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYINFOSREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYINFOSREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT ListNotaryInfosRequest : public RpcServiceRequest
			{

			public:
				ListNotaryInfosRequest();
				~ListNotaryInfosRequest();

				std::string getBizOrderNo()const;
				void setBizOrderNo(const std::string& bizOrderNo);
				int getNotaryType()const;
				void setNotaryType(int notaryType);
				int getPageSize()const;
				void setPageSize(int pageSize);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getToken()const;
				void setToken(const std::string& token);

            private:
				std::string bizOrderNo_;
				int notaryType_;
				int pageSize_;
				int pageNum_;
				std::string token_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_LISTNOTARYINFOSREQUEST_H_