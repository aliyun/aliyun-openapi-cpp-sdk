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

#ifndef ALIBABACLOUD_RDS_MODEL_REDEPLOYRCINSTANCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_REDEPLOYRCINSTANCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT RedeployRCInstanceRequest : public RpcServiceRequest {
public:
	RedeployRCInstanceRequest();
	~RedeployRCInstanceRequest();
	bool getForceStop() const;
	void setForceStop(bool forceStop);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	bool forceStop_;
	std::string instanceId_;
	std::string regionId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_REDEPLOYRCINSTANCEREQUEST_H_
