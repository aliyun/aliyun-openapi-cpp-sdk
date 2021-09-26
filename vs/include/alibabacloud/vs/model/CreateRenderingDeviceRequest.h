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

#ifndef ALIBABACLOUD_VS_MODEL_CREATERENDERINGDEVICEREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_CREATERENDERINGDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT CreateRenderingDeviceRequest : public RpcServiceRequest
			{

			public:
				CreateRenderingDeviceRequest();
				~CreateRenderingDeviceRequest();

				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				int getAutoRenewPeriod()const;
				void setAutoRenewPeriod(int autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				int getCount()const;
				void setCount(int count);
				std::string getSpecification()const;
				void setSpecification(const std::string& specification);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getEdgeNodeName()const;
				void setEdgeNodeName(const std::string& edgeNodeName);

            private:
				std::string imageId_;
				std::string securityGroupId_;
				std::string description_;
				std::string instanceChargeType_;
				std::string showLog_;
				int autoRenewPeriod_;
				int period_;
				int count_;
				std::string specification_;
				std::string clusterId_;
				long ownerId_;
				std::string periodUnit_;
				bool autoRenew_;
				std::string edgeNodeName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_CREATERENDERINGDEVICEREQUEST_H_