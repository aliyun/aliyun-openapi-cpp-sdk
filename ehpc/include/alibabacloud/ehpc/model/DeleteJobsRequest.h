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

#ifndef ALIBABACLOUD_EHPC_MODEL_DELETEJOBSREQUEST_H_
#define ALIBABACLOUD_EHPC_MODEL_DELETEJOBSREQUEST_H_

#include <alibabacloud/ehpc/EHPCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT DeleteJobsRequest : public RpcServiceRequest {
public:
	struct JobSpec {
		std::string jobId;
		struct TaskSpecItem {
			std::string taskName;
			int integer;
			std::vector<int> arrayIndex;
		};
		TaskSpecItem taskSpecItem;
		std::vector<TaskSpecItem> taskSpec;
	};
	DeleteJobsRequest();
	~DeleteJobsRequest();
	std::vector<JobSpec> getJobSpec() const;
	void setJobSpec(const std::vector<JobSpec> &jobSpec);
	std::vector<std::string> getExecutorIds() const;
	void setExecutorIds(const std::vector<std::string> &executorIds);

private:
	std::vector<JobSpec> jobSpec_;
	std::vector<std::string> executorIds_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_DELETEJOBSREQUEST_H_
