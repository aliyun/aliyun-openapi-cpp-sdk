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

#ifndef ALIBABACLOUD_HITSDB_MODEL_UPGRADELINDORMINSTANCEREQUEST_H_
#define ALIBABACLOUD_HITSDB_MODEL_UPGRADELINDORMINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT UpgradeLindormInstanceRequest : public RpcServiceRequest
			{

			public:
				UpgradeLindormInstanceRequest();
				~UpgradeLindormInstanceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPhoenixCoreNum()const;
				void setPhoenixCoreNum(int phoenixCoreNum);
				std::string getPhoenixCoreSpec()const;
				void setPhoenixCoreSpec(const std::string& phoenixCoreSpec);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getUpgradeType()const;
				void setUpgradeType(const std::string& upgradeType);
				std::string getTsdbSpec()const;
				void setTsdbSpec(const std::string& tsdbSpec);
				std::string getFilestoreSpec()const;
				void setFilestoreSpec(const std::string& filestoreSpec);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getTsdbNum()const;
				void setTsdbNum(int tsdbNum);
				std::string getLindormSpec()const;
				void setLindormSpec(const std::string& lindormSpec);
				int getSolrNum()const;
				void setSolrNum(int solrNum);
				int getColdStorage()const;
				void setColdStorage(int coldStorage);
				std::string getSolrSpec()const;
				void setSolrSpec(const std::string& solrSpec);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getFilestoreNum()const;
				void setFilestoreNum(int filestoreNum);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getLindormNum()const;
				void setLindormNum(int lindormNum);
				std::string getCoreSpec()const;
				void setCoreSpec(const std::string& coreSpec);
				int getCoreNum()const;
				void setCoreNum(int coreNum);
				int getLtsCoreNum()const;
				void setLtsCoreNum(int ltsCoreNum);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getLtsCoreSpec()const;
				void setLtsCoreSpec(const std::string& ltsCoreSpec);
				int getClusterStorage()const;
				void setClusterStorage(int clusterStorage);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);

            private:
				long resourceOwnerId_;
				int phoenixCoreNum_;
				std::string phoenixCoreSpec_;
				std::string clientToken_;
				std::string upgradeType_;
				std::string tsdbSpec_;
				std::string filestoreSpec_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string regionId_;
				int tsdbNum_;
				std::string lindormSpec_;
				int solrNum_;
				int coldStorage_;
				std::string solrSpec_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int filestoreNum_;
				long ownerId_;
				int lindormNum_;
				std::string coreSpec_;
				int coreNum_;
				int ltsCoreNum_;
				std::string instanceId_;
				std::string ltsCoreSpec_;
				int clusterStorage_;
				std::string zoneId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_UPGRADELINDORMINSTANCEREQUEST_H_