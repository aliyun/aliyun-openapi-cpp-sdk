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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEPLANSREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEPLANSREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstancePlansRequest : public RpcServiceRequest {
public:
	DescribeDBInstancePlansRequest();
	~DescribeDBInstancePlansRequest();
	std::string getPlanType() const;
	void setPlanType(const std::string &planType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPlanCreateDate() const;
	void setPlanCreateDate(const std::string &planCreateDate);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getPlanDesc() const;
	void setPlanDesc(const std::string &planDesc);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPlanScheduleType() const;
	void setPlanScheduleType(const std::string &planScheduleType);
	std::string getPlanId() const;
	void setPlanId(const std::string &planId);

private:
	std::string planType_;
	std::string accessKeyId_;
	std::string planCreateDate_;
	std::string dBInstanceId_;
	std::string planDesc_;
	long ownerId_;
	std::string planScheduleType_;
	std::string planId_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEPLANSREQUEST_H_
