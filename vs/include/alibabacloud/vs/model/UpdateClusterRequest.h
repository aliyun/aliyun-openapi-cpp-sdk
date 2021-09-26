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

#ifndef ALIBABACLOUD_VS_MODEL_UPDATECLUSTERREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_UPDATECLUSTERREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT UpdateClusterRequest : public RpcServiceRequest
			{

			public:
				UpdateClusterRequest();
				~UpdateClusterRequest();

				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getMaintainTime()const;
				void setMaintainTime(const std::string& maintainTime);
				std::string getEffectiveTime()const;
				void setEffectiveTime(const std::string& effectiveTime);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getInternalPorts()const;
				void setInternalPorts(const std::string& internalPorts);

            private:
				std::string securityGroupId_;
				std::string description_;
				std::string maintainTime_;
				std::string effectiveTime_;
				std::string showLog_;
				std::string clusterId_;
				long ownerId_;
				std::string name_;
				std::string internalPorts_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_UPDATECLUSTERREQUEST_H_