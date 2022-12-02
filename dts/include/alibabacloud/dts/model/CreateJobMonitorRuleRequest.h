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

#ifndef ALIBABACLOUD_DTS_MODEL_CREATEJOBMONITORRULEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CREATEJOBMONITORRULEREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT CreateJobMonitorRuleRequest : public RpcServiceRequest {
public:
	CreateJobMonitorRuleRequest();
	~CreateJobMonitorRuleRequest();
	std::string getType() const;
	void setType(const std::string &type);
	int getNoticeValue() const;
	void setNoticeValue(int noticeValue);
	int getTimes() const;
	void setTimes(int times);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	std::string getState() const;
	void setState(const std::string &state);
	int getPeriod() const;
	void setPeriod(int period);
	long getDelayRuleTime() const;
	void setDelayRuleTime(long delayRuleTime);
	std::string getPhone() const;
	void setPhone(const std::string &phone);

private:
	std::string type_;
	int noticeValue_;
	int times_;
	std::string regionId_;
	std::string dtsJobId_;
	std::string state_;
	int period_;
	long delayRuleTime_;
	std::string phone_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_CREATEJOBMONITORRULEREQUEST_H_
