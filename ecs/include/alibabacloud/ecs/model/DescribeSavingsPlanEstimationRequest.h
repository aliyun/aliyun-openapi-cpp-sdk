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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANESTIMATIONREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANESTIMATIONREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeSavingsPlanEstimationRequest : public RpcServiceRequest {
public:
	DescribeSavingsPlanEstimationRequest();
	~DescribeSavingsPlanEstimationRequest();
	std::string getPlanType() const;
	void setPlanType(const std::string &planType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEstimationResource() const;
	void setEstimationResource(const std::string &estimationResource);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getPeriod() const;
	void setPeriod(const std::string &period);
	std::string getInstanceTypeScope() const;
	void setInstanceTypeScope(const std::string &instanceTypeScope);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getOfferingType() const;
	void setOfferingType(const std::string &offeringType);

private:
	std::string planType_;
	std::string regionId_;
	std::string estimationResource_;
	std::string resourceId_;
	std::string period_;
	std::string instanceTypeScope_;
	std::string periodUnit_;
	std::string offeringType_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESAVINGSPLANESTIMATIONREQUEST_H_
