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

#ifndef ALIBABACLOUD_KMS_MODEL_CREATESECRETREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_CREATESECRETREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT CreateSecretRequest : public RpcServiceRequest {
public:
	CreateSecretRequest();
	~CreateSecretRequest();
	std::string getSecretType() const;
	void setSecretType(const std::string &secretType);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRotationInterval() const;
	void setRotationInterval(const std::string &rotationInterval);
	bool getEnableAutomaticRotation() const;
	void setEnableAutomaticRotation(bool enableAutomaticRotation);
	std::string getEncryptionKeyId() const;
	void setEncryptionKeyId(const std::string &encryptionKeyId);
	std::string getTags() const;
	void setTags(const std::string &tags);
	std::string getExtendedConfig() const;
	void setExtendedConfig(const std::string &extendedConfig);
	std::string getVersionId() const;
	void setVersionId(const std::string &versionId);
	std::string getDKMSInstanceId() const;
	void setDKMSInstanceId(const std::string &dKMSInstanceId);
	std::string getSecretData() const;
	void setSecretData(const std::string &secretData);
	std::string getSecretName() const;
	void setSecretName(const std::string &secretName);
	std::string getSecretDataType() const;
	void setSecretDataType(const std::string &secretDataType);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);

private:
	std::string secretType_;
	std::string description_;
	std::string rotationInterval_;
	bool enableAutomaticRotation_;
	std::string encryptionKeyId_;
	std::string tags_;
	std::string extendedConfig_;
	std::string versionId_;
	std::string dKMSInstanceId_;
	std::string secretData_;
	std::string secretName_;
	std::string secretDataType_;
	std::string policy_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_CREATESECRETREQUEST_H_
