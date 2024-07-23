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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYCUSTINSRESOURCEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYCUSTINSRESOURCEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT ModifyCustinsResourceRequest : public RpcServiceRequest {
public:
	ModifyCustinsResourceRequest();
	~ModifyCustinsResourceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getIncreaseRatio() const;
	void setIncreaseRatio(const std::string &increaseRatio);
	std::string getRestoreOriginalSpecification() const;
	void setRestoreOriginalSpecification(const std::string &restoreOriginalSpecification);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getAdjustDeadline() const;
	void setAdjustDeadline(const std::string &adjustDeadline);
	int getTargetValue() const;
	void setTargetValue(int targetValue);

private:
	long resourceOwnerId_;
	std::string increaseRatio_;
	std::string restoreOriginalSpecification_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string resourceType_;
	std::string adjustDeadline_;
	int targetValue_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYCUSTINSRESOURCEREQUEST_H_
