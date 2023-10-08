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

#ifndef ALIBABACLOUD_NLB_MODEL_UPDATESECURITYPOLICYATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_NLB_MODEL_UPDATESECURITYPOLICYATTRIBUTEREQUEST_H_

#include <alibabacloud/nlb/NlbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nlb {
namespace Model {
class ALIBABACLOUD_NLB_EXPORT UpdateSecurityPolicyAttributeRequest : public RpcServiceRequest {
public:
	UpdateSecurityPolicyAttributeRequest();
	~UpdateSecurityPolicyAttributeRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getCiphers() const;
	void setCiphers(const std::vector<std::string> &ciphers);
	std::vector<std::string> getTlsVersions() const;
	void setTlsVersions(const std::vector<std::string> &tlsVersions);
	std::string getSecurityPolicyName() const;
	void setSecurityPolicyName(const std::string &securityPolicyName);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getSecurityPolicyId() const;
	void setSecurityPolicyId(const std::string &securityPolicyId);

private:
	std::string clientToken_;
	std::string regionId_;
	std::vector<std::string> ciphers_;
	std::vector<std::string> tlsVersions_;
	std::string securityPolicyName_;
	bool dryRun_;
	std::string securityPolicyId_;
};
} // namespace Model
} // namespace Nlb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NLB_MODEL_UPDATESECURITYPOLICYATTRIBUTEREQUEST_H_
