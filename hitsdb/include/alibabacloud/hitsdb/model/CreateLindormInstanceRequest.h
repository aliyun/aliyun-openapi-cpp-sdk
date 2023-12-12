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

#ifndef ALIBABACLOUD_HITSDB_MODEL_CREATELINDORMINSTANCEREQUEST_H_
#define ALIBABACLOUD_HITSDB_MODEL_CREATELINDORMINSTANCEREQUEST_H_

#include <alibabacloud/hitsdb/HitsdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Hitsdb {
namespace Model {
class ALIBABACLOUD_HITSDB_EXPORT CreateLindormInstanceRequest : public RpcServiceRequest {
public:
	CreateLindormInstanceRequest();
	~CreateLindormInstanceRequest();
	std::string getArchVersion() const;
	void setArchVersion(const std::string &archVersion);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAutoRenewDuration() const;
	void setAutoRenewDuration(const std::string &autoRenewDuration);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getLogSpec() const;
	void setLogSpec(const std::string &logSpec);
	bool getAutoRenewal() const;
	void setAutoRenewal(bool autoRenewal);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	int getTsdbNum() const;
	void setTsdbNum(int tsdbNum);
	std::string getPrimaryVSwitchId() const;
	void setPrimaryVSwitchId(const std::string &primaryVSwitchId);
	int getSolrNum() const;
	void setSolrNum(int solrNum);
	std::string getInstanceStorage() const;
	void setInstanceStorage(const std::string &instanceStorage);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getLindormNum() const;
	void setLindormNum(int lindormNum);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	int getStreamNum() const;
	void setStreamNum(int streamNum);
	int getLogSingleStorage() const;
	void setLogSingleStorage(int logSingleStorage);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getArbiterZoneId() const;
	void setArbiterZoneId(const std::string &arbiterZoneId);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getMultiZoneCombination() const;
	void setMultiZoneCombination(const std::string &multiZoneCombination);
	std::string getTsdbSpec() const;
	void setTsdbSpec(const std::string &tsdbSpec);
	std::string getPrimaryZoneId() const;
	void setPrimaryZoneId(const std::string &primaryZoneId);
	std::string getFilestoreSpec() const;
	void setFilestoreSpec(const std::string &filestoreSpec);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDuration() const;
	void setDuration(const std::string &duration);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDiskCategory() const;
	void setDiskCategory(const std::string &diskCategory);
	std::string getLindormSpec() const;
	void setLindormSpec(const std::string &lindormSpec);
	int getColdStorage() const;
	void setColdStorage(int coldStorage);
	int getLogNum() const;
	void setLogNum(int logNum);
	std::string getStandbyVSwitchId() const;
	void setStandbyVSwitchId(const std::string &standbyVSwitchId);
	std::string getSolrSpec() const;
	void setSolrSpec(const std::string &solrSpec);
	std::string getLogDiskCategory() const;
	void setLogDiskCategory(const std::string &logDiskCategory);
	int getCoreSingleStorage() const;
	void setCoreSingleStorage(int coreSingleStorage);
	std::string getStandbyZoneId() const;
	void setStandbyZoneId(const std::string &standbyZoneId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getInstanceAlias() const;
	void setInstanceAlias(const std::string &instanceAlias);
	int getFilestoreNum() const;
	void setFilestoreNum(int filestoreNum);
	std::string getStreamSpec() const;
	void setStreamSpec(const std::string &streamSpec);
	std::string getCoreSpec() const;
	void setCoreSpec(const std::string &coreSpec);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getArbiterVSwitchId() const;
	void setArbiterVSwitchId(const std::string &arbiterVSwitchId);

private:
	std::string archVersion_;
	long resourceOwnerId_;
	std::string autoRenewDuration_;
	std::string resourceGroupId_;
	std::string logSpec_;
	bool autoRenewal_;
	std::string securityToken_;
	int tsdbNum_;
	std::string primaryVSwitchId_;
	int solrNum_;
	std::string instanceStorage_;
	long ownerId_;
	int lindormNum_;
	std::string vSwitchId_;
	int streamNum_;
	int logSingleStorage_;
	std::string zoneId_;
	std::string arbiterZoneId_;
	std::string pricingCycle_;
	std::string clientToken_;
	std::string multiZoneCombination_;
	std::string tsdbSpec_;
	std::string primaryZoneId_;
	std::string filestoreSpec_;
	std::string accessKeyId_;
	std::string duration_;
	std::string regionId_;
	std::string diskCategory_;
	std::string lindormSpec_;
	int coldStorage_;
	int logNum_;
	std::string standbyVSwitchId_;
	std::string solrSpec_;
	std::string logDiskCategory_;
	int coreSingleStorage_;
	std::string standbyZoneId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string instanceAlias_;
	int filestoreNum_;
	std::string streamSpec_;
	std::string coreSpec_;
	std::string vPCId_;
	std::string payType_;
	std::string arbiterVSwitchId_;
};
} // namespace Model
} // namespace Hitsdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_HITSDB_MODEL_CREATELINDORMINSTANCEREQUEST_H_
