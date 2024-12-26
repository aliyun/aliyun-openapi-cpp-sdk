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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_IMPORTJOBSREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_IMPORTJOBSREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT ImportJobsRequest : public RpcServiceRequest {
public:
	ImportJobsRequest();
	~ImportJobsRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getContent() const;
	void setContent(const std::string &content);
	bool getOverwrite() const;
	void setOverwrite(bool overwrite);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	bool getAutoCreateApp() const;
	void setAutoCreateApp(bool autoCreateApp);

private:
	std::string mseSessionId_;
	std::string content_;
	bool overwrite_;
	std::string clusterId_;
	bool autoCreateApp_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_IMPORTJOBSREQUEST_H_
