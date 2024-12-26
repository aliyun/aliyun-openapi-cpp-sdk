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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_LISTJOBSREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_LISTJOBSREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT ListJobsRequest : public RpcServiceRequest {
public:
	ListJobsRequest();
	~ListJobsRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	int getPageNum() const;
	void setPageNum(int pageNum);
	long getJobId() const;
	void setJobId(long jobId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getJobName() const;
	void setJobName(const std::string &jobName);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getJobHandler() const;
	void setJobHandler(const std::string &jobHandler);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string mseSessionId_;
	std::string description_;
	int pageNum_;
	long jobId_;
	std::string appName_;
	int pageSize_;
	std::string jobName_;
	std::string clusterId_;
	std::string jobHandler_;
	std::string status_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_LISTJOBSREQUEST_H_
