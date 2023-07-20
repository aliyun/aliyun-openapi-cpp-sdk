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

#ifndef ALIBABACLOUD_SAS_MODEL_LISTAGENTLESSTASKREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_LISTAGENTLESSTASKREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ListAgentlessTaskRequest : public RpcServiceRequest {
public:
	ListAgentlessTaskRequest();
	~ListAgentlessTaskRequest();
	std::string getInternetIp() const;
	void setInternetIp(const std::string &internetIp);
	int getTargetType() const;
	void setTargetType(int targetType);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getTargetName() const;
	void setTargetName(const std::string &targetName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRootTaskId() const;
	void setRootTaskId(const std::string &rootTaskId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getMachineName() const;
	void setMachineName(const std::string &machineName);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	long getEndTime() const;
	void setEndTime(long endTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	bool getRootTask() const;
	void setRootTask(bool rootTask);
	int getStatus() const;
	void setStatus(int status);
	std::string getIntranetIp() const;
	void setIntranetIp(const std::string &intranetIp);

private:
	std::string internetIp_;
	int targetType_;
	long startTime_;
	std::string uuid_;
	std::string targetName_;
	std::string sourceIp_;
	std::string rootTaskId_;
	int pageSize_;
	std::string machineName_;
	std::string lang_;
	std::string taskId_;
	long endTime_;
	int currentPage_;
	bool rootTask_;
	int status_;
	std::string intranetIp_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_LISTAGENTLESSTASKREQUEST_H_
