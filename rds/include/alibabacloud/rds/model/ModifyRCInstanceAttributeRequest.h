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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCEATTRIBUTEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyRCInstanceAttributeRequest : public RpcServiceRequest {
public:
	ModifyRCInstanceAttributeRequest();
	~ModifyRCInstanceAttributeRequest();
	std::string getSecurityGroupId() const;
	void setSecurityGroupId(const std::string &securityGroupId);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	std::string getPassword() const;
	void setPassword(const std::string &password);
	std::string getHostName() const;
	void setHostName(const std::string &hostName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getReboot() const;
	void setReboot(bool reboot);
	std::vector<std::string> getSecurityGroupIds() const;
	void setSecurityGroupIds(const std::vector<std::string> &securityGroupIds);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);

private:
	std::string securityGroupId_;
	bool deletionProtection_;
	std::string password_;
	std::string hostName_;
	std::string regionId_;
	bool reboot_;
	std::vector<std::string> securityGroupIds_;
	std::string instanceId_;
	std::vector<std::string> instanceIds_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCEATTRIBUTEREQUEST_H_
