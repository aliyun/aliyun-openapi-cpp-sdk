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

#ifndef ALIBABACLOUD_RDS_MODEL_ADDTAGSTORESOURCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_ADDTAGSTORESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT AddTagsToResourceRequest : public RpcServiceRequest
			{

			public:
				AddTagsToResourceRequest();
				~AddTagsToResourceRequest();

				std::string getTag4value()const;
				void setTag4value(const std::string& tag4value);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getTag2key()const;
				void setTag2key(const std::string& tag2key);
				std::string getTag5key()const;
				void setTag5key(const std::string& tag5key);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getTag3key()const;
				void setTag3key(const std::string& tag3key);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTag5value()const;
				void setTag5value(const std::string& tag5value);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getTags()const;
				void setTags(const std::string& tags);
				std::string getTag1key()const;
				void setTag1key(const std::string& tag1key);
				std::string getTag1value()const;
				void setTag1value(const std::string& tag1value);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getTag2value()const;
				void setTag2value(const std::string& tag2value);
				std::string getTag4key()const;
				void setTag4key(const std::string& tag4key);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getTag3value()const;
				void setTag3value(const std::string& tag3value);
				std::string getProxyId()const;
				void setProxyId(const std::string& proxyId);

            private:
				std::string tag4value_;
				long resourceOwnerId_;
				std::string tag2key_;
				std::string tag5key_;
				std::string resourceOwnerAccount_;
				std::string clientToken_;
				std::string ownerAccount_;
				std::string tag3key_;
				long ownerId_;
				std::string tag5value_;
				std::string accessKeyId_;
				std::string tags_;
				std::string tag1key_;
				std::string tag1value_;
				std::string regionId_;
				std::string tag2value_;
				std::string tag4key_;
				std::string dBInstanceId_;
				std::string tag3value_;
				std::string proxyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_ADDTAGSTORESOURCEREQUEST_H_