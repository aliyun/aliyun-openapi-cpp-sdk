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

#ifndef ALIBABACLOUD_GPDB_MODEL_UPDATEDBINSTANCEPLANREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_UPDATEDBINSTANCEPLANREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT UpdateDBInstancePlanRequest : public RpcServiceRequest {
public:
	UpdateDBInstancePlanRequest();
	~UpdateDBInstancePlanRequest();
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPlanStartDate() const;
	void setPlanStartDate(const std::string &planStartDate);
	std::string getPlanConfig() const;
	void setPlanConfig(const std::string &planConfig);
	std::string getPlanName() const;
	void setPlanName(const std::string &planName);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getPlanDesc() const;
	void setPlanDesc(const std::string &planDesc);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPlanEndDate() const;
	void setPlanEndDate(const std::string &planEndDate);
	std::string getPlanId() const;
	void setPlanId(const std::string &planId);

private:
	std::string accessKeyId_;
	std::string planStartDate_;
	std::string planConfig_;
	std::string planName_;
	std::string dBInstanceId_;
	std::string planDesc_;
	long ownerId_;
	std::string planEndDate_;
	std::string planId_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_UPDATEDBINSTANCEPLANREQUEST_H_
