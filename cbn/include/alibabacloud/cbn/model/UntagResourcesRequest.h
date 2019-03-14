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

#ifndef ALIBABACLOUD_CBN_MODEL_UNTAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_UNTAGRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT UntagResourcesRequest : public RpcServiceRequest
			{

			public:
				UntagResourcesRequest();
				~UntagResourcesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<std::string> getResourceId()const;
				void setResourceId(const std::vector<std::string>& resourceId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getTagOwnerUid()const;
				void setTagOwnerUid(long tagOwnerUid);
				std::string getTagOwnerBid()const;
				void setTagOwnerBid(const std::string& tagOwnerBid);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<std::string> getTagKey()const;
				void setTagKey(const std::vector<std::string>& tagKey);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);

            private:
				long resourceOwnerId_;
				std::vector<std::string> resourceId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long tagOwnerUid_;
				std::string tagOwnerBid_;
				long ownerId_;
				std::vector<std::string> tagKey_;
				std::string resourceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_UNTAGRESOURCESREQUEST_H_