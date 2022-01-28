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

#ifndef ALIBABACLOUD_ENS_MODEL_RUNSERVICESCHEDULEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_RUNSERVICESCHEDULEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT RunServiceScheduleRequest : public RpcServiceRequest {
public:
	RunServiceScheduleRequest();
	~RunServiceScheduleRequest();
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getClientIp() const;
	void setClientIp(const std::string &clientIp);
	std::string getPodConfigName() const;
	void setPodConfigName(const std::string &podConfigName);
	std::string getServiceCommands() const;
	void setServiceCommands(const std::string &serviceCommands);
	std::string getScheduleStrategy() const;
	void setScheduleStrategy(const std::string &scheduleStrategy);
	std::string getDirectorys() const;
	void setDirectorys(const std::string &directorys);
	int getPreLockedTimeout() const;
	void setPreLockedTimeout(int preLockedTimeout);
	std::string getServiceAction() const;
	void setServiceAction(const std::string &serviceAction);
	std::string getAppId() const;
	void setAppId(const std::string &appId);

private:
	std::string uuid_;
	std::string clientIp_;
	std::string podConfigName_;
	std::string serviceCommands_;
	std::string scheduleStrategy_;
	std::string directorys_;
	int preLockedTimeout_;
	std::string serviceAction_;
	std::string appId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_RUNSERVICESCHEDULEREQUEST_H_
