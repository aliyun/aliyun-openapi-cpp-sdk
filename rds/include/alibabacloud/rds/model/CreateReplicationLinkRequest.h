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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATEREPLICATIONLINKREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATEREPLICATIONLINKREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateReplicationLinkRequest : public RpcServiceRequest {
public:
	CreateReplicationLinkRequest();
	~CreateReplicationLinkRequest();
	std::string getReplicatorAccount() const;
	void setReplicatorAccount(const std::string &replicatorAccount);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	long getSourcePort() const;
	void setSourcePort(long sourcePort);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	long getTaskId() const;
	void setTaskId(long taskId);
	std::string getSourceInstanceName() const;
	void setSourceInstanceName(const std::string &sourceInstanceName);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getSourceInstanceRegionId() const;
	void setSourceInstanceRegionId(const std::string &sourceInstanceRegionId);
	std::string getTargetAddress() const;
	void setTargetAddress(const std::string &targetAddress);
	std::string getReplicatorPassword() const;
	void setReplicatorPassword(const std::string &replicatorPassword);
	std::string getSourceAddress() const;
	void setSourceAddress(const std::string &sourceAddress);
	std::string getSourceCategory() const;
	void setSourceCategory(const std::string &sourceCategory);

private:
	std::string replicatorAccount_;
	std::string taskName_;
	long sourcePort_;
	std::string regionId_;
	std::string dBInstanceId_;
	long taskId_;
	std::string sourceInstanceName_;
	bool dryRun_;
	std::string sourceInstanceRegionId_;
	std::string targetAddress_;
	std::string replicatorPassword_;
	std::string sourceAddress_;
	std::string sourceCategory_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATEREPLICATIONLINKREQUEST_H_
