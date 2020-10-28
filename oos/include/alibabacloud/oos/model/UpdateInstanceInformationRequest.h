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

#ifndef ALIBABACLOUD_OOS_MODEL_UPDATEINSTANCEINFORMATIONREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_UPDATEINSTANCEINFORMATIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT UpdateInstanceInformationRequest : public RpcServiceRequest
			{

			public:
				UpdateInstanceInformationRequest();
				~UpdateInstanceInformationRequest();

				std::string getAgentVersion()const;
				void setAgentVersion(const std::string& agentVersion);
				std::string getIpAddress()const;
				void setIpAddress(const std::string& ipAddress);
				std::string getComputerName()const;
				void setComputerName(const std::string& computerName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPlatformName()const;
				void setPlatformName(const std::string& platformName);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getAgentName()const;
				void setAgentName(const std::string& agentName);
				std::string getPlatformType()const;
				void setPlatformType(const std::string& platformType);
				std::string getPlatformVersion()const;
				void setPlatformVersion(const std::string& platformVersion);

            private:
				std::string agentVersion_;
				std::string ipAddress_;
				std::string computerName_;
				std::string regionId_;
				std::string platformName_;
				std::string instanceId_;
				std::string agentName_;
				std::string platformType_;
				std::string platformVersion_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_UPDATEINSTANCEINFORMATIONREQUEST_H_