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

#ifndef ALIBABACLOUD_KMS_MODEL_SETKEYPOLICYREQUEST_H_
#define ALIBABACLOUD_KMS_MODEL_SETKEYPOLICYREQUEST_H_

#include <alibabacloud/kms/KmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Kms {
namespace Model {
class ALIBABACLOUD_KMS_EXPORT SetKeyPolicyRequest : public RpcServiceRequest {
public:
	SetKeyPolicyRequest();
	~SetKeyPolicyRequest();
	std::string getKeyId() const;
	void setKeyId(const std::string &keyId);
	std::string getPolicyName() const;
	void setPolicyName(const std::string &policyName);
	std::string getPolicy() const;
	void setPolicy(const std::string &policy);

private:
	std::string keyId_;
	std::string policyName_;
	std::string policy_;
};
} // namespace Model
} // namespace Kms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_KMS_MODEL_SETKEYPOLICYREQUEST_H_
