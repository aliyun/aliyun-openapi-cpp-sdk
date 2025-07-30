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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_MASTERNODESHUTDOWNFAILOVERREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_MASTERNODESHUTDOWNFAILOVERREQUEST_H_

#include <alibabacloud/r-kvstore/R_kvstoreExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace R_kvstore {
namespace Model {
class ALIBABACLOUD_R_KVSTORE_EXPORT MasterNodeShutDownFailOverRequest : public RpcServiceRequest {
public:
	MasterNodeShutDownFailOverRequest();
	~MasterNodeShutDownFailOverRequest();
	std::string getFailMode() const;
	void setFailMode(const std::string &failMode);
	std::string getProxyFaultMode() const;
	void setProxyFaultMode(const std::string &proxyFaultMode);
	std::string getProxyInstanceIds() const;
	void setProxyInstanceIds(const std::string &proxyInstanceIds);
	std::string getDBNodes() const;
	void setDBNodes(const std::string &dBNodes);
	std::string getDBFaultMode() const;
	void setDBFaultMode(const std::string &dBFaultMode);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCategory() const;
	void setCategory(const std::string &category);

private:
	std::string failMode_;
	std::string proxyFaultMode_;
	std::string proxyInstanceIds_;
	std::string dBNodes_;
	std::string dBFaultMode_;
	std::string instanceId_;
	std::string category_;
};
} // namespace Model
} // namespace R_kvstore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_MASTERNODESHUTDOWNFAILOVERREQUEST_H_
