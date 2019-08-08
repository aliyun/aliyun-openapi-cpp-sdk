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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_CREATEQOSCARREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_CREATEQOSCARREQUEST_H_

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
			class ALIBABACLOUD_SMARTAG_EXPORT CreateQosCarRequest : public RpcServiceRequest
			{

			public:
				CreateQosCarRequest();
				~CreateQosCarRequest();

				int getMaxBandwidthAbs()const;
				void setMaxBandwidthAbs(int maxBandwidthAbs);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				int getMinBandwidthAbs()const;
				void setMinBandwidthAbs(int minBandwidthAbs);
				int getMaxBandwidthPercent()const;
				void setMaxBandwidthPercent(int maxBandwidthPercent);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPriority()const;
				void setPriority(int priority);
				int getMinBandwidthPercent()const;
				void setMinBandwidthPercent(int minBandwidthPercent);
				std::string getLimitType()const;
				void setLimitType(const std::string& limitType);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPercentSourceType()const;
				void setPercentSourceType(const std::string& percentSourceType);
				std::string getQosId()const;
				void setQosId(const std::string& qosId);

            private:
				int maxBandwidthAbs_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				int minBandwidthAbs_;
				int maxBandwidthPercent_;
				std::string ownerAccount_;
				std::string description_;
				long ownerId_;
				int priority_;
				int minBandwidthPercent_;
				std::string limitType_;
				std::string regionId_;
				std::string percentSourceType_;
				std::string qosId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_CREATEQOSCARREQUEST_H_