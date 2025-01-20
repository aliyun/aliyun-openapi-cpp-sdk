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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERENDPOINTREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERENDPOINTREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateDBClusterEndpointRequest : public RpcServiceRequest {
public:
	CreateDBClusterEndpointRequest();
	~CreateDBClusterEndpointRequest();
	std::string getAutoAddNewNodes() const;
	void setAutoAddNewNodes(const std::string &autoAddNewNodes);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getPolarSccWaitTimeout() const;
	void setPolarSccWaitTimeout(const std::string &polarSccWaitTimeout);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getReadWriteMode() const;
	void setReadWriteMode(const std::string &readWriteMode);
	std::string getEndpointType() const;
	void setEndpointType(const std::string &endpointType);
	std::string getPolarSccTimeoutAction() const;
	void setPolarSccTimeoutAction(const std::string &polarSccTimeoutAction);
	std::string getEndpointSubCluster() const;
	void setEndpointSubCluster(const std::string &endpointSubCluster);
	std::string getStandbyVSwitchId() const;
	void setStandbyVSwitchId(const std::string &standbyVSwitchId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getEndpointConfig() const;
	void setEndpointConfig(const std::string &endpointConfig);
	std::string getDBEndpointDescription() const;
	void setDBEndpointDescription(const std::string &dBEndpointDescription);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getVSwitchId() const;
	void setVSwitchId(const std::string &vSwitchId);
	std::string getNodes() const;
	void setNodes(const std::string &nodes);
	std::string getSccMode() const;
	void setSccMode(const std::string &sccMode);
	std::string getVPCId() const;
	void setVPCId(const std::string &vPCId);

private:
	std::string autoAddNewNodes_;
	long resourceOwnerId_;
	std::string clientToken_;
	std::string polarSccWaitTimeout_;
	std::string accessKeyId_;
	std::string readWriteMode_;
	std::string endpointType_;
	std::string polarSccTimeoutAction_;
	std::string endpointSubCluster_;
	std::string standbyVSwitchId_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string endpointConfig_;
	std::string dBEndpointDescription_;
	long ownerId_;
	std::string vSwitchId_;
	std::string nodes_;
	std::string sccMode_;
	std::string vPCId_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEDBCLUSTERENDPOINTREQUEST_H_
