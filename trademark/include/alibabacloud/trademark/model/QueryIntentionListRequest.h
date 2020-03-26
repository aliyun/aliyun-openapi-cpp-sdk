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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYINTENTIONLISTREQUEST_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYINTENTIONLISTREQUEST_H_

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
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryIntentionListRequest : public RpcServiceRequest
			{

			public:
				QueryIntentionListRequest();
				~QueryIntentionListRequest();

				int getType()const;
				void setType(int type);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getSortFiled()const;
				void setSortFiled(const std::string& sortFiled);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSortOrder()const;
				void setSortOrder(const std::string& sortOrder);
				int getStatus()const;
				void setStatus(int status);

            private:
				int type_;
				int pageNum_;
				std::string sortFiled_;
				int pageSize_;
				std::string sortOrder_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYINTENTIONLISTREQUEST_H_