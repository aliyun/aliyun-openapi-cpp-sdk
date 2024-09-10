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

#ifndef ALIBABACLOUD_ECS_MODEL_ATTACHDISKREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_ATTACHDISKREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT AttachDiskRequest : public RpcServiceRequest {
public:
	struct AdditionalInfo {
		bool enableSRIOV;
		std::string identifier;
		bool safeMode;
		std::string targetDevice;
	};
	AttachDiskRequest();
	~AttachDiskRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	bool getBootable() const;
	void setBootable(bool bootable);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	bool getDeleteWithInstance() const;
	void setDeleteWithInstance(bool deleteWithInstance);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	AdditionalInfo getAdditionalInfo() const;
	void setAdditionalInfo(const AdditionalInfo &additionalInfo);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getForce() const;
	void setForce(bool force);
	std::string getDevice() const;
	void setDevice(const std::string &device);

private:
	long resourceOwnerId_;
	std::string keyPairName_;
	bool bootable_;
	std::string password_;
	std::string diskId_;
	bool deleteWithInstance_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	AdditionalInfo additionalInfo_;
	std::string instanceId_;
	bool force_;
	std::string device_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_ATTACHDISKREQUEST_H_
