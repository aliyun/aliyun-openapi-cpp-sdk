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

#ifndef ALIBABACLOUD_CCC_MODEL_SAVETERMINALLOGREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_SAVETERMINALLOGREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT SaveTerminalLogRequest : public RpcServiceRequest {
public:
	SaveTerminalLogRequest();
	~SaveTerminalLogRequest();
	std::string getCallId() const;
	void setCallId(const std::string &callId);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getUniqueRequestId() const;
	void setUniqueRequestId(const std::string &uniqueRequestId);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	int getDataType() const;
	void setDataType(int dataType);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getMethodName() const;
	void setMethodName(const std::string &methodName);

private:
	std::string callId_;
	std::string content_;
	std::string uniqueRequestId_;
	std::string jobId_;
	std::string instanceId_;
	std::string appName_;
	int dataType_;
	std::string status_;
	std::string methodName_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_SAVETERMINALLOGREQUEST_H_
