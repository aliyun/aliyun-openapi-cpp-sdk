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

#ifndef ALIBABACLOUD_CMS_MODEL_MODIFYGROUPMONITORINGAGENTPROCESSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_MODIFYGROUPMONITORINGAGENTPROCESSREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT ModifyGroupMonitoringAgentProcessRequest : public RpcServiceRequest {
public:
	struct AlertConfig {
		std::string times;
		std::string webhook;
		std::string noEffectiveInterval;
		std::string silenceTime;
		std::string threshold;
		std::string comparisonOperator;
		std::string effectiveInterval;
		std::string escalationsLevel;
		std::string statistics;
	};
	ModifyGroupMonitoringAgentProcessRequest();
	~ModifyGroupMonitoringAgentProcessRequest();
	std::vector<AlertConfig> getAlertConfig() const;
	void setAlertConfig(const std::vector<AlertConfig> &alertConfig);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getMatchExpressFilterRelation() const;
	void setMatchExpressFilterRelation(const std::string &matchExpressFilterRelation);
	std::string getId() const;
	void setId(const std::string &id);

private:
	std::vector<AlertConfig> alertConfig_;
	std::string groupId_;
	std::string matchExpressFilterRelation_;
	std::string id_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_MODIFYGROUPMONITORINGAGENTPROCESSREQUEST_H_
