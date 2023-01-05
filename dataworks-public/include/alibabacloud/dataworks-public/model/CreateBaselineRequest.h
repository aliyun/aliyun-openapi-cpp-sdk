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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEBASELINEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEBASELINEREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateBaselineRequest : public RpcServiceRequest {
public:
	struct OvertimeSettings {
		std::string time;
		int cycle;
	};
	CreateBaselineRequest();
	~CreateBaselineRequest();
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	int getAlertMarginThreshold() const;
	void setAlertMarginThreshold(int alertMarginThreshold);
	std::vector<OvertimeSettings> getOvertimeSettings() const;
	void setOvertimeSettings(const std::vector<OvertimeSettings> &overtimeSettings);
	int getPriority() const;
	void setPriority(int priority);
	std::string getBaselineType() const;
	void setBaselineType(const std::string &baselineType);
	std::string getBaselineName() const;
	void setBaselineName(const std::string &baselineName);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getNodeIds() const;
	void setNodeIds(const std::string &nodeIds);

private:
	std::string owner_;
	int alertMarginThreshold_;
	std::vector<OvertimeSettings> overtimeSettings_;
	int priority_;
	std::string baselineType_;
	std::string baselineName_;
	long projectId_;
	std::string nodeIds_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEBASELINEREQUEST_H_
