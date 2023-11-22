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

#include <alibabacloud/hitsdb/HitsdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Hitsdb {
namespace Model {
class ALIBABACLOUD_HITSDB_EXPORT UpgradeLindormInstanceRequest : public RpcServiceRequest {
public:
	UpgradeLindormInstanceRequest();
	~UpgradeLindormInstanceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getLogSpec() const;
	void setLogSpec(const std::string &logSpec);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	int getTsdbNum() const;
	void setTsdbNum(int tsdbNum);
	int getSolrNum() const;
	void setSolrNum(int solrNum);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getLindormNum() const;
	void setLindormNum(int lindormNum);
	int getLtsCoreNum() const;
	void setLtsCoreNum(int ltsCoreNum);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getMlNum() const;
	void setMlNum(int mlNum);
	int getStreamNum() const;
	void setStreamNum(int streamNum);
	int getLogSingleStorage() const;
	void setLogSingleStorage(int logSingleStorage);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getUpgradeType() const;
	void setUpgradeType(const std::string &upgradeType);
	std::string getTsdbSpec() const;
	void setTsdbSpec(const std::string &tsdbSpec);
	std::string getFilestoreSpec() const;
	void setFilestoreSpec(const std::string &filestoreSpec);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getLindormSpec() const;
	void setLindormSpec(const std::string &lindormSpec);
	int getColdStorage() const;
	void setColdStorage(int coldStorage);
	int getLogNum() const;
	void setLogNum(int logNum);
	std::string getSolrSpec() const;
	void setSolrSpec(const std::string &solrSpec);
	int getCoreSingleStorage() const;
	void setCoreSingleStorage(int coreSingleStorage);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	int getFilestoreNum() const;
	void setFilestoreNum(int filestoreNum);
	std::string getStreamSpec() const;
	void setStreamSpec(const std::string &streamSpec);
	std::string getMlSpec() const;
	void setMlSpec(const std::string &mlSpec);
	std::string getLtsCoreSpec() const;
	void setLtsCoreSpec(const std::string &ltsCoreSpec);
	int getClusterStorage() const;
	void setClusterStorage(int clusterStorage);

private:
	long resourceOwnerId_;
	std::string logSpec_;
	std::string securityToken_;
	int tsdbNum_;
	int solrNum_;
	long ownerId_;
	int lindormNum_;
	int ltsCoreNum_;
	std::string instanceId_;
	int mlNum_;
	int streamNum_;
	int logSingleStorage_;
	std::string zoneId_;
	std::string clientToken_;
	std::string upgradeType_;
	std::string tsdbSpec_;
	std::string filestoreSpec_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string lindormSpec_;
	int coldStorage_;
	int logNum_;
	std::string solrSpec_;
	int coreSingleStorage_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	int filestoreNum_;
	std::string streamSpec_;
	std::string mlSpec_;
	std::string ltsCoreSpec_;
	int clusterStorage_;
};
} // namespace Model
} // namespace Hitsdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_HITSDB_MODEL_UPGRADELINDORMINSTANCEREQUEST_H_
