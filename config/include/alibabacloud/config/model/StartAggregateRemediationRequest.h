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

#ifndef ALIBABACLOUD_CONFIG_MODEL_STARTAGGREGATEREMEDIATIONREQUEST_H_
#define ALIBABACLOUD_CONFIG_MODEL_STARTAGGREGATEREMEDIATIONREQUEST_H_

#include <alibabacloud/config/ConfigExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Config {
namespace Model {
class ALIBABACLOUD_CONFIG_EXPORT StartAggregateRemediationRequest : public RpcServiceRequest {
public:
	StartAggregateRemediationRequest();
	~StartAggregateRemediationRequest();
	std::string getConfigRuleId() const;
	void setConfigRuleId(const std::string &configRuleId);
	std::string getResourceOwnerId() const;
	void setResourceOwnerId(const std::string &resourceOwnerId);
	std::string getAggregatorId() const;
	void setAggregatorId(const std::string &aggregatorId);
	long getResourceAccountId() const;
	void setResourceAccountId(long resourceAccountId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getResourceRegionId() const;
	void setResourceRegionId(const std::string &resourceRegionId);
	std::string getResourceId() const;
	void setResourceId(const std::string &resourceId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	std::string configRuleId_;
	std::string resourceOwnerId_;
	std::string aggregatorId_;
	long resourceAccountId_;
	std::string regionId_;
	std::string resourceRegionId_;
	std::string resourceId_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Config
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CONFIG_MODEL_STARTAGGREGATEREMEDIATIONREQUEST_H_
