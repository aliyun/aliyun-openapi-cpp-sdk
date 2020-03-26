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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTTAGKEYSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTTAGKEYSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListTagKeysRequest : public RpcServiceRequest
			{

			public:
				ListTagKeysRequest();
				~ListTagKeysRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getScope()const;
				void setScope(const std::string& scope);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getCategory()const;
				void setCategory(const std::string& category);

            private:
				long resourceOwnerId_;
				std::string resourceType_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string nextToken_;
				std::string scope_;
				int pageSize_;
				std::string category_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTTAGKEYSREQUEST_H_