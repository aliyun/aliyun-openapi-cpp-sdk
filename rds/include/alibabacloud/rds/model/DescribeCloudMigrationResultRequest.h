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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBECLOUDMIGRATIONRESULTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBECLOUDMIGRATIONRESULTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeCloudMigrationResultRequest : public RpcServiceRequest {
public:
	DescribeCloudMigrationResultRequest();
	~DescribeCloudMigrationResultRequest();
	std::string getDBInstanceName() const;
	void setDBInstanceName(const std::string &dBInstanceName);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	long getSourcePort() const;
	void setSourcePort(long sourcePort);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	long getTaskId() const;
	void setTaskId(long taskId);
	std::string getSourceIpAddress() const;
	void setSourceIpAddress(const std::string &sourceIpAddress);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string dBInstanceName_;
	long resourceOwnerId_;
	std::string taskName_;
	long pageNumber_;
	std::string accessKeyId_;
	long sourcePort_;
	std::string regionId_;
	long pageSize_;
	long taskId_;
	std::string sourceIpAddress_;
	std::string resourceOwnerAccount_;
	long ownerId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBECLOUDMIGRATIONRESULTREQUEST_H_
