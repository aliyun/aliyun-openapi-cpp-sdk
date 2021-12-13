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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGCOUNTREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGCOUNTREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT DescribeSQLLogCountRequest : public RpcServiceRequest {
public:
	DescribeSQLLogCountRequest();
	~DescribeSQLLogCountRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getQueryKeywords() const;
	void setQueryKeywords(const std::string &queryKeywords);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDatabase() const;
	void setDatabase(const std::string &database);
	std::string getSourceIP() const;
	void setSourceIP(const std::string &sourceIP);
	std::string getMinExecuteCost() const;
	void setMinExecuteCost(const std::string &minExecuteCost);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getMaxExecuteCost() const;
	void setMaxExecuteCost(const std::string &maxExecuteCost);
	std::string getExecuteCost() const;
	void setExecuteCost(const std::string &executeCost);
	std::string getExecuteState() const;
	void setExecuteState(const std::string &executeState);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getOperationType() const;
	void setOperationType(const std::string &operationType);
	std::string getOperationClass() const;
	void setOperationClass(const std::string &operationClass);
	std::string getUser() const;
	void setUser(const std::string &user);

private:
	std::string startTime_;
	std::string queryKeywords_;
	std::string accessKeyId_;
	std::string database_;
	std::string sourceIP_;
	std::string minExecuteCost_;
	std::string dBInstanceId_;
	std::string maxExecuteCost_;
	std::string executeCost_;
	std::string executeState_;
	std::string endTime_;
	std::string operationType_;
	std::string operationClass_;
	std::string user_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBESQLLOGCOUNTREQUEST_H_
