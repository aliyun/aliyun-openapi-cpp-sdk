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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_CREATEHOSTGROUPREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_CREATEHOSTGROUPREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT CreateHostGroupRequest : public RoaServiceRequest {
public:
	CreateHostGroupRequest();
	~CreateHostGroupRequest();
	long getServiceConnectionId() const;
	void setServiceConnectionId(long serviceConnectionId);
	std::string getMachineInfos() const;
	void setMachineInfos(const std::string &machineInfos);
	std::string getTagIds() const;
	void setTagIds(const std::string &tagIds);
	std::string getAliyunRegion() const;
	void setAliyunRegion(const std::string &aliyunRegion);
	std::string getEnvId() const;
	void setEnvId(const std::string &envId);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getEcsLabelKey() const;
	void setEcsLabelKey(const std::string &ecsLabelKey);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getEcsLabelValue() const;
	void setEcsLabelValue(const std::string &ecsLabelValue);
	std::string getEcsType() const;
	void setEcsType(const std::string &ecsType);

private:
	long serviceConnectionId_;
	std::string machineInfos_;
	std::string tagIds_;
	std::string aliyunRegion_;
	std::string envId_;
	std::string type_;
	std::string organizationId_;
	std::string ecsLabelKey_;
	std::string name_;
	std::string ecsLabelValue_;
	std::string ecsType_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_CREATEHOSTGROUPREQUEST_H_
