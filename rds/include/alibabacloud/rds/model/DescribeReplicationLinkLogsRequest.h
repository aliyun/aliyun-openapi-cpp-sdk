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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEREPLICATIONLINKLOGSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEREPLICATIONLINKLOGSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeReplicationLinkLogsRequest : public RpcServiceRequest {
public:
	DescribeReplicationLinkLogsRequest();
	~DescribeReplicationLinkLogsRequest();
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	long getTaskId() const;
	void setTaskId(long taskId);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);

private:
	std::string taskName_;
	long pageNumber_;
	std::string regionId_;
	long pageSize_;
	std::string dBInstanceId_;
	long taskId_;
	std::string taskType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEREPLICATIONLINKLOGSREQUEST_H_
