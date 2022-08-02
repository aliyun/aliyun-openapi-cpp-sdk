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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYDIAGNOSTICMETRICSETREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYDIAGNOSTICMETRICSETREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyDiagnosticMetricSetRequest : public RpcServiceRequest {
public:
	ModifyDiagnosticMetricSetRequest();
	~ModifyDiagnosticMetricSetRequest();
	std::vector<std::string> getMetricIds() const;
	void setMetricIds(const std::vector<std::string> &metricIds);
	std::string getMetricSetId() const;
	void setMetricSetId(const std::string &metricSetId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getMetricSetName() const;
	void setMetricSetName(const std::string &metricSetName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	std::vector<std::string> metricIds_;
	std::string metricSetId_;
	std::string description_;
	std::string metricSetName_;
	std::string regionId_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYDIAGNOSTICMETRICSETREQUEST_H_
