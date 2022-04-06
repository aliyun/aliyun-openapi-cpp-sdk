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
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getTsdbSpec() const;
	void setTsdbSpec(const std::string &tsdbSpec);
	std::string getFilestoreSpec() const;
	void setFilestoreSpec(const std::string &filestoreSpec);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDuration() const;
	void setDuration(const std::string &duration);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getTsdbNum() const;
	void setTsdbNum(int tsdbNum);
	std::string getDiskCategory() const;
	void setDiskCategory(const std::string &diskCategory);
	std::string getLindormSpec() const;
	void setLindormSpec(const std::string &lindormSpec);
	int getSolrNum() const;
	void setSolrNum(int solrNum);
	int getColdStorage() const;
	void setColdStorage(int coldStorage);
	std::string getInstanceStorage() const;
	void setInstanceStorage(const std::string &instanceStorage);
	std::string getSolrSpec() const;
	void setSolrSpec(const std::string &solrSpec);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getInstanceAlias() const;
	void setInstanceAlias(const std::string &instanceAlias);
	int getFilestoreNum() const;
	void setFilestoreNum(int filestoreNum);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getLindormNum() const;
	void setLindormNum(int lindormNum);
	std::string getCoreSpec() const;
	void setCoreSpec(const std::string &coreSpec);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string tsdbSpec_;
	std::string filestoreSpec_;
	std::string accessKeyId_;
	std::string duration_;
	std::string securityToken_;
	std::string regionId_;
	int tsdbNum_;
	std::string diskCategory_;
	std::string lindormSpec_;
	int solrNum_;
	int coldStorage_;
	std::string instanceStorage_;
	std::string solrSpec_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string instanceAlias_;
	int filestoreNum_;
	long ownerId_;
	int lindormNum_;
	std::string coreSpec_;
	std::string vSwitchId_;
	std::string vPCId_;
	std::string zoneId_;
	std::string payType_;
	std::string pricingCycle_;
};
} // namespace Model
} // namespace Hitsdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_HITSDB_MODEL_CREATELINDORMINSTANCEREQUEST_H_
