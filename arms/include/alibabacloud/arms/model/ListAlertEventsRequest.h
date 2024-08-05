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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTALERTEVENTSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTALERTEVENTSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListAlertEventsRequest : public RpcServiceRequest {
public:
	ListAlertEventsRequest();
	~ListAlertEventsRequest();
	std::string getAlertName() const;
	void setAlertName(const std::string &alertName);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	long getSize() const;
	void setSize(long size);
	std::string getMatchingConditions() const;
	void setMatchingConditions(const std::string &matchingConditions);
	bool getShowNotificationPolicies() const;
	void setShowNotificationPolicies(bool showNotificationPolicies);
	long getPage() const;
	void setPage(long page);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string alertName_;
	std::string endTime_;
	std::string startTime_;
	std::string proxyUserId_;
	long size_;
	std::string matchingConditions_;
	bool showNotificationPolicies_;
	long page_;
	std::string status_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTALERTEVENTSREQUEST_H_
