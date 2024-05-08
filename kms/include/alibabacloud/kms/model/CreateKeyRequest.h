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

#ifndef ALIBABACLOUD_KMS_MODEL_CREATEKEYREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_CREATEKEYREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT CreateKeyRequest : public RpcServiceRequest {
public:
	CreateKeyRequest();
	~CreateKeyRequest();
	std::string getOrigin() const;
	void setOrigin(const std::string &origin);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getKeySpec() const;
	void setKeySpec(const std::string &keySpec);
	std::string getRotationInterval() const;
	void setRotationInterval(const std::string &rotationInterval);
	bool getEnableAutomaticRotation() const;
	void setEnableAutomaticRotation(bool enableAutomaticRotation);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getProtectionLevel() const;
	void setProtectionLevel(const std::string &protectionLevel);
	std::string getKeyUsage() const;
	void setKeyUsage(const std::string &keyUsage);
	std::string getDKMSInstanceId() const;
	void setDKMSInstanceId(const std::string &dKMSInstanceId);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);

private:
	std::string origin_;
	std::string description_;
	std::string keySpec_;
	std::string rotationInterval_;
	bool enableAutomaticRotation_;
	std::string tags_;
	std::string protectionLevel_;
	std::string keyUsage_;
	std::string dKMSInstanceId_;
	std::string policy_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_CREATEKEYREQUEST_H_
