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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATECONTROLPOLICYREQUEST_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATECONTROLPOLICYREQUEST_H_

#include <alibabacloud/resourcemanager/ResourceManagerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ResourceManager {
namespace Model {
class ALIBABACLOUD_RESOURCEMANAGER_EXPORT UpdateControlPolicyRequest : public RpcServiceRequest {
public:
	UpdateControlPolicyRequest();
	~UpdateControlPolicyRequest();
	std::string getNewPolicyName() const;
	void setNewPolicyName(const std::string &newPolicyName);
	std::string getPolicyId() const;
	void setPolicyId(const std::string &policyId);
	std::string getNewPolicyDocument() const;
	void setNewPolicyDocument(const std::string &newPolicyDocument);
	std::string getNewDescription() const;
	void setNewDescription(const std::string &newDescription);

private:
	std::string newPolicyName_;
	std::string policyId_;
	std::string newPolicyDocument_;
	std::string newDescription_;
};
} // namespace Model
} // namespace ResourceManager
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_UPDATECONTROLPOLICYREQUEST_H_
