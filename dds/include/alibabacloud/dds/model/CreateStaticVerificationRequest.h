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

#ifndef ALIBABACLOUD_DDS_MODEL_CREATESTATICVERIFICATIONREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_CREATESTATICVERIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT CreateStaticVerificationRequest : public RpcServiceRequest
			{

			public:
				CreateStaticVerificationRequest();
				~CreateStaticVerificationRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getReplicaId()const;
				void setReplicaId(const std::string& replicaId);
				std::string getSourceInstanceId()const;
				void setSourceInstanceId(const std::string& sourceInstanceId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDestinationInstanceId()const;
				void setDestinationInstanceId(const std::string& destinationInstanceId);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string replicaId_;
				std::string sourceInstanceId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string destinationInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_CREATESTATICVERIFICATIONREQUEST_H_