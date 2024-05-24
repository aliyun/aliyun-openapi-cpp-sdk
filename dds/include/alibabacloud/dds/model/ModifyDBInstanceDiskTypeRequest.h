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

#ifndef ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCEDISKTYPEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCEDISKTYPEREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT ModifyDBInstanceDiskTypeRequest : public RpcServiceRequest {
public:
	ModifyDBInstanceDiskTypeRequest();
	~ModifyDBInstanceDiskTypeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getExtraParam() const;
	void setExtraParam(const std::string &extraParam);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getDbInstanceStorageType() const;
	void setDbInstanceStorageType(const std::string &dbInstanceStorageType);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	long getProvisionedIops() const;
	void setProvisionedIops(long provisionedIops);
	std::string getAutoRenew() const;
	void setAutoRenew(const std::string &autoRenew);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long resourceOwnerId_;
	std::string extraParam_;
	std::string couponNo_;
	std::string accessKeyId_;
	std::string dBInstanceId_;
	std::string dbInstanceStorageType_;
	std::string businessInfo_;
	bool autoPay_;
	long provisionedIops_;
	std::string autoRenew_;
	std::string orderType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_MODIFYDBINSTANCEDISKTYPEREQUEST_H_
