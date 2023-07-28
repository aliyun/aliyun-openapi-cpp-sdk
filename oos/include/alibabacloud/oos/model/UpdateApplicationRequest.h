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

#ifndef ALIBABACLOUD_OOS_MODEL_UPDATEAPPLICATIONREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_UPDATEAPPLICATIONREQUEST_H_

#include <alibabacloud/oos/OosExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Oos {
namespace Model {
class ALIBABACLOUD_OOS_EXPORT UpdateApplicationRequest : public RpcServiceRequest {
public:
	struct AlarmConfig {
		std::string string;
		std::vector<std::string> templateIds;
		std::string string;
		std::vector<std::string> contactGroups;
		std::string healthCheckUrl;
	};
	UpdateApplicationRequest();
	~UpdateApplicationRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	AlarmConfig getAlarmConfig() const;
	void setAlarmConfig(const AlarmConfig &alarmConfig);
	bool getDeleteAlarmRulesBeforeUpdate() const;
	void setDeleteAlarmRulesBeforeUpdate(bool deleteAlarmRulesBeforeUpdate);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::map<std::string, std::string> getTags() const;
	void setTags(const std::map<std::string, std::string> &tags);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string description_;
	AlarmConfig alarmConfig_;
	bool deleteAlarmRulesBeforeUpdate_;
	std::string regionId_;
	std::map<std::string, std::string> tags_;
	std::string name_;
};
} // namespace Model
} // namespace Oos
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OOS_MODEL_UPDATEAPPLICATIONREQUEST_H_
