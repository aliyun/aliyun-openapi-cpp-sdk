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

#ifndef ALIBABACLOUD_POLARDB_MODEL_MODIFYDBNODECLASSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_MODIFYDBNODECLASSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT ModifyDBNodeClassRequest : public RpcServiceRequest {
public:
	ModifyDBNodeClassRequest();
	~ModifyDBNodeClassRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getPlannedEndTime() const;
	void setPlannedEndTime(const std::string &plannedEndTime);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDBNodeType() const;
	void setDBNodeType(const std::string &dBNodeType);
	std::string getDBNodeTargetClass() const;
	void setDBNodeTargetClass(const std::string &dBNodeTargetClass);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getDBClusterId() const;
	void setDBClusterId(const std::string &dBClusterId);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getPlannedFlashingOffTime() const;
	void setPlannedFlashingOffTime(const std::string &plannedFlashingOffTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPlannedStartTime() const;
	void setPlannedStartTime(const std::string &plannedStartTime);
	std::string getModifyType() const;
	void setModifyType(const std::string &modifyType);
	std::string getSubCategory() const;
	void setSubCategory(const std::string &subCategory);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string plannedEndTime_;
	std::string accessKeyId_;
	std::string dBNodeType_;
	std::string dBNodeTargetClass_;
	std::string resourceOwnerAccount_;
	std::string dBClusterId_;
	std::string ownerAccount_;
	std::string plannedFlashingOffTime_;
	long ownerId_;
	std::string plannedStartTime_;
	std::string modifyType_;
	std::string subCategory_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_MODIFYDBNODECLASSREQUEST_H_
