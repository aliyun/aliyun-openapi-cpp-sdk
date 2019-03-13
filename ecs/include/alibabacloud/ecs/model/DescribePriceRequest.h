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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribePriceRequest : public RpcServiceRequest
			{

			public:
				DescribePriceRequest();
				~DescribePriceRequest();

				int getDataDisk3Size()const;
				void setDataDisk3Size(int dataDisk3Size);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getDataDisk3Category()const;
				void setDataDisk3Category(const std::string& dataDisk3Category);
				std::string getIoOptimized()const;
				void setIoOptimized(const std::string& ioOptimized);
				int getInternetMaxBandwidthOut()const;
				void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getDataDisk4Category()const;
				void setDataDisk4Category(const std::string& dataDisk4Category);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getDataDisk4Size()const;
				void setDataDisk4Size(int dataDisk4Size);
				std::string getPriceUnit()const;
				void setPriceUnit(const std::string& priceUnit);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getDataDisk2Category()const;
				void setDataDisk2Category(const std::string& dataDisk2Category);
				int getDataDisk1Size()const;
				void setDataDisk1Size(int dataDisk1Size);
				int getPeriod()const;
				void setPeriod(int period);
				int getAmount()const;
				void setAmount(int amount);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getDataDisk2Size()const;
				void setDataDisk2Size(int dataDisk2Size);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				std::string getDataDisk1Category()const;
				void setDataDisk1Category(const std::string& dataDisk1Category);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				std::string getInternetChargeType()const;
				void setInternetChargeType(const std::string& internetChargeType);
				std::string getInstanceNetworkType()const;
				void setInstanceNetworkType(const std::string& instanceNetworkType);

            private:
				int dataDisk3Size_;
				long resourceOwnerId_;
				std::string imageId_;
				std::string dataDisk3Category_;
				std::string ioOptimized_;
				int internetMaxBandwidthOut_;
				std::string systemDiskCategory_;
				std::string sourceRegionId_;
				std::string dataDisk4Category_;
				std::string regionId_;
				int dataDisk4Size_;
				std::string priceUnit_;
				std::string instanceType_;
				std::string dataDisk2Category_;
				int dataDisk1Size_;
				int period_;
				int amount_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int dataDisk2Size_;
				long ownerId_;
				std::string resourceType_;
				std::string dataDisk1Category_;
				int systemDiskSize_;
				std::string internetChargeType_;
				std::string instanceNetworkType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEPRICEREQUEST_H_