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

#ifndef ALIBABACLOUD_FNF_MODEL_LISTEXECUTIONSREQUEST_H_
#define ALIBABACLOUD_FNF_MODEL_LISTEXECUTIONSREQUEST_H_

#include <alibabacloud/fnf/FnfExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Fnf {
namespace Model {
class ALIBABACLOUD_FNF_EXPORT ListExecutionsRequest : public RpcServiceRequest {
public:
	ListExecutionsRequest();
	~ListExecutionsRequest();
	std::string getStartedTimeBegin() const;
	void setStartedTimeBegin(const std::string &startedTimeBegin);
	std::string getExecutionNamePrefix() const;
	void setExecutionNamePrefix(const std::string &executionNamePrefix);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getLimit() const;
	void setLimit(int limit);
	std::string getFlowName() const;
	void setFlowName(const std::string &flowName);
	std::string getStartedTimeEnd() const;
	void setStartedTimeEnd(const std::string &startedTimeEnd);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string startedTimeBegin_;
	std::string executionNamePrefix_;
	std::string nextToken_;
	int limit_;
	std::string flowName_;
	std::string startedTimeEnd_;
	std::string status_;
};
} // namespace Model
} // namespace Fnf
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FNF_MODEL_LISTEXECUTIONSREQUEST_H_
