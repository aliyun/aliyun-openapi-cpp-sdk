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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDIAGNOSTICMETRICSETSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDIAGNOSTICMETRICSETSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeDiagnosticMetricSetsRequest : public RpcServiceRequest {
public:
	DescribeDiagnosticMetricSetsRequest();
	~DescribeDiagnosticMetricSetsRequest();
	std::vector<std::string> getMetricSetIds() const;
	void setMetricSetIds(const std::vector<std::string> &metricSetIds);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	std::vector<std::string> metricSetIds_;
	std::string type_;
	std::string regionId_;
	std::string nextToken_;
	std::string resourceType_;
	int maxResults_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDIAGNOSTICMETRICSETSREQUEST_H_
