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

#ifndef ALIBABACLOUD_FNF_MODEL_DESCRIBEEXECUTIONREQUEST_H_
#define ALIBABACLOUD_FNF_MODEL_DESCRIBEEXECUTIONREQUEST_H_

#include <alibabacloud/fnf/FnfExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Fnf {
namespace Model {
class ALIBABACLOUD_FNF_EXPORT DescribeExecutionRequest : public RpcServiceRequest {
public:
	DescribeExecutionRequest();
	~DescribeExecutionRequest();
	std::string getExecutionName() const;
	void setExecutionName(const std::string &executionName);
	int getWaitTimeSeconds() const;
	void setWaitTimeSeconds(int waitTimeSeconds);
	std::string getFlowName() const;
	void setFlowName(const std::string &flowName);

private:
	std::string executionName_;
	int waitTimeSeconds_;
	std::string flowName_;
};
} // namespace Model
} // namespace Fnf
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FNF_MODEL_DESCRIBEEXECUTIONREQUEST_H_
