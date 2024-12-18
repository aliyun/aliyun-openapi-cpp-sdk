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

#ifndef ALIBABACLOUD_SELECTDB_MODEL_GETMODIFYBECLUSTERINQUIRYREQUEST_H_
#define ALIBABACLOUD_SELECTDB_MODEL_GETMODIFYBECLUSTERINQUIRYREQUEST_H_

#include <alibabacloud/selectdb/SelectdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Selectdb {
namespace Model {
class ALIBABACLOUD_SELECTDB_EXPORT GetModifyBEClusterInquiryRequest : public RpcServiceRequest {
public:
	GetModifyBEClusterInquiryRequest();
	~GetModifyBEClusterInquiryRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	long getCacheSize() const;
	void setCacheSize(long cacheSize);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPreCacheSize() const;
	void setPreCacheSize(long preCacheSize);
	long getComputeSize() const;
	void setComputeSize(long computeSize);
	std::string getDbInstanceId() const;
	void setDbInstanceId(const std::string &dbInstanceId);
	long getPreComputeSize() const;
	void setPreComputeSize(long preComputeSize);
	long getQuantity() const;
	void setQuantity(long quantity);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getPricingCycle() const;
	void setPricingCycle(const std::string &pricingCycle);

private:
	long resourceOwnerId_;
	long cacheSize_;
	std::string regionId_;
	long preCacheSize_;
	long computeSize_;
	std::string dbInstanceId_;
	long preComputeSize_;
	long quantity_;
	std::string clusterId_;
	std::string commodityCode_;
	std::string chargeType_;
	std::string pricingCycle_;
};
} // namespace Model
} // namespace Selectdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SELECTDB_MODEL_GETMODIFYBECLUSTERINQUIRYREQUEST_H_
