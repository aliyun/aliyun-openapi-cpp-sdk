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

#ifndef ALIBABACLOUD_CSAS_MODEL_UPDATEDYNAMICROUTEREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_UPDATEDYNAMICROUTEREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT UpdateDynamicRouteRequest : public RpcServiceRequest {
public:
	UpdateDynamicRouteRequest();
	~UpdateDynamicRouteRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getDynamicRouteId() const;
	void setDynamicRouteId(const std::string &dynamicRouteId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getDynamicRouteType() const;
	void setDynamicRouteType(const std::string &dynamicRouteType);
	std::vector<std::string> getTagIds() const;
	void setTagIds(const std::vector<std::string> &tagIds);
	std::vector<std::string> getRegionIds() const;
	void setRegionIds(const std::vector<std::string> &regionIds);
	int getPriority() const;
	void setPriority(int priority);
	std::string getNextHop() const;
	void setNextHop(const std::string &nextHop);
	std::vector<std::string> getApplicationIds() const;
	void setApplicationIds(const std::vector<std::string> &applicationIds);
	std::string getModifyType() const;
	void setModifyType(const std::string &modifyType);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getApplicationType() const;
	void setApplicationType(const std::string &applicationType);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string description_;
	std::string dynamicRouteId_;
	std::string sourceIp_;
	std::string dynamicRouteType_;
	std::vector<std::string> tagIds_;
	std::vector<std::string> regionIds_;
	int priority_;
	std::string nextHop_;
	std::vector<std::string> applicationIds_;
	std::string modifyType_;
	std::string name_;
	std::string applicationType_;
	std::string status_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_UPDATEDYNAMICROUTEREQUEST_H_
