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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_ENROLLACCOUNTREQUEST_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_ENROLLACCOUNTREQUEST_H_

#include <alibabacloud/governance/GovernanceExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Governance {
namespace Model {
class ALIBABACLOUD_GOVERNANCE_EXPORT EnrollAccountRequest : public RpcServiceRequest {
public:
	struct BaselineItems {
		std::string name;
		bool skip;
		std::string config;
		std::string version;
	};
	EnrollAccountRequest();
	~EnrollAccountRequest();
	std::string getFolderId() const;
	void setFolderId(const std::string &folderId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPayerAccountUid() const;
	void setPayerAccountUid(long payerAccountUid);
	long getAccountUid() const;
	void setAccountUid(long accountUid);
	std::string getAccountNamePrefix() const;
	void setAccountNamePrefix(const std::string &accountNamePrefix);
	std::string getResellAccountType() const;
	void setResellAccountType(const std::string &resellAccountType);
	std::string getBaselineId() const;
	void setBaselineId(const std::string &baselineId);
	std::vector<BaselineItems> getBaselineItems() const;
	void setBaselineItems(const std::vector<BaselineItems> &baselineItems);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);

private:
	std::string folderId_;
	std::string regionId_;
	long payerAccountUid_;
	long accountUid_;
	std::string accountNamePrefix_;
	std::string resellAccountType_;
	std::string baselineId_;
	std::vector<BaselineItems> baselineItems_;
	std::string displayName_;
};
} // namespace Model
} // namespace Governance
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_ENROLLACCOUNTREQUEST_H_
