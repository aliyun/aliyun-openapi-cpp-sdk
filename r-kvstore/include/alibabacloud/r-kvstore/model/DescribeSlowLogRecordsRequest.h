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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBESLOWLOGRECORDSREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBESLOWLOGRECORDSREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeSlowLogRecordsRequest : public RpcServiceRequest {
public:
	DescribeSlowLogRecordsRequest();
	~DescribeSlowLogRecordsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNodeId() const;
	void setNodeId(const std::string &nodeId);
	long getSQLId() const;
	void setSQLId(long sQLId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getQueryKeyword() const;
	void setQueryKeyword(const std::string &queryKeyword);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSlowLogRecordType() const;
	void setSlowLogRecordType(const std::string &slowLogRecordType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDBName() const;
	void setDBName(const std::string &dBName);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long resourceOwnerId_;
	std::string startTime_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string securityToken_;
	int pageSize_;
	std::string nodeId_;
	long sQLId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string queryKeyword_;
	std::string endTime_;
	std::string orderBy_;
	long ownerId_;
	std::string slowLogRecordType_;
	std::string instanceId_;
	std::string dBName_;
	std::string orderType_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBESLOWLOGRECORDSREQUEST_H_
