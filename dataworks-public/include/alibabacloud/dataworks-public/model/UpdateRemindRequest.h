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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEREMINDREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEREMINDREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateRemindRequest : public RpcServiceRequest {
public:
	UpdateRemindRequest();
	~UpdateRemindRequest();
	std::string getAlertUnit() const;
	void setAlertUnit(const std::string &alertUnit);
	bool getUseFlag() const;
	void setUseFlag(bool useFlag);
	std::string getRobotUrls() const;
	void setRobotUrls(const std::string &robotUrls);
	std::string getBizProcessIds() const;
	void setBizProcessIds(const std::string &bizProcessIds);
	std::string getRemindType() const;
	void setRemindType(const std::string &remindType);
	std::string getBaselineIds() const;
	void setBaselineIds(const std::string &baselineIds);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getDndEnd() const;
	void setDndEnd(const std::string &dndEnd);
	std::string getRemindUnit() const;
	void setRemindUnit(const std::string &remindUnit);
	int getAlertInterval() const;
	void setAlertInterval(int alertInterval);
	std::string getAlertMethods() const;
	void setAlertMethods(const std::string &alertMethods);
	int getMaxAlertTimes() const;
	void setMaxAlertTimes(int maxAlertTimes);
	std::string getAlertTargets() const;
	void setAlertTargets(const std::string &alertTargets);
	std::string getWebhooks() const;
	void setWebhooks(const std::string &webhooks);
	long getRemindId() const;
	void setRemindId(long remindId);
	std::string getDetail() const;
	void setDetail(const std::string &detail);
	std::string getRemindName() const;
	void setRemindName(const std::string &remindName);
	std::string getNodeIds() const;
	void setNodeIds(const std::string &nodeIds);

private:
	std::string alertUnit_;
	bool useFlag_;
	std::string robotUrls_;
	std::string bizProcessIds_;
	std::string remindType_;
	std::string baselineIds_;
	long projectId_;
	std::string dndEnd_;
	std::string remindUnit_;
	int alertInterval_;
	std::string alertMethods_;
	int maxAlertTimes_;
	std::string alertTargets_;
	std::string webhooks_;
	long remindId_;
	std::string detail_;
	std::string remindName_;
	std::string nodeIds_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEREMINDREQUEST_H_
