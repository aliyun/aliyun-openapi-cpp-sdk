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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEGADINSTANCEMEMBERREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEGADINSTANCEMEMBERREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateGadInstanceMemberRequest : public RpcServiceRequest {
public:
	struct UnitNode {
		long dBInstanceStorage;
		std::string zoneIDSlave1;
		std::string zoneIDSlave2;
		std::string engineVersion;
		std::string dbInstanceClass;
		std::string securityIPList;
		std::string vSwitchID;
		std::string engine;
		std::string regionID;
		std::string dtsInstanceClass;
		std::string vpcID;
		std::string zoneID;
		std::string dBInstanceDescription;
		std::string dBInstanceStorageType;
		std::string dtsConflict;
	};
	CreateGadInstanceMemberRequest();
	~CreateGadInstanceMemberRequest();
	std::string getCentralRdsDtsAdminAccount() const;
	void setCentralRdsDtsAdminAccount(const std::string &centralRdsDtsAdminAccount);
	std::string getCentralRegionId() const;
	void setCentralRegionId(const std::string &centralRegionId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGadInstanceId() const;
	void setGadInstanceId(const std::string &gadInstanceId);
	std::vector<UnitNode> getUnitNode() const;
	void setUnitNode(const std::vector<UnitNode> &unitNode);
	std::string getDBList() const;
	void setDBList(const std::string &dBList);
	std::string getCentralDBInstanceId() const;
	void setCentralDBInstanceId(const std::string &centralDBInstanceId);
	std::string getCentralRdsDtsAdminPassword() const;
	void setCentralRdsDtsAdminPassword(const std::string &centralRdsDtsAdminPassword);

private:
	std::string centralRdsDtsAdminAccount_;
	std::string centralRegionId_;
	std::string regionId_;
	std::string gadInstanceId_;
	std::vector<UnitNode> unitNode_;
	std::string dBList_;
	std::string centralDBInstanceId_;
	std::string centralRdsDtsAdminPassword_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEGADINSTANCEMEMBERREQUEST_H_
