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

#ifndef ALIBABACLOUD_VS_MODEL_LISTBUCKETSREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_LISTBUCKETSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT ListBucketsRequest : public RpcServiceRequest
			{

			public:
				ListBucketsRequest();
				~ListBucketsRequest();

				std::string getPrefix()const;
				void setPrefix(const std::string& prefix);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getKeyword()const;
				void setKeyword(const std::string& keyword);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getMarker()const;
				void setMarker(const std::string& marker);

            private:
				std::string prefix_;
				int pageNumber_;
				int pageSize_;
				std::string keyword_;
				std::string showLog_;
				long ownerId_;
				std::string marker_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_LISTBUCKETSREQUEST_H_