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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEBASELINEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEBASELINEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateBaselineRequest : public RpcServiceRequest {
public:
	struct OvertimeSettings {
		std::string time;
		int cycle;
	};
	struct AlertSettings {
		struct DingRobotsItem {
			bool atAll;
			std::string webUrl;
		};
		DingRobotsItem dingRobotsItem;
		std::vector<DingRobotsItem> dingRobots;
		std::string alertType;
		int alertMaximum;
		std::string silenceStartTime;
		std::string string;
		std::vector<std::string> webhooks;
		bool baselineAlertEnabled;
		std::string alertRecipientType;
		int alertInterval;
		std::string string;
		std::vector<std::string> topicTypes;
		std::string alertRecipient;
		std::string string;
		std::vector<std::string> alertMethods;
		std::string silenceEndTime;
	};
	UpdateBaselineRequest();
	~UpdateBaselineRequest();
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getRemoveNodeIds() const;
	void setRemoveNodeIds(const std::string &removeNodeIds);
	int getAlertMarginThreshold() const;
	void setAlertMarginThreshold(int alertMarginThreshold);
	std::vector<OvertimeSettings> getOvertimeSettings() const;
	void setOvertimeSettings(const std::vector<OvertimeSettings> &overtimeSettings);
	int getPriority() const;
	void setPriority(int priority);
	long getBaselineId() const;
	void setBaselineId(long baselineId);
	bool getEnabled() const;
	void setEnabled(bool enabled);
	std::string getBaselineType() const;
	void setBaselineType(const std::string &baselineType);
	bool getAlertEnabled() const;
	void setAlertEnabled(bool alertEnabled);
	std::vector<AlertSettings> getAlertSettings() const;
	void setAlertSettings(const std::vector<AlertSettings> &alertSettings);
	std::string getBaselineName() const;
	void setBaselineName(const std::string &baselineName);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getNodeIds() const;
	void setNodeIds(const std::string &nodeIds);

private:
	std::string owner_;
	std::string removeNodeIds_;
	int alertMarginThreshold_;
	std::vector<OvertimeSettings> overtimeSettings_;
	int priority_;
	long baselineId_;
	bool enabled_;
	std::string baselineType_;
	bool alertEnabled_;
	std::vector<AlertSettings> alertSettings_;
	std::string baselineName_;
	long projectId_;
	std::string nodeIds_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEBASELINEREQUEST_H_
