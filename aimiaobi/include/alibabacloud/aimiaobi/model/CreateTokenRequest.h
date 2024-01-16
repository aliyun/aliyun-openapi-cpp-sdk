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

#ifndef ALIBABACLOUD_AIMIAOBI_MODEL_CREATETOKENREQUEST_H_
#define ALIBABACLOUD_AIMIAOBI_MODEL_CREATETOKENREQUEST_H_

#include <alibabacloud/aimiaobi/AiMiaoBiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AiMiaoBi {
namespace Model {
class ALIBABACLOUD_AIMIAOBI_EXPORT CreateTokenRequest : public RpcServiceRequest {
public:
	CreateTokenRequest();
	~CreateTokenRequest();
	std::string getAgentKey() const;
	void setAgentKey(const std::string &agentKey);

private:
	std::string agentKey_;
};
} // namespace Model
} // namespace AiMiaoBi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIMIAOBI_MODEL_CREATETOKENREQUEST_H_
