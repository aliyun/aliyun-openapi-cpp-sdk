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

#ifndef ALIBABACLOUD_ECS_WORKBENCH_MODEL_VIEWINSTANCERECORDSREQUEST_H_
#define ALIBABACLOUD_ECS_WORKBENCH_MODEL_VIEWINSTANCERECORDSREQUEST_H_

#include <alibabacloud/ecs-workbench/Ecs_workbenchExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs_workbench {
namespace Model {
class ALIBABACLOUD_ECS_WORKBENCH_EXPORT ViewInstanceRecordsRequest : public RpcServiceRequest {
public:
	ViewInstanceRecordsRequest();
	~ViewInstanceRecordsRequest();
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getTerminalSessionToken() const;
	void setTerminalSessionToken(const std::string &terminalSessionToken);

private:
	std::string instanceId_;
	std::string regionId_;
	std::string terminalSessionToken_;
};
} // namespace Model
} // namespace Ecs_workbench
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_WORKBENCH_MODEL_VIEWINSTANCERECORDSREQUEST_H_
