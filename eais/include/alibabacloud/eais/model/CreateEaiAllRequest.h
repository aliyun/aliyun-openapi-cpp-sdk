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

#ifndef ALIBABACLOUD_EAIS_MODEL_CREATEEAIALLREQUEST_H_
#define ALIBABACLOUD_EAIS_MODEL_CREATEEAIALLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/eais/EaisExport.h>

namespace AlibabaCloud
{
	namespace Eais
	{
		namespace Model
		{
			class ALIBABACLOUD_EAIS_EXPORT CreateEaiAllRequest : public RpcServiceRequest
			{

			public:
				CreateEaiAllRequest();
				~CreateEaiAllRequest();

				std::string getClientImageId()const;
				void setClientImageId(const std::string& clientImageId);
				std::string getClientSystemDiskCategory()const;
				void setClientSystemDiskCategory(const std::string& clientSystemDiskCategory);
				int getClientInternetMaxBandwidthOut()const;
				void setClientInternetMaxBandwidthOut(int clientInternetMaxBandwidthOut);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getClientInstanceName()const;
				void setClientInstanceName(const std::string& clientInstanceName);
				int getClientInternetMaxBandwidthIn()const;
				void setClientInternetMaxBandwidthIn(int clientInternetMaxBandwidthIn);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getClientSystemDiskSize()const;
				void setClientSystemDiskSize(int clientSystemDiskSize);
				std::string getClientVSwitchId()const;
				void setClientVSwitchId(const std::string& clientVSwitchId);
				std::string getClientPassword()const;
				void setClientPassword(const std::string& clientPassword);
				std::string getClientInstanceType()const;
				void setClientInstanceType(const std::string& clientInstanceType);
				std::string getClientSecurityGroupId()const;
				void setClientSecurityGroupId(const std::string& clientSecurityGroupId);
				std::string getEaiInstanceType()const;
				void setEaiInstanceType(const std::string& eaiInstanceType);
				std::string getClientZoneId()const;
				void setClientZoneId(const std::string& clientZoneId);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);

            private:
				std::string clientImageId_;
				std::string clientSystemDiskCategory_;
				int clientInternetMaxBandwidthOut_;
				std::string clientToken_;
				std::string clientInstanceName_;
				int clientInternetMaxBandwidthIn_;
				std::string regionId_;
				int clientSystemDiskSize_;
				std::string clientVSwitchId_;
				std::string clientPassword_;
				std::string clientInstanceType_;
				std::string clientSecurityGroupId_;
				std::string eaiInstanceType_;
				std::string clientZoneId_;
				std::string instanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAIS_MODEL_CREATEEAIALLREQUEST_H_