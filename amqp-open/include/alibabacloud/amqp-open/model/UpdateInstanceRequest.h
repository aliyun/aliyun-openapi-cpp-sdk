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

#ifndef ALIBABACLOUD_AMQP_OPEN_MODEL_UPDATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_AMQP_OPEN_MODEL_UPDATEINSTANCEREQUEST_H_

#include <alibabacloud/amqp-open/Amqp_openExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Amqp_open {
namespace Model {
class ALIBABACLOUD_AMQP_OPEN_EXPORT UpdateInstanceRequest : public RpcServiceRequest {
public:
	UpdateInstanceRequest();
	~UpdateInstanceRequest();
	long getMaxPrivateTps() const;
	void setMaxPrivateTps(long maxPrivateTps);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	int getStorageSize() const;
	void setStorageSize(int storageSize);
	int getQueueCapacity() const;
	void setQueueCapacity(int queueCapacity);
	int getTracingStorageTime() const;
	void setTracingStorageTime(int tracingStorageTime);
	int getMaxConnections() const;
	void setMaxConnections(int maxConnections);
	bool getSupportTracing() const;
	void setSupportTracing(bool supportTracing);
	std::string getServerlessChargeType() const;
	void setServerlessChargeType(const std::string &serverlessChargeType);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getSupportEip() const;
	void setSupportEip(bool supportEip);
	std::string getModifyType() const;
	void setModifyType(const std::string &modifyType);
	long getMaxEipTps() const;
	void setMaxEipTps(long maxEipTps);

private:
	long maxPrivateTps_;
	std::string clientToken_;
	int storageSize_;
	int queueCapacity_;
	int tracingStorageTime_;
	int maxConnections_;
	bool supportTracing_;
	std::string serverlessChargeType_;
	std::string instanceType_;
	std::string instanceId_;
	bool supportEip_;
	std::string modifyType_;
	long maxEipTps_;
};
} // namespace Model
} // namespace Amqp_open
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMQP_OPEN_MODEL_UPDATEINSTANCEREQUEST_H_
