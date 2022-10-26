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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERBASICINFORESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERBASICINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBClusterBasicInfoResult : public ServiceResult
			{
			public:


				DescribeDBClusterBasicInfoResult();
				explicit DescribeDBClusterBasicInfoResult(const std::string &payload);
				~DescribeDBClusterBasicInfoResult();
				int getDeletionLock()const;
				std::string getCategory()const;
				std::string getResourceGroupId()const;
				std::string getDBClusterId()const;
				std::string getProxyStatus()const;
				std::string getDBType()const;
				std::string getDBClusterNetworkType()const;
				std::string getProxyStandardCpuCores()const;
				long getStorageMax()const;
				std::string getDBVersion()const;
				std::string getMaintainTime()const;
				std::string getEngine()const;
				std::string getStorageType()const;
				std::string getVPCId()const;
				std::string getDBClusterStatus()const;
				std::string getVSwitchId()const;
				std::string getDBClusterDescription()const;
				std::string getExpired()const;
				std::string getProxyCpuCores()const;
				std::string getLockMode()const;
				bool getIsProxyLatestVersion()const;
				std::string getDBVersionStatus()const;
				std::string getCreationTime()const;
				std::string getSubCategory()const;
				long getSQLSize()const;
				std::string getRegionId()const;
				std::string getProxyType()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				int deletionLock_;
				std::string category_;
				std::string resourceGroupId_;
				std::string dBClusterId_;
				std::string proxyStatus_;
				std::string dBType_;
				std::string dBClusterNetworkType_;
				std::string proxyStandardCpuCores_;
				long storageMax_;
				std::string dBVersion_;
				std::string maintainTime_;
				std::string engine_;
				std::string storageType_;
				std::string vPCId_;
				std::string dBClusterStatus_;
				std::string vSwitchId_;
				std::string dBClusterDescription_;
				std::string expired_;
				std::string proxyCpuCores_;
				std::string lockMode_;
				bool isProxyLatestVersion_;
				std::string dBVersionStatus_;
				std::string creationTime_;
				std::string subCategory_;
				long sQLSize_;
				std::string regionId_;
				std::string proxyType_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBCLUSTERBASICINFORESULT_H_