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

#ifndef ALIBABACLOUD_SCHEDULERX3_MODEL_LISTSCHEDULETIMESREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX3_MODEL_LISTSCHEDULETIMESREQUEST_H_

#include <alibabacloud/schedulerx3/SchedulerX3Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace SchedulerX3 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX3_EXPORT ListScheduleTimesRequest : public RpcServiceRequest {
public:
	ListScheduleTimesRequest();
	~ListScheduleTimesRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	std::string getTimeZone() const;
	void setTimeZone(const std::string &timeZone);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getCalendar() const;
	void setCalendar(const std::string &calendar);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getTimeExpression() const;
	void setTimeExpression(const std::string &timeExpression);
	int getTimeType() const;
	void setTimeType(int timeType);

private:
	std::string mseSessionId_;
	std::string timeZone_;
	std::string appName_;
	std::string calendar_;
	std::string clusterId_;
	std::string timeExpression_;
	int timeType_;
};
} // namespace Model
} // namespace SchedulerX3
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX3_MODEL_LISTSCHEDULETIMESREQUEST_H_
