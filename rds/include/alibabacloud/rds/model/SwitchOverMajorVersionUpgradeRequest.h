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

#ifndef ALIBABACLOUD_RDS_MODEL_SWITCHOVERMAJORVERSIONUPGRADEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_SWITCHOVERMAJORVERSIONUPGRADEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT SwitchOverMajorVersionUpgradeRequest : public RpcServiceRequest {
public:
	SwitchOverMajorVersionUpgradeRequest();
	~SwitchOverMajorVersionUpgradeRequest();
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getType() const;
	void setType(const std::string &type);
	int getSwitchoverTimeout() const;
	void setSwitchoverTimeout(int switchoverTimeout);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string dBInstanceName_;
	long ownerId_;
	std::string type_;
	int switchoverTimeout_;
	std::string regionId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_SWITCHOVERMAJORVERSIONUPGRADEREQUEST_H_
