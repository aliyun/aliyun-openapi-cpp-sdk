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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_EXPORTJOBSREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_EXPORTJOBSREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT ExportJobsRequest : public RpcServiceRequest {
public:
	ExportJobsRequest();
	~ExportJobsRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::vector<long> getJobIds() const;
	void setJobIds(const std::vector<long> &jobIds);
	int getExportJobType() const;
	void setExportJobType(int exportJobType);

private:
	std::string mseSessionId_;
	std::string appName_;
	std::string clusterId_;
	std::vector<long> jobIds_;
	int exportJobType_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_EXPORTJOBSREQUEST_H_
