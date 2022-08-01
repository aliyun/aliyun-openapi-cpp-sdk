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

#ifndef ALIBABACLOUD_KMS_MODEL_PUTSECRETVALUEREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_PUTSECRETVALUEREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT PutSecretValueRequest : public RpcServiceRequest {
public:
	PutSecretValueRequest();
	~PutSecretValueRequest();
	std::string getVersionId() const;
	void setVersionId(const std::string &versionId);
	std::string getVersionStages() const;
	void setVersionStages(const std::string &versionStages);
	std::string getSecretData() const;
	void setSecretData(const std::string &secretData);
	std::string getSecretName() const;
	void setSecretName(const std::string &secretName);
	std::string getSecretDataType() const;
	void setSecretDataType(const std::string &secretDataType);

private:
	std::string versionId_;
	std::string versionStages_;
	std::string secretData_;
	std::string secretName_;
	std::string secretDataType_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_PUTSECRETVALUEREQUEST_H_
