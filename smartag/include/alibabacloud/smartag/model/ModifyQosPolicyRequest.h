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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_MODIFYQOSPOLICYREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_MODIFYQOSPOLICYREQUEST_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT ModifyQosPolicyRequest : public RpcServiceRequest
			{

			public:
				ModifyQosPolicyRequest();
				~ModifyQosPolicyRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSourcePortRange()const;
				void setSourcePortRange(const std::string& sourcePortRange);
				std::string getQosPolicyId()const;
				void setQosPolicyId(const std::string& qosPolicyId);
				std::string getSourceCidr()const;
				void setSourceCidr(const std::string& sourceCidr);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getDestCidr()const;
				void setDestCidr(const std::string& destCidr);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getQosId()const;
				void setQosId(const std::string& qosId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getIpProtocol()const;
				void setIpProtocol(const std::string& ipProtocol);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPriority()const;
				void setPriority(int priority);
				std::string getDestPortRange()const;
				void setDestPortRange(const std::string& destPortRange);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				std::string sourcePortRange_;
				std::string qosPolicyId_;
				std::string sourceCidr_;
				std::string description_;
				std::string startTime_;
				std::string destCidr_;
				std::string regionId_;
				std::string qosId_;
				std::string resourceOwnerAccount_;
				std::string ipProtocol_;
				std::string ownerAccount_;
				std::string endTime_;
				long ownerId_;
				int priority_;
				std::string destPortRange_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_MODIFYQOSPOLICYREQUEST_H_