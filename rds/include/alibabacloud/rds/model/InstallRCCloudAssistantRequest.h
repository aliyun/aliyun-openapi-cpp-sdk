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

#ifndef ALIBABACLOUD_RDS_MODEL_INSTALLRCCLOUDASSISTANTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_INSTALLRCCLOUDASSISTANTREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT InstallRCCloudAssistantRequest : public RpcServiceRequest {
public:
	InstallRCCloudAssistantRequest();
	~InstallRCCloudAssistantRequest();
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);

private:
	std::string regionId_;
	std::vector<std::string> instanceIds_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_INSTALLRCCLOUDASSISTANTREQUEST_H_
