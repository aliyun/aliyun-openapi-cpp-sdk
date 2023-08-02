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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstanceDiagnosisSummaryRequest : public RpcServiceRequest {
public:
	DescribeDBInstanceDiagnosisSummaryRequest();
	~DescribeDBInstanceDiagnosisSummaryRequest();
	std::string getStartStatus() const;
	void setStartStatus(const std::string &startStatus);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getSyncMode() const;
	void setSyncMode(const std::string &syncMode);
	std::string getRolePreferd() const;
	void setRolePreferd(const std::string &rolePreferd);

private:
	std::string startStatus_;
	int pageNumber_;
	std::string accessKeyId_;
	int pageSize_;
	std::string dBInstanceId_;
	std::string syncMode_;
	std::string rolePreferd_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYREQUEST_H_
