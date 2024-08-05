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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTALERTSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTALERTSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListAlertsRequest : public RpcServiceRequest {
public:
	ListAlertsRequest();
	~ListAlertsRequest();
	std::string getSeverity() const;
	void setSeverity(const std::string &severity);
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getIntegrationType() const;
	void setIntegrationType(const std::string &integrationType);
	std::string getAlertName() const;
	void setAlertName(const std::string &alertName);
	bool getShowActivities() const;
	void setShowActivities(bool showActivities);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getDispatchRuleId() const;
	void setDispatchRuleId(long dispatchRuleId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	bool getShowEvents() const;
	void setShowEvents(bool showEvents);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getNotifyRobotName() const;
	void setNotifyRobotName(const std::string &notifyRobotName);
	long getSize() const;
	void setSize(long size);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getState() const;
	void setState(long state);
	long getPage() const;
	void setPage(long page);

private:
	std::string severity_;
	std::string owner_;
	std::string integrationType_;
	std::string alertName_;
	bool showActivities_;
	std::string endTime_;
	long dispatchRuleId_;
	std::string startTime_;
	bool showEvents_;
	std::string proxyUserId_;
	std::string notifyRobotName_;
	long size_;
	std::string regionId_;
	long state_;
	long page_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTALERTSREQUEST_H_
