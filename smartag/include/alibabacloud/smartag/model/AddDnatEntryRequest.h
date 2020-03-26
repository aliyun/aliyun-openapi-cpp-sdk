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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_ADDDNATENTRYREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_ADDDNATENTRYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT AddDnatEntryRequest : public RpcServiceRequest
			{

			public:
				AddDnatEntryRequest();
				~AddDnatEntryRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getInternalIp()const;
				void setInternalIp(const std::string& internalIp);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getExternalIp()const;
				void setExternalIp(const std::string& externalIp);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getIpProtocol()const;
				void setIpProtocol(const std::string& ipProtocol);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSagId()const;
				void setSagId(const std::string& sagId);
				std::string getInternalPort()const;
				void setInternalPort(const std::string& internalPort);
				std::string getExternalPort()const;
				void setExternalPort(const std::string& externalPort);

            private:
				long resourceOwnerId_;
				std::string type_;
				std::string internalIp_;
				std::string regionId_;
				std::string externalIp_;
				std::string resourceOwnerAccount_;
				std::string ipProtocol_;
				std::string ownerAccount_;
				long ownerId_;
				std::string sagId_;
				std::string internalPort_;
				std::string externalPort_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_ADDDNATENTRYREQUEST_H_