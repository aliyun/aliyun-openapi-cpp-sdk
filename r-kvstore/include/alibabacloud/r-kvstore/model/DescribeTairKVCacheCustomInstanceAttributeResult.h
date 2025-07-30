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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBETAIRKVCACHECUSTOMINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBETAIRKVCACHECUSTOMINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeTairKVCacheCustomInstanceAttributeResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct Disk
				{
					std::string type;
					std::string size;
					std::string diskId;
				};


				DescribeTairKVCacheCustomInstanceAttributeResult();
				explicit DescribeTairKVCacheCustomInstanceAttributeResult(const std::string &payload);
				~DescribeTairKVCacheCustomInstanceAttributeResult();
				std::string getEndTime()const;
				std::string getResourceGroupId()const;
				long getMemory()const;
				long getCpu()const;
				std::string getZoneType()const;
				std::string getPrivateIp()const;
				std::string getNetworkType()const;
				std::string getInstanceStatus()const;
				std::string getImageId()const;
				std::string getInstanceType()const;
				std::vector<Tag> getTags()const;
				bool getIsOrderCompleted()const;
				std::string getArchitectureType()const;
				std::string getStorageType()const;
				std::string getZoneId()const;
				std::string getInstanceId()const;
				std::string getCreateTime()const;
				std::string getVSwitchId()const;
				std::string getSecurityGroupId()const;
				std::string getInstanceClass()const;
				std::string getInstanceName()const;
				long getStorage()const;
				std::string getVpcId()const;
				std::string getChargeType()const;
				bool getUseEni()const;
				std::vector<Disk> getDisks()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string resourceGroupId_;
				long memory_;
				long cpu_;
				std::string zoneType_;
				std::string privateIp_;
				std::string networkType_;
				std::string instanceStatus_;
				std::string imageId_;
				std::string instanceType_;
				std::vector<Tag> tags_;
				bool isOrderCompleted_;
				std::string architectureType_;
				std::string storageType_;
				std::string zoneId_;
				std::string instanceId_;
				std::string createTime_;
				std::string vSwitchId_;
				std::string securityGroupId_;
				std::string instanceClass_;
				std::string instanceName_;
				long storage_;
				std::string vpcId_;
				std::string chargeType_;
				bool useEni_;
				std::vector<Disk> disks_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBETAIRKVCACHECUSTOMINSTANCEATTRIBUTERESULT_H_