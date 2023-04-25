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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTLEGACYAGENTEVENTLOGSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTLEGACYAGENTEVENTLOGSREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListLegacyAgentEventLogsRequest : public RpcServiceRequest {
public:
	ListLegacyAgentEventLogsRequest();
	~ListLegacyAgentEventLogsRequest();
	std::string getAgentId() const;
	void setAgentId(const std::string &agentId);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string agentId_;
	long endTime_;
	long startTime_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string instanceId_;
	int pageSize_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTLEGACYAGENTEVENTLOGSREQUEST_H_
