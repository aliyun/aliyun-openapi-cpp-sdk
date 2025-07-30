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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEAVAILABLERESOURCEREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEAVAILABLERESOURCEREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeAvailableResourceRequest : public RpcServiceRequest {
public:
	DescribeAvailableResourceRequest();
	~DescribeAvailableResourceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getProductType() const;
	void setProductType(const std::string &productType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getExcludeZoneId() const;
	void setExcludeZoneId(const std::string &excludeZoneId);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getNodeId() const;
	void setNodeId(const std::string &nodeId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	bool getFromConsole() const;
	void setFromConsole(bool fromConsole);
	std::string getInstanceScene() const;
	void setInstanceScene(const std::string &instanceScene);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long resourceOwnerId_;
	std::string instanceClass_;
	std::string accessKeyId_;
	std::string productType_;
	std::string resourceGroupId_;
	std::string securityToken_;
	std::string regionId_;
	std::string engine_;
	std::string excludeZoneId_;
	std::string instanceChargeType_;
	std::string nodeId_;
	std::string resourceOwnerAccount_;
	std::string level_;
	std::string ownerAccount_;
	long ownerId_;
	std::string instanceId_;
	std::string acceptLanguage_;
	std::string zoneId_;
	bool fromConsole_;
	std::string instanceScene_;
	std::string orderType_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEAVAILABLERESOURCEREQUEST_H_
