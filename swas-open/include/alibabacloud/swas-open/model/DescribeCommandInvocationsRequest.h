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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECOMMANDINVOCATIONSREQUEST_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECOMMANDINVOCATIONSREQUEST_H_

#include <alibabacloud/swas-open/SWAS_OPENExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SWAS_OPEN {
namespace Model {
class ALIBABACLOUD_SWAS_OPEN_EXPORT DescribeCommandInvocationsRequest : public RpcServiceRequest {
public:
	DescribeCommandInvocationsRequest();
	~DescribeCommandInvocationsRequest();
	std::string getCommandId() const;
	void setCommandId(const std::string &commandId);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getInvokeId() const;
	void setInvokeId(const std::string &invokeId);
	std::string getCommandName() const;
	void setCommandName(const std::string &commandName);
	std::string getCommandType() const;
	void setCommandType(const std::string &commandType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getInvocationStatus() const;
	void setInvocationStatus(const std::string &invocationStatus);

private:
	std::string commandId_;
	std::string pageNumber_;
	std::string regionId_;
	std::string pageSize_;
	std::string invokeId_;
	std::string commandName_;
	std::string commandType_;
	std::string instanceId_;
	std::string invocationStatus_;
};
} // namespace Model
} // namespace SWAS_OPEN
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBECOMMANDINVOCATIONSREQUEST_H_
