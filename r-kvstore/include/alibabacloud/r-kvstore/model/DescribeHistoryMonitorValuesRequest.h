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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEHISTORYMONITORVALUESREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEHISTORYMONITORVALUESREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT DescribeHistoryMonitorValuesRequest : public RpcServiceRequest {
public:
	DescribeHistoryMonitorValuesRequest();
	~DescribeHistoryMonitorValuesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNodeRole() const;
	void setNodeRole(const std::string &nodeRole);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getReplicatorJobId() const;
	void setReplicatorJobId(const std::string &replicatorJobId);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getIntervalForHistory() const;
	void setIntervalForHistory(const std::string &intervalForHistory);
	std::string getNodeId() const;
	void setNodeId(const std::string &nodeId);
	std::string getAccessType() const;
	void setAccessType(const std::string &accessType);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getMonitorKeys() const;
	void setMonitorKeys(const std::string &monitorKeys);

private:
	long resourceOwnerId_;
	std::string nodeRole_;
	std::string startTime_;
	std::string accessKeyId_;
	std::string replicatorJobId_;
	std::string securityToken_;
	std::string intervalForHistory_;
	std::string nodeId_;
	std::string accessType_;
	std::string product_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string endTime_;
	long ownerId_;
	std::string instanceId_;
	std::string category_;
	std::string monitorKeys_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_DESCRIBEHISTORYMONITORVALUESREQUEST_H_
