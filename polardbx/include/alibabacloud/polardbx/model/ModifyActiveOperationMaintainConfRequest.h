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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_MODIFYACTIVEOPERATIONMAINTAINCONFREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_MODIFYACTIVEOPERATIONMAINTAINCONFREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT ModifyActiveOperationMaintainConfRequest : public RpcServiceRequest {
public:
	ModifyActiveOperationMaintainConfRequest();
	~ModifyActiveOperationMaintainConfRequest();
	std::string getCycleTime() const;
	void setCycleTime(const std::string &cycleTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getMaintainStartTime() const;
	void setMaintainStartTime(const std::string &maintainStartTime);
	std::string getCycleType() const;
	void setCycleType(const std::string &cycleType);
	std::string getMaintainEndTime() const;
	void setMaintainEndTime(const std::string &maintainEndTime);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string cycleTime_;
	std::string regionId_;
	std::string maintainStartTime_;
	std::string cycleType_;
	std::string maintainEndTime_;
	int status_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_MODIFYACTIVEOPERATIONMAINTAINCONFREQUEST_H_
