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

#ifndef ALIBABACLOUD_ECD_MODEL_APPLYCOORDINATIONFORMONITORINGREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_APPLYCOORDINATIONFORMONITORINGREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ApplyCoordinationForMonitoringRequest : public RpcServiceRequest {
public:
	struct ResourceCandidates {
		std::string resourceId;
		std::string resourceProperties;
		std::string resourceName;
		std::string resourceType;
		std::string ownerWyId;
		std::string resourceRegionId;
		long ownerAliUid;
		std::string ownerEndUserId;
	};
	ApplyCoordinationForMonitoringRequest();
	~ApplyCoordinationForMonitoringRequest();
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getInitiatorType() const;
	void setInitiatorType(const std::string &initiatorType);
	std::string getCoordinatePolicyType() const;
	void setCoordinatePolicyType(const std::string &coordinatePolicyType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<ResourceCandidates> getResourceCandidates() const;
	void setResourceCandidates(const std::vector<ResourceCandidates> &resourceCandidates);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);

private:
	std::string uuid_;
	std::string initiatorType_;
	std::string coordinatePolicyType_;
	std::string regionId_;
	std::vector<ResourceCandidates> resourceCandidates_;
	std::string endUserId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_APPLYCOORDINATIONFORMONITORINGREQUEST_H_
