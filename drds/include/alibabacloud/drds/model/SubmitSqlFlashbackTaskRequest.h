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

#ifndef ALIBABACLOUD_DRDS_MODEL_SUBMITSQLFLASHBACKTASKREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_SUBMITSQLFLASHBACKTASKREQUEST_H_

#include <alibabacloud/drds/DrdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Drds {
namespace Model {
class ALIBABACLOUD_DRDS_EXPORT SubmitSqlFlashbackTaskRequest : public RpcServiceRequest {
public:
	SubmitSqlFlashbackTaskRequest();
	~SubmitSqlFlashbackTaskRequest();
	std::string getTraceId() const;
	void setTraceId(const std::string &traceId);
	std::string getSqlPk() const;
	void setSqlPk(const std::string &sqlPk);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getRecallRestoreType() const;
	void setRecallRestoreType(int recallRestoreType);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	std::string getSqlType() const;
	void setSqlType(const std::string &sqlType);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getDrdsInstanceId() const;
	void setDrdsInstanceId(const std::string &drdsInstanceId);
	int getRecallType() const;
	void setRecallType(int recallType);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);

private:
	std::string traceId_;
	std::string sqlPk_;
	std::string startTime_;
	std::string accessKeyId_;
	int recallRestoreType_;
	std::string tableName_;
	std::string sqlType_;
	std::string endTime_;
	std::string drdsInstanceId_;
	int recallType_;
	std::string dbName_;
};
} // namespace Model
} // namespace Drds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DRDS_MODEL_SUBMITSQLFLASHBACKTASKREQUEST_H_
