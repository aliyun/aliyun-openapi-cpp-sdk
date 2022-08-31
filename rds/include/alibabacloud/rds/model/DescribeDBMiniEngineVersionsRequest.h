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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBMINIENGINEVERSIONSREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBMINIENGINEVERSIONSREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeDBMiniEngineVersionsRequest : public RpcServiceRequest {
public:
	DescribeDBMiniEngineVersionsRequest();
	~DescribeDBMiniEngineVersionsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getNodeType() const;
	void setNodeType(const std::string &nodeType);
	std::string getEngineVersion() const;
	void setEngineVersion(const std::string &engineVersion);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getMinorVersionTag() const;
	void setMinorVersionTag(const std::string &minorVersionTag);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDedicatedHostGroupId() const;
	void setDedicatedHostGroupId(const std::string &dedicatedHostGroupId);

private:
	long resourceOwnerId_;
	std::string nodeType_;
	std::string engineVersion_;
	std::string storageType_;
	std::string minorVersionTag_;
	std::string engine_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string dedicatedHostGroupId_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBMINIENGINEVERSIONSREQUEST_H_
