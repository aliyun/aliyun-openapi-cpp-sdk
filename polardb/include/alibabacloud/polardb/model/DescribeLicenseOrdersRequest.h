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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBELICENSEORDERSREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBELICENSEORDERSREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT DescribeLicenseOrdersRequest : public RpcServiceRequest {
public:
	DescribeLicenseOrdersRequest();
	~DescribeLicenseOrdersRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getVirtualOrder() const;
	void setVirtualOrder(bool virtualOrder);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAliyunOrderId() const;
	void setAliyunOrderId(const std::string &aliyunOrderId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getPurchaseChannel() const;
	void setPurchaseChannel(const std::string &purchaseChannel);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPackageType() const;
	void setPackageType(const std::string &packageType);

private:
	long resourceOwnerId_;
	bool virtualOrder_;
	int pageNumber_;
	std::string accessKeyId_;
	int pageSize_;
	std::string aliyunOrderId_;
	std::string resourceOwnerAccount_;
	std::string purchaseChannel_;
	std::string ownerAccount_;
	long ownerId_;
	std::string packageType_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBELICENSEORDERSREQUEST_H_
