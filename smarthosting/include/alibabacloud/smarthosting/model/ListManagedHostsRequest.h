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

#ifndef ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDHOSTSREQUEST_H_
#define ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDHOSTSREQUEST_H_

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
			class ALIBABACLOUD_SMARTHOSTING_EXPORT ListManagedHostsRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string key;
					std::string value;
				};

			public:
				ListManagedHostsRequest();
				~ListManagedHostsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getHostType()const;
				void setHostType(const std::string& hostType);
				std::string getMode()const;
				void setMode(const std::string& mode);
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
				std::vector<std::string> getManagedHostId()const;
				void setManagedHostId(const std::vector<std::string>& managedHostId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getManagedPrivateSpaceId()const;
				void setManagedPrivateSpaceId(const std::string& managedPrivateSpaceId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getManagedHostName()const;
				void setManagedHostName(const std::string& managedHostName);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string hostType_;
				std::string mode_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string nextToken_;
				std::vector<Tag> tag_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::vector<std::string> managedHostId_;
				long ownerId_;
				std::string managedPrivateSpaceId_;
				std::string zoneId_;
				int maxResults_;
				std::string managedHostName_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTHOSTING_MODEL_LISTMANAGEDHOSTSREQUEST_H_