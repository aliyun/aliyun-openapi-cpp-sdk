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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCESPECREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCESPECREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyInstanceSpecRequest : public RpcServiceRequest {
public:
	struct Disk {
		std::string performanceLevel;
		std::string diskId;
		std::string category;
	};
	ModifyInstanceSpecRequest();
	~ModifyInstanceSpecRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	bool getAllowMigrateAcrossZone() const;
	void setAllowMigrateAcrossZone(bool allowMigrateAcrossZone);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getSystemDiskCategory() const;
	void setSystemDiskCategory(const std::string &systemDiskCategory);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getTemporaryEndTime() const;
	void setTemporaryEndTime(const std::string &temporaryEndTime);
	std::string getModifyMode() const;
	void setModifyMode(const std::string &modifyMode);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getTemporaryInternetMaxBandwidthOut() const;
	void setTemporaryInternetMaxBandwidthOut(int temporaryInternetMaxBandwidthOut);
	std::string getTemporaryStartTime() const;
	void setTemporaryStartTime(const std::string &temporaryStartTime);
	bool getAsync() const;
	void setAsync(bool async);
	std::vector<Disk> getDisk() const;
	void setDisk(const std::vector<Disk> &disk);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getInternetMaxBandwidthIn() const;
	void setInternetMaxBandwidthIn(int internetMaxBandwidthIn);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	bool allowMigrateAcrossZone_;
	int internetMaxBandwidthOut_;
	std::string systemDiskCategory_;
	std::string instanceType_;
	std::string temporaryEndTime_;
	std::string modifyMode_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	int temporaryInternetMaxBandwidthOut_;
	std::string temporaryStartTime_;
	bool async_;
	std::vector<Disk> disk_;
	std::string instanceId_;
	int internetMaxBandwidthIn_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCESPECREQUEST_H_
