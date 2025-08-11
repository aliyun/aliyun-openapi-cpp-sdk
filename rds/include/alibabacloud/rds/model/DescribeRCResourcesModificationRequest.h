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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERCRESOURCESMODIFICATIONREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERCRESOURCESMODIFICATIONREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRCResourcesModificationRequest : public RpcServiceRequest {
public:
	DescribeRCResourcesModificationRequest();
	~DescribeRCResourcesModificationRequest();
	float getMemory() const;
	void setMemory(float memory);
	int getCores() const;
	void setCores(int cores);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getOperationType() const;
	void setOperationType(const std::string &operationType);
	std::string getDestinationResource() const;
	void setDestinationResource(const std::string &destinationResource);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getZoneId() const;
	void setZoneId(const std::string &zoneId);
	std::vector<std::string> getConditionss() const;
	void setConditionss(const std::vector<std::string> &conditionss);

private:
	float memory_;
	int cores_;
	std::string regionId_;
	std::string instanceType_;
	std::string operationType_;
	std::string destinationResource_;
	std::string instanceId_;
	std::string zoneId_;
	std::vector<std::string> conditionss_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERCRESOURCESMODIFICATIONREQUEST_H_
