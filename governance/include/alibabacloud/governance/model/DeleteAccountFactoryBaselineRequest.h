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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_DELETEACCOUNTFACTORYBASELINEREQUEST_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_DELETEACCOUNTFACTORYBASELINEREQUEST_H_

#include <alibabacloud/governance/GovernanceExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Governance {
namespace Model {
class ALIBABACLOUD_GOVERNANCE_EXPORT DeleteAccountFactoryBaselineRequest : public RpcServiceRequest {
public:
	DeleteAccountFactoryBaselineRequest();
	~DeleteAccountFactoryBaselineRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getBaselineId() const;
	void setBaselineId(const std::string &baselineId);

private:
	std::string regionId_;
	std::string baselineId_;
};
} // namespace Model
} // namespace Governance
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_DELETEACCOUNTFACTORYBASELINEREQUEST_H_
