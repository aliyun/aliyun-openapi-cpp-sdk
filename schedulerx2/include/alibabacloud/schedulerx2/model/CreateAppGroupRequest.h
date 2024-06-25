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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEAPPGROUPREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEAPPGROUPREQUEST_H_

#include <alibabacloud/schedulerx2/Schedulerx2Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Schedulerx2 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX2_EXPORT CreateAppGroupRequest : public RpcServiceRequest {
public:
	CreateAppGroupRequest();
	~CreateAppGroupRequest();
	std::string getNamespaceName() const;
	void setNamespaceName(const std::string &namespaceName);
	std::string getNamespaceSource() const;
	void setNamespaceSource(const std::string &namespaceSource);
	bool getScheduleBusyWorkers() const;
	void setScheduleBusyWorkers(bool scheduleBusyWorkers);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAlarmJson() const;
	void setAlarmJson(const std::string &alarmJson);
	std::string getMonitorContactsJson() const;
	void setMonitorContactsJson(const std::string &monitorContactsJson);
	int getMaxJobs() const;
	void setMaxJobs(int maxJobs);
	std::string getMetricsThresholdJson() const;
	void setMetricsThresholdJson(const std::string &metricsThresholdJson);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	int getAppType() const;
	void setAppType(int appType);
	int getAppVersion() const;
	void setAppVersion(int appVersion);
	std::string getMonitorConfigJson() const;
	void setMonitorConfigJson(const std::string &monitorConfigJson);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getXattrs() const;
	void setXattrs(const std::string &xattrs);
	bool getEnableLog() const;
	void setEnableLog(bool enableLog);
	std::string getAppKey() const;
	void setAppKey(const std::string &appKey);

private:
	std::string namespaceName_;
	std::string namespaceSource_;
	bool scheduleBusyWorkers_;
	std::string description_;
	std::string appName_;
	std::string regionId_;
	std::string alarmJson_;
	std::string monitorContactsJson_;
	int maxJobs_;
	std::string metricsThresholdJson_;
	std::string groupId_;
	int appType_;
	int appVersion_;
	std::string monitorConfigJson_;
	std::string _namespace_;
	std::string xattrs_;
	bool enableLog_;
	std::string appKey_;
};
} // namespace Model
} // namespace Schedulerx2
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEAPPGROUPREQUEST_H_
