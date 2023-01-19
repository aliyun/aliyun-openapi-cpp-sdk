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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYUNIBACKUPPOLICYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYUNIBACKUPPOLICYREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ModifyUniBackupPolicyRequest : public RpcServiceRequest {
public:
	ModifyUniBackupPolicyRequest();
	~ModifyUniBackupPolicyRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getPolicyStatus() const;
	void setPolicyStatus(const std::string &policyStatus);
	long getSpeedLimiter() const;
	void setSpeedLimiter(long speedLimiter);
	std::string getIncPlan() const;
	void setIncPlan(const std::string &incPlan);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getPolicyId() const;
	void setPolicyId(long policyId);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	std::string getFullPlan() const;
	void setFullPlan(const std::string &fullPlan);
	int getRetention() const;
	void setRetention(int retention);
	std::string getAccountPassword() const;
	void setAccountPassword(const std::string &accountPassword);
	std::string getPolicyName() const;
	void setPolicyName(const std::string &policyName);

private:
	long resourceOwnerId_;
	std::string policyStatus_;
	long speedLimiter_;
	std::string incPlan_;
	std::string sourceIp_;
	long policyId_;
	std::string accountName_;
	std::string fullPlan_;
	int retention_;
	std::string accountPassword_;
	std::string policyName_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYUNIBACKUPPOLICYREQUEST_H_
