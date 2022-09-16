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

#ifndef ALIBABACLOUD_ECD_MODEL_DELETEPOLICYGROUPSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DELETEPOLICYGROUPSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DeletePolicyGroupsRequest : public RpcServiceRequest {
public:
	DeletePolicyGroupsRequest();
	~DeletePolicyGroupsRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getPolicyGroupId() const;
	void setPolicyGroupId(const std::vector<std::string> &policyGroupId);

private:
	std::string regionId_;
	std::vector<std::string> policyGroupId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DELETEPOLICYGROUPSREQUEST_H_
