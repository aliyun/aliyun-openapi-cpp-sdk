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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEHISTORYTASKSSTATREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEHISTORYTASKSSTATREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribeHistoryTasksStatRequest : public RpcServiceRequest {
public:
	DescribeHistoryTasksStatRequest();
	~DescribeHistoryTasksStatRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getToStartTime() const;
	void setToStartTime(const std::string &toStartTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	int getToExecTime() const;
	void setToExecTime(int toExecTime);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getFromStartTime() const;
	void setFromStartTime(const std::string &fromStartTime);
	int getFromExecTime() const;
	void setFromExecTime(int fromExecTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long resourceOwnerId_;
	std::string toStartTime_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string taskId_;
	int toExecTime_;
	std::string taskType_;
	std::string resourceOwnerAccount_;
	std::string fromStartTime_;
	int fromExecTime_;
	std::string instanceId_;
	std::string status_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEHISTORYTASKSSTATREQUEST_H_
