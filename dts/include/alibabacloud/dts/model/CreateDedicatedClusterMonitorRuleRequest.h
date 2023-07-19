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

#ifndef ALIBABACLOUD_DTS_MODEL_CREATEDEDICATEDCLUSTERMONITORRULEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CREATEDEDICATEDCLUSTERMONITORRULEREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT CreateDedicatedClusterMonitorRuleRequest : public RpcServiceRequest {
public:
	CreateDedicatedClusterMonitorRuleRequest();
	~CreateDedicatedClusterMonitorRuleRequest();
	long getCpuAlarmThreshold() const;
	void setCpuAlarmThreshold(long cpuAlarmThreshold);
	std::string getPhones() const;
	void setPhones(const std::string &phones);
	std::string getDedicatedClusterId() const;
	void setDedicatedClusterId(const std::string &dedicatedClusterId);
	long getDiskAlarmThreshold() const;
	void setDiskAlarmThreshold(long diskAlarmThreshold);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getMemAlarmThreshold() const;
	void setMemAlarmThreshold(long memAlarmThreshold);
	long getDuAlarmThreshold() const;
	void setDuAlarmThreshold(long duAlarmThreshold);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	long getNoticeSwitch() const;
	void setNoticeSwitch(long noticeSwitch);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	long cpuAlarmThreshold_;
	std::string phones_;
	std::string dedicatedClusterId_;
	long diskAlarmThreshold_;
	std::string regionId_;
	long memAlarmThreshold_;
	long duAlarmThreshold_;
	std::string ownerId_;
	long noticeSwitch_;
	std::string instanceId_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_CREATEDEDICATEDCLUSTERMONITORRULEREQUEST_H_
