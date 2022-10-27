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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTJOBSWITHFILTERSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTJOBSWITHFILTERSREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListJobsWithFiltersRequest : public RpcServiceRequest {
public:
	ListJobsWithFiltersRequest();
	~ListJobsWithFiltersRequest();
	std::string getJobStatus() const;
	void setJobStatus(const std::string &jobStatus);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getExecuteOrder() const;
	void setExecuteOrder(const std::string &executeOrder);
	std::string getJobName() const;
	void setJobName(const std::string &jobName);
	std::string getSubmitOrder() const;
	void setSubmitOrder(const std::string &submitOrder);
	std::string getPendOrder() const;
	void setPendOrder(const std::string &pendOrder);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::vector<std::string> getUsers() const;
	void setUsers(const std::vector<std::string> &users);
	std::string getCreateTimeEnd() const;
	void setCreateTimeEnd(const std::string &createTimeEnd);
	bool getAsync() const;
	void setAsync(bool async);
	std::vector<std::string> getNodes() const;
	void setNodes(const std::vector<std::string> &nodes);
	std::vector<std::string> getQueues() const;
	void setQueues(const std::vector<std::string> &queues);
	std::string getCreateTimeStart() const;
	void setCreateTimeStart(const std::string &createTimeStart);

private:
	std::string jobStatus_;
	long pageNumber_;
	std::string regionId_;
	long pageSize_;
	std::string executeOrder_;
	std::string jobName_;
	std::string submitOrder_;
	std::string pendOrder_;
	std::string clusterId_;
	std::vector<std::string> users_;
	std::string createTimeEnd_;
	bool async_;
	std::vector<std::string> nodes_;
	std::vector<std::string> queues_;
	std::string createTimeStart_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTJOBSWITHFILTERSREQUEST_H_
