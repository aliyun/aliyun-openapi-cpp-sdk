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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSBLOCKLISTREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSBLOCKLISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveStreamsBlockListRequest : public RpcServiceRequest
			{

			public:
				DescribeLiveStreamsBlockListRequest();
				~DescribeLiveStreamsBlockListRequest();

				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNum()const;
				void setPageNum(int pageNum);

            private:
				std::string securityToken_;
				std::string domainName_;
				int pageSize_;
				long ownerId_;
				int pageNum_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVESTREAMSBLOCKLISTREQUEST_H_