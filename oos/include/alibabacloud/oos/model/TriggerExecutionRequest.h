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

#ifndef ALIBABACLOUD_OOS_MODEL_TRIGGEREXECUTIONREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_TRIGGEREXECUTIONREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT TriggerExecutionRequest : public RpcServiceRequest {
public:
	TriggerExecutionRequest();
	~TriggerExecutionRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getContent() const;
	void setContent(const std::string &content);
	std::string getExecutionId() const;
	void setExecutionId(const std::string &executionId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string clientToken_;
	std::string type_;
	std::string content_;
	std::string executionId_;
	std::string regionId_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_TRIGGEREXECUTIONREQUEST_H_
