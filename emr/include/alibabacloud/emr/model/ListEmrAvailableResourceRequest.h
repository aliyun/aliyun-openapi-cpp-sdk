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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLERESOURCEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLERESOURCEREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListEmrAvailableResourceRequest : public RpcServiceRequest
			{

			public:
				ListEmrAvailableResourceRequest();
				~ListEmrAvailableResourceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDepositType()const;
				void setDepositType(const std::string& depositType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSystemDiskType()const;
				void setSystemDiskType(const std::string& systemDiskType);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getEmrVersion()const;
				void setEmrVersion(const std::string& emrVersion);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getDestinationResource()const;
				void setDestinationResource(const std::string& destinationResource);
				std::string getClusterType()const;
				void setClusterType(const std::string& clusterType);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				std::string getNetType()const;
				void setNetType(const std::string& netType);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDataDiskType()const;
				void setDataDiskType(const std::string& dataDiskType);

            private:
				long resourceOwnerId_;
				std::string depositType_;
				std::string accessKeyId_;
				std::string systemDiskType_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string instanceType_;
				std::string emrVersion_;
				std::string instanceChargeType_;
				std::string clusterId_;
				std::string destinationResource_;
				std::string clusterType_;
				std::string spotStrategy_;
				std::string netType_;
				std::string zoneId_;
				std::string dataDiskType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTEMRAVAILABLERESOURCEREQUEST_H_