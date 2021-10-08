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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeSnapshotsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeSnapshotsRequest();
	~DescribeSnapshotsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getFilter2Value() const;
	void setFilter2Value(const std::string &filter2Value);
	std::string getSnapshotIds() const;
	void setSnapshotIds(const std::string &snapshotIds);
	std::string getUsage() const;
	void setUsage(const std::string &usage);
	std::string getSnapshotLinkId() const;
	void setSnapshotLinkId(const std::string &snapshotLinkId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getFilter1Key() const;
	void setFilter1Key(const std::string &filter1Key);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getFilter1Value() const;
	void setFilter1Value(const std::string &filter1Value);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getSnapshotName() const;
	void setSnapshotName(const std::string &snapshotName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getSourceDiskType() const;
	void setSourceDiskType(const std::string &sourceDiskType);
	std::string getFilter2Key() const;
	void setFilter2Key(const std::string &filter2Key);
	bool getEncrypted() const;
	void setEncrypted(bool encrypted);
	std::string getSnapshotType() const;
	void setSnapshotType(const std::string &snapshotType);
	std::string getKMSKeyId() const;
	void setKMSKeyId(const std::string &kMSKeyId);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	long resourceOwnerId_;
	std::string filter2Value_;
	std::string snapshotIds_;
	std::string usage_;
	std::string snapshotLinkId_;
	std::string resourceGroupId_;
	std::string filter1Key_;
	std::vector<Tag> tag_;
	bool dryRun_;
	std::string filter1Value_;
	long ownerId_;
	std::string instanceId_;
	int maxResults_;
	std::string status_;
	std::string snapshotName_;
	int pageNumber_;
	std::string regionId_;
	std::string nextToken_;
	int pageSize_;
	std::string diskId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string sourceDiskType_;
	std::string filter2Key_;
	bool encrypted_;
	std::string snapshotType_;
	std::string kMSKeyId_;
	std::string category_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
