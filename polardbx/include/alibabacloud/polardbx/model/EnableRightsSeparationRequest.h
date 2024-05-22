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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_ENABLERIGHTSSEPARATIONREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_ENABLERIGHTSSEPARATIONREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT EnableRightsSeparationRequest : public RpcServiceRequest {
public:
	EnableRightsSeparationRequest();
	~EnableRightsSeparationRequest();
	std::string getSecurityAccountPassword() const;
	void setSecurityAccountPassword(const std::string &securityAccountPassword);
	std::string getSecurityAccountDescription() const;
	void setSecurityAccountDescription(const std::string &securityAccountDescription);
	std::string getAuditAccountPassword() const;
	void setAuditAccountPassword(const std::string &auditAccountPassword);
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSecurityAccountName() const;
	void setSecurityAccountName(const std::string &securityAccountName);
	std::string getAuditAccountName() const;
	void setAuditAccountName(const std::string &auditAccountName);
	std::string getAuditAccountDescription() const;
	void setAuditAccountDescription(const std::string &auditAccountDescription);

private:
	std::string securityAccountPassword_;
	std::string securityAccountDescription_;
	std::string auditAccountPassword_;
	std::string dBInstanceName_;
	std::string regionId_;
	std::string securityAccountName_;
	std::string auditAccountName_;
	std::string auditAccountDescription_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_ENABLERIGHTSSEPARATIONREQUEST_H_
