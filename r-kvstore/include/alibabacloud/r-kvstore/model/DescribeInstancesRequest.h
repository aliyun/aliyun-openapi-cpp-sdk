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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeInstancesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeInstancesRequest();
	~DescribeInstancesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getInstanceClass() const;
	void setInstanceClass(const std::string &instanceClass);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getExpired() const;
	void setExpired(const std::string &expired);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getEditionType() const;
	void setEditionType(const std::string &editionType);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getWithoutTair() const;
	void setWithoutTair(bool withoutTair);
	std::string getInstanceStatus() const;
	void setInstanceStatus(const std::string &instanceStatus);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getGlobalInstance() const;
	void setGlobalInstance(bool globalInstance);
	std::string getPrivateIp() const;
	void setPrivateIp(const std::string &privateIp);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	int getVpcCloudInsInfo() const;
	void setVpcCloudInsInfo(int vpcCloudInsInfo);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);
	std::string getArchitectureType() const;
	void setArchitectureType(const std::string &architectureType);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);

private:
	long resourceOwnerId_;
	std::string searchKey_;
	std::string networkType_;
	std::string engineVersion_;
	std::string instanceClass_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string expired_;
	std::string securityToken_;
	std::string regionId_;
	int pageSize_;
	std::string instanceType_;
	std::string editionType_;
	std::vector<Tag> tag_;
	bool withoutTair_;
	std::string instanceStatus_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool globalInstance_;
	std::string privateIp_;
	long ownerId_;
	std::string vSwitchId_;
	int vpcCloudInsInfo_;
	std::string instanceIds_;
	std::string architectureType_;
	std::string vpcId_;
	std::string zoneId_;
	std::string chargeType_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEINSTANCESREQUEST_H_
