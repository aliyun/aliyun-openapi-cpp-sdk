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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEWAITINGSQLRECORDSREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEWAITINGSQLRECORDSREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT DescribeWaitingSQLRecordsRequest : public RpcServiceRequest {
public:
	DescribeWaitingSQLRecordsRequest();
	~DescribeWaitingSQLRecordsRequest();
	std::string getQueryCondition() const;
	void setQueryCondition(const std::string &queryCondition);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDatabase() const;
	void setDatabase(const std::string &database);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getUser() const;
	void setUser(const std::string &user);

private:
	std::string queryCondition_;
	std::string startTime_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string database_;
	int pageSize_;
	std::string dBInstanceId_;
	std::string keyword_;
	std::string order_;
	std::string endTime_;
	std::string user_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEWAITINGSQLRECORDSREQUEST_H_
