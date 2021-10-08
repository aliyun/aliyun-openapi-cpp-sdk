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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeInstancesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeInstancesRequest();
	~DescribeInstancesRequest();
	std::string getInnerIpAddresses() const;
	void setInnerIpAddresses(const std::string &innerIpAddresses);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getPrivateIpAddresses() const;
	void setPrivateIpAddresses(const std::string &privateIpAddresses);
	std::string getHpcClusterId() const;
	void setHpcClusterId(const std::string &hpcClusterId);
	int getHttpPutResponseHopLimit() const;
	void setHttpPutResponseHopLimit(int httpPutResponseHopLimit);
	std::string getFilter2Value() const;
	void setFilter2Value(const std::string &filter2Value);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getLockReason() const;
	void setLockReason(const std::string &lockReason);
	std::string getFilter1Key() const;
	void setFilter1Key(const std::string &filter1Key);
	bool getDeviceAvailable() const;
	void setDeviceAvailable(bool deviceAvailable);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getFilter3Value() const;
	void setFilter3Value(const std::string &filter3Value);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getFilter1Value() const;
	void setFilter1Value(const std::string &filter1Value);
	bool getNeedSaleCycle() const;
	void setNeedSaleCycle(bool needSaleCycle);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::vector<std::string> getAdditionalAttributes() const;
	void setAdditionalAttributes(const std::vector<std::string> &additionalAttributes);
	std::string getInstanceName() const;
	void setInstanceName(const std::string &instanceName);
	std::string getInstanceIds() const;
	void setInstanceIds(const std::string &instanceIds);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::vector<std::string> getIpv6Address() const;
	void setIpv6Address(const std::vector<std::string> &ipv6Address);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getFilter4Value() const;
	void setFilter4Value(const std::string &filter4Value);
	bool getIoOptimized() const;
	void setIoOptimized(bool ioOptimized);
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	std::string getFilter4Key() const;
	void setFilter4Key(const std::string &filter4Key);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getRdmaIpAddresses() const;
	void setRdmaIpAddresses(const std::string &rdmaIpAddresses);
	std::string getHttpEndpoint() const;
	void setHttpEndpoint(const std::string &httpEndpoint);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getPublicIpAddresses() const;
	void setPublicIpAddresses(const std::string &publicIpAddresses);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getInstanceTypeFamily() const;
	void setInstanceTypeFamily(const std::string &instanceTypeFamily);
	std::string getFilter2Key() const;
	void setFilter2Key(const std::string &filter2Key);
	std::string getEipAddresses() const;
	void setEipAddresses(const std::string &eipAddresses);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getHttpTokens() const;
	void setHttpTokens(const std::string &httpTokens);
	std::string getFilter3Key() const;
	void setFilter3Key(const std::string &filter3Key);

private:
	std::string innerIpAddresses_;
	long resourceOwnerId_;
	std::string privateIpAddresses_;
	std::string hpcClusterId_;
	int httpPutResponseHopLimit_;
	std::string filter2Value_;
	std::string keyPairName_;
	std::string resourceGroupId_;
	std::string lockReason_;
	std::string filter1Key_;
	bool deviceAvailable_;
	std::vector<Tag> tag_;
	std::string filter3Value_;
	bool dryRun_;
	std::string filter1Value_;
	bool needSaleCycle_;
	long ownerId_;
	std::string vSwitchId_;
	std::vector<std::string> additionalAttributes_;
	std::string instanceName_;
	std::string instanceIds_;
	std::string internetChargeType_;
	std::string zoneId_;
	int maxResults_;
	std::vector<std::string> ipv6Address_;
	std::string instanceNetworkType_;
	std::string status_;
	std::string imageId_;
	std::string filter4Value_;
	bool ioOptimized_;
	std::string securityGroupId_;
	std::string filter4Key_;
	int pageNumber_;
	std::string regionId_;
	std::string nextToken_;
	std::string rdmaIpAddresses_;
	std::string httpEndpoint_;
	int pageSize_;
	std::string publicIpAddresses_;
	std::string instanceType_;
	std::string instanceChargeType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string instanceTypeFamily_;
	std::string filter2Key_;
	std::string eipAddresses_;
	std::string vpcId_;
	std::string httpTokens_;
	std::string filter3Key_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEINSTANCESREQUEST_H_
