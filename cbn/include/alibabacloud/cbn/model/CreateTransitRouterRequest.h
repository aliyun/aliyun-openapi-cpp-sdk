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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERREQUEST_H_

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
			class ALIBABACLOUD_CBN_EXPORT CreateTransitRouterRequest : public RpcServiceRequest
			{

			public:
				CreateTransitRouterRequest();
				~CreateTransitRouterRequest();

				std::string getTransitRouterName()const;
				void setTransitRouterName(const std::string& transitRouterName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getCenId()const;
				void setCenId(const std::string& cenId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTransitRouterDescription()const;
				void setTransitRouterDescription(const std::string& transitRouterDescription);

            private:
				std::string transitRouterName_;
				long resourceOwnerId_;
				std::string clientToken_;
				std::string cenId_;
				std::string type_;
				std::string regionId_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string transitRouterDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERREQUEST_H_