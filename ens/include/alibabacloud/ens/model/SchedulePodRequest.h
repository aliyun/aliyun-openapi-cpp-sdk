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

#ifndef ALIBABACLOUD_ENS_MODEL_SCHEDULEPODREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_SCHEDULEPODREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT SchedulePodRequest : public RpcServiceRequest {
public:
	SchedulePodRequest();
	~SchedulePodRequest();
	std::string getAreaCodes() const;
	void setAreaCodes(const std::string &areaCodes);
	std::string getGroupUuid() const;
	void setGroupUuid(const std::string &groupUuid);
	std::string getIsps() const;
	void setIsps(const std::string &isps);
	std::string getTenant() const;
	void setTenant(const std::string &tenant);
	std::string getWorkloadUuid() const;
	void setWorkloadUuid(const std::string &workloadUuid);
	std::string getLabels() const;
	void setLabels(const std::string &labels);
	std::string getRegions() const;
	void setRegions(const std::string &regions);
	std::string getResourceAttribute() const;
	void setResourceAttribute(const std::string &resourceAttribute);
	long getAliUid() const;
	void setAliUid(long aliUid);
	std::string getRequirements() const;
	void setRequirements(const std::string &requirements);

private:
	std::string areaCodes_;
	std::string groupUuid_;
	std::string isps_;
	std::string tenant_;
	std::string workloadUuid_;
	std::string labels_;
	std::string regions_;
	std::string resourceAttribute_;
	long aliUid_;
	std::string requirements_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_SCHEDULEPODREQUEST_H_
