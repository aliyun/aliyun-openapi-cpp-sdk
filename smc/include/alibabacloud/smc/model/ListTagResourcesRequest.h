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

#ifndef ALIBABACLOUD_SMC_MODEL_LISTTAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_SMC_MODEL_LISTTAGRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smc/SmcExport.h>

namespace AlibabaCloud
{
	namespace Smc
	{
		namespace Model
		{
			class ALIBABACLOUD_SMC_EXPORT ListTagResourcesRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				ListTagResourcesRequest();
				~ListTagResourcesRequest();

				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::vector<std::string> getResourceId()const;
				void setResourceId(const std::vector<std::string>& resourceId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);

            private:
				std::string accessKeyId_;
				std::string nextToken_;
				std::vector<Tag> tag_;
				std::vector<std::string> resourceId_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string resourceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMC_MODEL_LISTTAGRESOURCESREQUEST_H_