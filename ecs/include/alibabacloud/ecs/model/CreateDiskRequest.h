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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateDiskRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	struct SystemTag {
		std::string scope;
		std::string value;
		std::string key;
	};
	struct Arn {
		std::string rolearn;
		std::string roleType;
		long assumeRoleFor;
	};
	CreateDiskRequest();
	~CreateDiskRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getEncryptAlgorithm() const;
	void setEncryptAlgorithm(const std::string &encryptAlgorithm);
	std::string getDiskName() const;
	void setDiskName(const std::string &diskName);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getStorageSetPartitionNumber() const;
	void setStorageSetPartitionNumber(int storageSetPartitionNumber);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	long getProvisionedIops() const;
	void setProvisionedIops(long provisionedIops);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getSize() const;
	void setSize(int size);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::string getStorageClusterId() const;
	void setStorageClusterId(const std::string &storageClusterId);
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDiskCategory() const;
	void setDiskCategory(const std::string &diskCategory);
	std::string getMultiAttach() const;
	void setMultiAttach(const std::string &multiAttach);
	std::string getAdvancedFeatures() const;
	void setAdvancedFeatures(const std::string &advancedFeatures);
	std::vector<Arn> getArn() const;
	void setArn(const std::vector<Arn> &arn);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPerformanceLevel() const;
	void setPerformanceLevel(const std::string &performanceLevel);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getBurstingEnabled() const;
	void setBurstingEnabled(bool burstingEnabled);
	std::string getStorageSetId() const;
	void setStorageSetId(const std::string &storageSetId);
	bool getEncrypted() const;
	void setEncrypted(bool encrypted);
	std::string getKMSKeyId() const;
	void setKMSKeyId(const std::string &kMSKeyId);

private:
	long resourceOwnerId_;
	std::string encryptAlgorithm_;
	std::string diskName_;
	std::string resourceGroupId_;
	int storageSetPartitionNumber_;
	std::vector<Tag> tag_;
	long ownerId_;
	long provisionedIops_;
	std::string instanceId_;
	int size_;
	std::string zoneId_;
	std::string storageClusterId_;
	std::string snapshotId_;
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	std::string description_;
	std::string regionId_;
	std::string diskCategory_;
	std::string multiAttach_;
	std::string advancedFeatures_;
	std::vector<Arn> arn_;
	std::string resourceOwnerAccount_;
	std::string performanceLevel_;
	std::string ownerAccount_;
	bool burstingEnabled_;
	std::string storageSetId_;
	bool encrypted_;
	std::string kMSKeyId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEDISKREQUEST_H_
