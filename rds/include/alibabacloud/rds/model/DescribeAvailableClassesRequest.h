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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEAVAILABLECLASSESREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEAVAILABLECLASSESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeAvailableClassesRequest : public RpcServiceRequest
			{

			public:
				DescribeAvailableClassesRequest();
				~DescribeAvailableClassesRequest();

				std::string getDBInstanceName()const;
				void setDBInstanceName(const std::string& dBInstanceName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getDBInstanceStorageType()const;
				void setDBInstanceStorageType(const std::string& dBInstanceStorageType);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				std::string getDispenseMode()const;
				void setDispenseMode(const std::string& dispenseMode);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getCommodityCode()const;
				void setCommodityCode(const std::string& commodityCode);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				bool getEvaluateResource()const;
				void setEvaluateResource(bool evaluateResource);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::string getOrderType()const;
				void setOrderType(const std::string& orderType);

            private:
				std::string dBInstanceName_;
				long resourceOwnerId_;
				std::string engineVersion_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string engine_;
				std::string dBInstanceId_;
				std::string dBInstanceStorageType_;
				std::string instanceChargeType_;
				std::string dispenseMode_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string commodityCode_;
				long ownerId_;
				bool evaluateResource_;
				std::string zoneId_;
				std::string category_;
				std::string orderType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEAVAILABLECLASSESREQUEST_H_