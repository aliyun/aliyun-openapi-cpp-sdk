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

#ifndef ALIBABACLOUD_DDS_MODEL_CREATENODEBATCHREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_CREATENODEBATCHREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT CreateNodeBatchRequest : public RpcServiceRequest {
public:
	CreateNodeBatchRequest();
	~CreateNodeBatchRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getNodesInfo() const;
	void setNodesInfo(const std::string &nodesInfo);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	bool getShardDirect() const;
	void setShardDirect(bool shardDirect);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getFromApp() const;
	void setFromApp(const std::string &fromApp);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getAccountPassword() const;
	void setAccountPassword(const std::string &accountPassword);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string nodesInfo_;
	std::string couponNo_;
	std::string accessKeyId_;
	bool shardDirect_;
	std::string accountName_;
	std::string dBInstanceId_;
	std::string businessInfo_;
	bool autoPay_;
	std::string fromApp_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string accountPassword_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_CREATENODEBATCHREQUEST_H_
