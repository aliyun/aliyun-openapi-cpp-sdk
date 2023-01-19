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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYCYCLETASKREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYCYCLETASKREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ModifyCycleTaskRequest : public RpcServiceRequest {
public:
	ModifyCycleTaskRequest();
	~ModifyCycleTaskRequest();
	long getFirstDateStr() const;
	void setFirstDateStr(long firstDateStr);
	std::string getTaskName() const;
	void setTaskName(const std::string &taskName);
	int getTargetStartTime() const;
	void setTargetStartTime(int targetStartTime);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getIntervalPeriod() const;
	void setIntervalPeriod(int intervalPeriod);
	std::string getParam() const;
	void setParam(const std::string &param);
	int getEnable() const;
	void setEnable(int enable);
	std::string getResourceDirectoryAccountId() const;
	void setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	int getTargetEndTime() const;
	void setTargetEndTime(int targetEndTime);
	std::string getPeriodUnit() const;
	void setPeriodUnit(const std::string &periodUnit);
	std::string getConfigId() const;
	void setConfigId(const std::string &configId);

private:
	long firstDateStr_;
	std::string taskName_;
	int targetStartTime_;
	std::string sourceIp_;
	int intervalPeriod_;
	std::string param_;
	int enable_;
	std::string resourceDirectoryAccountId_;
	std::string taskType_;
	int targetEndTime_;
	std::string periodUnit_;
	std::string configId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYCYCLETASKREQUEST_H_
