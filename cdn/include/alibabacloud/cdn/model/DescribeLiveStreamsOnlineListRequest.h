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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMSONLINELISTREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMSONLINELISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeLiveStreamsOnlineListRequest : public RpcServiceRequest
			{

			public:
				DescribeLiveStreamsOnlineListRequest();
				~DescribeLiveStreamsOnlineListRequest();

				std::string getStreamType()const;
				void setStreamType(const std::string& streamType);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				int getPageSize()const;
				void setPageSize(int pageSize);

            private:
				std::string streamType_;
				std::string domainName_;
				long ownerId_;
				int pageNum_;
				std::string appName_;
				std::string securityToken_;
				int pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESTREAMSONLINELISTREQUEST_H_