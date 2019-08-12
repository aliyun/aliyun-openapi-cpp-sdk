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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATEEXPRESSCLOUDCONNECTIONREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_CREATEEXPRESSCLOUDCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT CreateExpressCloudConnectionRequest : public RpcServiceRequest
			{

			public:
				CreateExpressCloudConnectionRequest();
				~CreateExpressCloudConnectionRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getPeerLocation()const;
				void setPeerLocation(const std::string& peerLocation);
				std::string getPortType()const;
				void setPortType(const std::string& portType);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getBandwidth()const;
				void setBandwidth(int bandwidth);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getPeerCity()const;
				void setPeerCity(const std::string& peerCity);
				std::string getIDCardNo()const;
				void setIDCardNo(const std::string& iDCardNo);
				std::string getRedundantEccId()const;
				void setRedundantEccId(const std::string& redundantEccId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getContactMail()const;
				void setContactMail(const std::string& contactMail);
				std::string getContactTel()const;
				void setContactTel(const std::string& contactTel);
				std::string getIdcSP()const;
				void setIdcSP(const std::string& idcSP);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				std::string peerLocation_;
				std::string portType_;
				std::string resourceOwnerAccount_;
				int bandwidth_;
				std::string ownerAccount_;
				std::string description_;
				std::string peerCity_;
				std::string iDCardNo_;
				std::string redundantEccId_;
				long ownerId_;
				std::string contactMail_;
				std::string contactTel_;
				std::string idcSP_;
				std::string regionId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATEEXPRESSCLOUDCONNECTIONREQUEST_H_