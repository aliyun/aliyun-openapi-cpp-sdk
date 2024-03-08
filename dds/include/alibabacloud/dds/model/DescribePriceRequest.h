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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICEREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICEREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribePriceRequest : public RpcServiceRequest {
public:
	DescribePriceRequest();
	~DescribePriceRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getCouponNo() const;
	void setCouponNo(const std::string &couponNo);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getBusinessInfo() const;
	void setBusinessInfo(const std::string &businessInfo);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOrderParamOut() const;
	void setOrderParamOut(const std::string &orderParamOut);
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDBInstances() const;
	void setDBInstances(const std::string &dBInstances);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	long resourceOwnerId_;
	std::string productCode_;
	std::string couponNo_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	std::string businessInfo_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string orderParamOut_;
	std::string commodityCode_;
	long ownerId_;
	std::string dBInstances_;
	std::string orderType_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEPRICEREQUEST_H_
