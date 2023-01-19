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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEONCETASKREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEONCETASKREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeOnceTaskRequest : public RpcServiceRequest {
public:
	DescribeOnceTaskRequest();
	~DescribeOnceTaskRequest();
	std::vector<std::string> getStatusList() const;
	void setStatusList(const std::vector<std::string> &statusList);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRootTaskId() const;
	void setRootTaskId(const std::string &rootTaskId);
	long getEndTimeQuery() const;
	void setEndTimeQuery(long endTimeQuery);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getFinish() const;
	void setFinish(int finish);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	long getStartTimeQuery() const;
	void setStartTimeQuery(long startTimeQuery);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getTargetQuery() const;
	void setTargetQuery(const std::string &targetQuery);

private:
	std::vector<std::string> statusList_;
	std::string source_;
	std::string sourceIp_;
	std::string rootTaskId_;
	long endTimeQuery_;
	int pageSize_;
	int finish_;
	std::string taskId_;
	std::string taskType_;
	long startTimeQuery_;
	int currentPage_;
	std::string targetQuery_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEONCETASKREQUEST_H_
