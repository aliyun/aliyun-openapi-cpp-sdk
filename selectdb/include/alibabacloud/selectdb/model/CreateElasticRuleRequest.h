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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_CREATEELASTICRULEREQUEST_H_
#define ALIBABACLOUD_SELECTDB_MODEL_CREATEELASTICRULEREQUEST_H_

#include <alibabacloud/selectdb/SelectdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Selectdb {
namespace Model {
class ALIBABACLOUD_SELECTDB_EXPORT CreateElasticRuleRequest : public RpcServiceRequest {
public:
	CreateElasticRuleRequest();
	~CreateElasticRuleRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getExecutionPeriod() const;
	void setExecutionPeriod(const std::string &executionPeriod);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getElasticRuleStartTime() const;
	void setElasticRuleStartTime(const std::string &elasticRuleStartTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getClusterClass() const;
	void setClusterClass(const std::string &clusterClass);
	std::string getDbInstanceId() const;
	void setDbInstanceId(const std::string &dbInstanceId);

private:
	long resourceOwnerId_;
	std::string executionPeriod_;
	std::string clusterId_;
	std::string elasticRuleStartTime_;
	std::string regionId_;
	std::string clusterClass_;
	std::string dbInstanceId_;
};
} // namespace Model
} // namespace Selectdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SELECTDB_MODEL_CREATEELASTICRULEREQUEST_H_
