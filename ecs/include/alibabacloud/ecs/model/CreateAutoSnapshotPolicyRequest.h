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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT CreateAutoSnapshotPolicyRequest : public RpcServiceRequest {
public:
	struct CopyEncryptionConfiguration {
		bool encrypted;
		std::string kMSKeyId;
		struct ArnItem {
			std::string rolearn;
			std::string roleType;
			long assumeRoleFor;
		};
		ArnItem arnItem;
		std::vector<ArnItem> arn;
	};
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateAutoSnapshotPolicyRequest();
	~CreateAutoSnapshotPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	CopyEncryptionConfiguration getCopyEncryptionConfiguration() const;
	void setCopyEncryptionConfiguration(const CopyEncryptionConfiguration &copyEncryptionConfiguration);
	int getCopiedSnapshotsRetentionDays() const;
	void setCopiedSnapshotsRetentionDays(int copiedSnapshotsRetentionDays);
	std::string getTimePoints() const;
	void setTimePoints(const std::string &timePoints);
	std::string getRepeatWeekdays() const;
	void setRepeatWeekdays(const std::string &repeatWeekdays);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getStorageLocationArn() const;
	void setStorageLocationArn(const std::string &storageLocationArn);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getEnableCrossRegionCopy() const;
	void setEnableCrossRegionCopy(bool enableCrossRegionCopy);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAutoSnapshotPolicyName() const;
	void setAutoSnapshotPolicyName(const std::string &autoSnapshotPolicyName);
	int getRetentionDays() const;
	void setRetentionDays(int retentionDays);
	std::string getTargetCopyRegions() const;
	void setTargetCopyRegions(const std::string &targetCopyRegions);

private:
	long resourceOwnerId_;
	CopyEncryptionConfiguration copyEncryptionConfiguration_;
	int copiedSnapshotsRetentionDays_;
	std::string timePoints_;
	std::string repeatWeekdays_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string storageLocationArn_;
	std::vector<Tag> tag_;
	bool enableCrossRegionCopy_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string autoSnapshotPolicyName_;
	int retentionDays_;
	std::string targetCopyRegions_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEAUTOSNAPSHOTPOLICYREQUEST_H_
