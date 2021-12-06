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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTLINKSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTLINKSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeSnapshotLinksRequest : public RpcServiceRequest {
public:
	DescribeSnapshotLinksRequest();
	~DescribeSnapshotLinksRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDiskIds() const;
	void setDiskIds(const std::string &diskIds);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getSnapshotLinkIds() const;
	void setSnapshotLinkIds(const std::string &snapshotLinkIds);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string diskIds_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string snapshotLinkIds_;
	long ownerId_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESNAPSHOTLINKSREQUEST_H_
