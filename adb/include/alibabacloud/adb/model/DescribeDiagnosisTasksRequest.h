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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISTASKSREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISTASKSREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT DescribeDiagnosisTasksRequest : public RpcServiceRequest {
public:
	DescribeDiagnosisTasksRequest();
	~DescribeDiagnosisTasksRequest();
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getProcessId() const;
	void setProcessId(const std::string &processId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getHost() const;
	void setHost(const std::string &host);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getStageId() const;
	void setStageId(const std::string &stageId);
	std::string getOrder() const;
	void setOrder(const std::string &order);

private:
	std::string dBClusterId_;
	int pageNumber_;
	std::string regionId_;
	std::string processId_;
	int pageSize_;
	std::string host_;
	std::string state_;
	std::string stageId_;
	std::string order_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEDIAGNOSISTASKSREQUEST_H_
