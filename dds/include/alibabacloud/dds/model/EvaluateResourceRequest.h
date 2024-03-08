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

#ifndef ALIBABACLOUD_DDS_MODEL_EVALUATERESOURCEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_EVALUATERESOURCEREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT EvaluateResourceRequest : public RpcServiceRequest {
public:
	EvaluateResourceRequest();
	~EvaluateResourceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getReadonlyReplicas() const;
	void setReadonlyReplicas(const std::string &readonlyReplicas);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getStorage() const;
	void setStorage(const std::string &storage);
	std::string getShardsInfo() const;
	void setShardsInfo(const std::string &shardsInfo);
	std::string getReplicationFactor() const;
	void setReplicationFactor(const std::string &replicationFactor);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);

private:
	long resourceOwnerId_;
	std::string readonlyReplicas_;
	std::string engineVersion_;
	std::string storage_;
	std::string shardsInfo_;
	std::string replicationFactor_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string engine_;
	std::string dBInstanceId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string dBInstanceClass_;
	std::string zoneId_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_EVALUATERESOURCEREQUEST_H_
