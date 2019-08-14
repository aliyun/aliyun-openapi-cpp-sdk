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

#ifndef ALIBABACLOUD_EMR_MODEL_ADDHPHOSTREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_ADDHPHOSTREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT AddHpHostRequest : public RpcServiceRequest
			{
				struct HpHost
				{
					int cpuCore;
					int memSize;
					std::string rackInfo;
					std::string role;
					std::string serialNumber;
					std::string hostType;
					std::string securityGroupId;
					RepeatList hpHostDisk;
					std::string vswitchId;
					std::string externalKey;
					std::string hostName;
					std::string vpcId;
					std::string innerIp;
					std::string externalIp;
				};

			public:
				AddHpHostRequest();
				~AddHpHostRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<HpHost> getHpHost()const;
				void setHpHost(const std::vector<HpHost>& hpHost);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getHpBizId()const;
				void setHpBizId(const std::string& hpBizId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::vector<HpHost> hpHost_;
				std::string regionId_;
				std::string hpBizId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_ADDHPHOSTREQUEST_H_