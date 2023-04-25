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

#ifndef ALIBABACLOUD_CCC_MODEL_CREATECONTACTFLOWREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_CREATECONTACTFLOWREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT CreateContactFlowRequest : public RpcServiceRequest {
public:
	CreateContactFlowRequest();
	~CreateContactFlowRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getDefinition() const;
	void setDefinition(const std::string &definition);

private:
	std::string description_;
	std::string type_;
	std::string instanceId_;
	std::string name_;
	std::string definition_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_CREATECONTACTFLOWREQUEST_H_
