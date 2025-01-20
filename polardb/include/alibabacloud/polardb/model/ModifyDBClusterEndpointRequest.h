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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERENDPOINTREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERENDPOINTREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyDBClusterEndpointRequest : public RpcServiceRequest {
public:
	ModifyDBClusterEndpointRequest();
	~ModifyDBClusterEndpointRequest();
	std::string getAutoAddNewNodes() const;
	void setAutoAddNewNodes(const std::string &autoAddNewNodes);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getDBEndpointId() const;
	void setDBEndpointId(const std::string &dBEndpointId);
	std::string getPolarSccWaitTimeout() const;
	void setPolarSccWaitTimeout(const std::string &polarSccWaitTimeout);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getReadWriteMode() const;
	void setReadWriteMode(const std::string &readWriteMode);
	std::string getPolarSccTimeoutAction() const;
	void setPolarSccTimeoutAction(const std::string &polarSccTimeoutAction);
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
	std::string getNodes() const;
	void setNodes(const std::string &nodes);
	std::string getSccMode() const;
	void setSccMode(const std::string &sccMode);

private:
	std::string autoAddNewNodes_;
	long resourceOwnerId_;
	std::string dBEndpointId_;
	std::string polarSccWaitTimeout_;
	std::string accessKeyId_;
	std::string readWriteMode_;
	std::string polarSccTimeoutAction_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string endpointConfig_;
	std::string dBEndpointDescription_;
	long ownerId_;
	std::string nodes_;
	std::string sccMode_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYDBCLUSTERENDPOINTREQUEST_H_
