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

#ifndef ALIBABACLOUD_CMS_MODEL_CREATEGROUPMONITORINGAGENTPROCESSREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_CREATEGROUPMONITORINGAGENTPROCESSREQUEST_H_

#include <alibabacloud/cms/CmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cms {
namespace Model {
class ALIBABACLOUD_CMS_EXPORT CreateGroupMonitoringAgentProcessRequest : public RpcServiceRequest {
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
	struct MatchExpress {
		std::string function;
		std::string name;
		std::string value;
	};
	CreateGroupMonitoringAgentProcessRequest();
	~CreateGroupMonitoringAgentProcessRequest();
	std::vector<AlertConfig> getAlertConfig() const;
	void setAlertConfig(const std::vector<AlertConfig> &alertConfig);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getProcessName() const;
	void setProcessName(const std::string &processName);
	std::string getMatchExpressFilterRelation() const;
	void setMatchExpressFilterRelation(const std::string &matchExpressFilterRelation);
	std::vector<MatchExpress> getMatchExpress() const;
	void setMatchExpress(const std::vector<MatchExpress> &matchExpress);

private:
	std::vector<AlertConfig> alertConfig_;
	std::string groupId_;
	std::string processName_;
	std::string matchExpressFilterRelation_;
	std::vector<MatchExpress> matchExpress_;
};
} // namespace Model
} // namespace Cms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CMS_MODEL_CREATEGROUPMONITORINGAGENTPROCESSREQUEST_H_
