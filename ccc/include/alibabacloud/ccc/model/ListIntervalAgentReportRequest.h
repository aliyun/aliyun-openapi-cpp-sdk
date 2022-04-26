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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTINTERVALAGENTREPORTREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTINTERVALAGENTREPORTREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListIntervalAgentReportRequest : public RpcServiceRequest {
public:
	ListIntervalAgentReportRequest();
	~ListIntervalAgentReportRequest();
	std::string getAgentId() const;
	void setAgentId(const std::string &agentId);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInterval() const;
	void setInterval(const std::string &interval);

private:
	std::string agentId_;
	long endTime_;
	long startTime_;
	std::string instanceId_;
	std::string interval_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTINTERVALAGENTREPORTREQUEST_H_
