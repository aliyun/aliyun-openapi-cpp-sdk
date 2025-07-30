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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEPRICEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEPRICEREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribePriceRequest : public RpcServiceRequest {
public:
	DescribePriceRequest();
	~DescribePriceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNodeType() const;
	void setNodeType(const std::string &nodeType);
	std::string getInstances() const;
	void setInstances(const std::string &instances);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	long getCapacity() const;
	void setCapacity(long capacity);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	int getShardCount() const;
	void setShardCount(int shardCount);
	long getPeriod() const;
	void setPeriod(long period);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	long getQuantity() const;
	void setQuantity(long quantity);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOrderParamOut() const;
	void setOrderParamOut(const std::string &orderParamOut);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	bool getForceUpgrade() const;
	void setForceUpgrade(bool forceUpgrade);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long resourceOwnerId_;
	std::string nodeType_;
	std::string instances_;
	std::string couponNo_;
	std::string engineVersion_;
	std::string instanceClass_;
	std::string accessKeyId_;
	long capacity_;
	std::string securityToken_;
	std::string regionId_;
	std::string businessInfo_;
	int shardCount_;
	long period_;
	std::string product_;
	long quantity_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string orderParamOut_;
	long ownerId_;
	std::string instanceId_;
	std::string zoneId_;
	std::string chargeType_;
	std::string category_;
	bool forceUpgrade_;
	std::string orderType_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEPRICEREQUEST_H_
