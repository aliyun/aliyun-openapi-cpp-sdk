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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYHPHOSTREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYHPHOSTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ModifyHpHostRequest : public RpcServiceRequest
			{
				struct HpHostDisk
				{
					std::string diskSize;
					std::string mountPath;
					std::string diskDevice;
				};

			public:
				ModifyHpHostRequest();
				~ModifyHpHostRequest();

				int getCpuCore()const;
				void setCpuCore(int cpuCore);
				int getMemSize()const;
				void setMemSize(int memSize);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRackInfo()const;
				void setRackInfo(const std::string& rackInfo);
				std::string getRole()const;
				void setRole(const std::string& role);
				std::string getSerialNumber()const;
				void setSerialNumber(const std::string& serialNumber);
				std::string getHostType()const;
				void setHostType(const std::string& hostType);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::vector<HpHostDisk> getHpHostDisk()const;
				void setHpHostDisk(const std::vector<HpHostDisk>& hpHostDisk);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getVswitchId()const;
				void setVswitchId(const std::string& vswitchId);
				std::string getHpHostBizId()const;
				void setHpHostBizId(const std::string& hpHostBizId);
				std::string getExternalKey()const;
				void setExternalKey(const std::string& externalKey);
				std::string getHostName()const;
				void setHostName(const std::string& hostName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getInnerIp()const;
				void setInnerIp(const std::string& innerIp);
				std::string getExternalIp()const;
				void setExternalIp(const std::string& externalIp);

            private:
				int cpuCore_;
				int memSize_;
				long resourceOwnerId_;
				std::string rackInfo_;
				std::string role_;
				std::string serialNumber_;
				std::string hostType_;
				std::string securityGroupId_;
				std::vector<HpHostDisk> hpHostDisk_;
				std::string accessKeyId_;
				std::string vswitchId_;
				std::string hpHostBizId_;
				std::string externalKey_;
				std::string hostName_;
				std::string regionId_;
				std::string vpcId_;
				std::string innerIp_;
				std::string externalIp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYHPHOSTREQUEST_H_