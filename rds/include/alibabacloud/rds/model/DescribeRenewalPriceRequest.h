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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBERENEWALPRICEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBERENEWALPRICEREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DescribeRenewalPriceRequest : public RpcServiceRequest {
public:
	DescribeRenewalPriceRequest();
	~DescribeRenewalPriceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	int getQuantity() const;
	void setQuantity(int quantity);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getUsedTime() const;
	void setUsedTime(int usedTime);
	std::string getDBInstanceClass() const;
	void setDBInstanceClass(const std::string &dBInstanceClass);
	std::string getPromotionCode() const;
	void setPromotionCode(const std::string &promotionCode);
	std::string getTimeType() const;
	void setTimeType(const std::string &timeType);
	std::string getPayType() const;
	void setPayType(const std::string &payType);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string businessInfo_;
	int quantity_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string commodityCode_;
	long ownerId_;
	int usedTime_;
	std::string dBInstanceClass_;
	std::string promotionCode_;
	std::string timeType_;
	std::string payType_;
	std::string orderType_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBERENEWALPRICEREQUEST_H_
