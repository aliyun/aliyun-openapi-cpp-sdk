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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTACCOUNTSFORPARENTREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTACCOUNTSFORPARENTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListAccountsForParentRequest : public RpcServiceRequest
			{

			public:
				ListAccountsForParentRequest();
				~ListAccountsForParentRequest();

				std::string getQueryKeyword()const;
				void setQueryKeyword(const std::string& queryKeyword);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getParentFolderId()const;
				void setParentFolderId(const std::string& parentFolderId);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				std::string queryKeyword_;
				int pageNumber_;
				std::string parentFolderId_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTACCOUNTSFORPARENTREQUEST_H_