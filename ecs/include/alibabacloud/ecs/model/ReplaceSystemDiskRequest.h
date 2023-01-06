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

#ifndef ALIBABACLOUD_ECS_MODEL_REPLACESYSTEMDISKREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_REPLACESYSTEMDISKREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ReplaceSystemDiskRequest : public RpcServiceRequest {
public:
	struct Arn {
		std::string rolearn;
		std::string roleType;
		long assumeRoleFor;
	};
	ReplaceSystemDiskRequest();
	~ReplaceSystemDiskRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getEncryptAlgorithm() const;
	void setEncryptAlgorithm(const std::string &encryptAlgorithm);
	std::string getSecurityEnhancementStrategy() const;
	void setSecurityEnhancementStrategy(const std::string &securityEnhancementStrategy);
	std::string getKeyPairName() const;
	void setKeyPairName(const std::string &keyPairName);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	bool getLoginAsNonRoot() const;
	void setLoginAsNonRoot(bool loginAsNonRoot);
	bool getPasswordInherit() const;
	void setPasswordInherit(bool passwordInherit);
	std::string getDiskId() const;
	void setDiskId(const std::string &diskId);
	std::vector<Arn> getArn() const;
	void setArn(const std::vector<Arn> &arn);
	std::string getArchitecture() const;
	void setArchitecture(const std::string &architecture);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getSystemDiskSize() const;
	void setSystemDiskSize(int systemDiskSize);
	bool getEncrypted() const;
	void setEncrypted(bool encrypted);
	std::string getKMSKeyId() const;
	void setKMSKeyId(const std::string &kMSKeyId);
	bool getUseAdditionalService() const;
	void setUseAdditionalService(bool useAdditionalService);

private:
	long resourceOwnerId_;
	std::string imageId_;
	std::string clientToken_;
	std::string encryptAlgorithm_;
	std::string securityEnhancementStrategy_;
	std::string keyPairName_;
	std::string platform_;
	std::string password_;
	bool loginAsNonRoot_;
	bool passwordInherit_;
	std::string diskId_;
	std::vector<Arn> arn_;
	std::string architecture_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string instanceId_;
	int systemDiskSize_;
	bool encrypted_;
	std::string kMSKeyId_;
	bool useAdditionalService_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_REPLACESYSTEMDISKREQUEST_H_
