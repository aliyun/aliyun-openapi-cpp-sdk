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

#ifndef ALIBABACLOUD_FNF_MODEL_CREATEFLOWREQUEST_H_
#define ALIBABACLOUD_FNF_MODEL_CREATEFLOWREQUEST_H_

#include <alibabacloud/fnf/FnfExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Fnf {
namespace Model {
class ALIBABACLOUD_FNF_EXPORT CreateFlowRequest : public RpcServiceRequest {
public:
	CreateFlowRequest();
	~CreateFlowRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getRoleArn() const;
	void setRoleArn(const std::string &roleArn);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getDefinition() const;
	void setDefinition(const std::string &definition);
	std::string getExternalStorageLocation() const;
	void setExternalStorageLocation(const std::string &externalStorageLocation);
	std::string getExecutionMode() const;
	void setExecutionMode(const std::string &executionMode);

private:
	std::string description_;
	std::string type_;
	std::string roleArn_;
	std::string name_;
	std::string definition_;
	std::string externalStorageLocation_;
	std::string executionMode_;
};
} // namespace Model
} // namespace Fnf
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FNF_MODEL_CREATEFLOWREQUEST_H_
