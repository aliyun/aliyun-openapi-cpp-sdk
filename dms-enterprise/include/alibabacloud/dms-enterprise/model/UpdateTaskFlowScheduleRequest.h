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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_UPDATETASKFLOWSCHEDULEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_UPDATETASKFLOWSCHEDULEREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT UpdateTaskFlowScheduleRequest : public RpcServiceRequest {
public:
	UpdateTaskFlowScheduleRequest();
	~UpdateTaskFlowScheduleRequest();
	std::string getCronType() const;
	void setCronType(const std::string &cronType);
	std::string getCronStr() const;
	void setCronStr(const std::string &cronStr);
	std::string getTriggerType() const;
	void setTriggerType(const std::string &triggerType);
	long getDagId() const;
	void setDagId(long dagId);
	long getTid() const;
	void setTid(long tid);
	std::string getTimeZoneId() const;
	void setTimeZoneId(const std::string &timeZoneId);
	std::string getCronBeginDate() const;
	void setCronBeginDate(const std::string &cronBeginDate);
	bool getScheduleSwitch() const;
	void setScheduleSwitch(bool scheduleSwitch);
	std::string getCronEndDate() const;
	void setCronEndDate(const std::string &cronEndDate);
	std::string getScheduleParam() const;
	void setScheduleParam(const std::string &scheduleParam);

private:
	std::string cronType_;
	std::string cronStr_;
	std::string triggerType_;
	long dagId_;
	long tid_;
	std::string timeZoneId_;
	std::string cronBeginDate_;
	bool scheduleSwitch_;
	std::string cronEndDate_;
	std::string scheduleParam_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_UPDATETASKFLOWSCHEDULEREQUEST_H_
