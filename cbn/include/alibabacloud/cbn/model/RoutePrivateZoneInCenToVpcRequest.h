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

#ifndef ALIBABACLOUD_CBN_MODEL_ROUTEPRIVATEZONEINCENTOVPCREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_ROUTEPRIVATEZONEINCENTOVPCREQUEST_H_

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
			class ALIBABACLOUD_CBN_EXPORT RoutePrivateZoneInCenToVpcRequest : public RpcServiceRequest
			{

			public:
				RoutePrivateZoneInCenToVpcRequest();
				~RoutePrivateZoneInCenToVpcRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getCenId()const;
				void setCenId(const std::string& cenId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getHostRegionId()const;
				void setHostRegionId(const std::string& hostRegionId);
				std::string getAccessRegionId()const;
				void setAccessRegionId(const std::string& accessRegionId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getHostVpcId()const;
				void setHostVpcId(const std::string& hostVpcId);

            private:
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string cenId_;
				std::string ownerAccount_;
				std::string hostRegionId_;
				std::string accessRegionId_;
				long ownerId_;
				std::string hostVpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_ROUTEPRIVATEZONEINCENTOVPCREQUEST_H_