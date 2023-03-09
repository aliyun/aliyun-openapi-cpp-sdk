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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEAUDITLOGRECORDSREQUEST_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEAUDITLOGRECORDSREQUEST_H_

#include <alibabacloud/adb/AdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Adb {
namespace Model {
class ALIBABACLOUD_ADB_EXPORT DescribeAuditLogRecordsRequest : public RpcServiceRequest {
public:
	DescribeAuditLogRecordsRequest();
	~DescribeAuditLogRecordsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getHostAddress() const;
	void setHostAddress(const std::string &hostAddress);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::string getSqlType() const;
	void setSqlType(const std::string &sqlType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getQueryKeyword() const;
	void setQueryKeyword(const std::string &queryKeyword);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);
	std::string getSucceed() const;
	void setSucceed(const std::string &succeed);
	std::string getUser() const;
	void setUser(const std::string &user);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long resourceOwnerId_;
	std::string startTime_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string hostAddress_;
	std::string regionId_;
	int pageSize_;
	std::string order_;
	std::string sqlType_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string queryKeyword_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::string dBName_;
	std::string succeed_;
	std::string user_;
	std::string orderType_;
};
} // namespace Model
} // namespace Adb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEAUDITLOGRECORDSREQUEST_H_
