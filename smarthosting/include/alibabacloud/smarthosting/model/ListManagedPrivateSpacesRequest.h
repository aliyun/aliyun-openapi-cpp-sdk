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

#ifndef ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDPRIVATESPACESREQUEST_H_
#define ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDPRIVATESPACESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smarthosting/SmartHostingExport.h>

namespace AlibabaCloud
{
	namespace SmartHosting
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTHOSTING_EXPORT ListManagedPrivateSpacesRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string key;
					std::string value;
				};

			public:
				ListManagedPrivateSpacesRequest();
				~ListManagedPrivateSpacesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getManagedPrivateSpaceName()const;
				void setManagedPrivateSpaceName(const std::string& managedPrivateSpaceName);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<std::string> getManagedPrivateSpaceId()const;
				void setManagedPrivateSpaceId(const std::vector<std::string>& managedPrivateSpaceId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);

            private:
				long resourceOwnerId_;
				std::string managedPrivateSpaceName_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string nextToken_;
				std::vector<Tag> tag_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::vector<std::string> managedPrivateSpaceId_;
				std::string zoneId_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDPRIVATESPACESREQUEST_H_