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

#ifndef ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT DescribeFileSystemsRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeFileSystemsRequest();
	~DescribeFileSystemsRequest();
	bool getUseUTCDateTime() const;
	void setUseUTCDateTime(bool useUTCDateTime);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getOrderByField() const;
	void setOrderByField(const std::string &orderByField);
	std::string getFileSystemType() const;
	void setFileSystemType(const std::string &fileSystemType);
	std::string getPackageIds() const;
	void setPackageIds(const std::string &packageIds);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getFileSystemIds() const;
	void setFileSystemIds(const std::string &fileSystemIds);

private:
	bool useUTCDateTime_;
	std::string description_;
	std::string orderByField_;
	std::string fileSystemType_;
	std::string packageIds_;
	int pageNumber_;
	std::string storageType_;
	std::string resourceGroupId_;
	int pageSize_;
	std::string sortOrder_;
	std::vector<Tag> tag_;
	std::string fileSystemId_;
	std::string vpcId_;
	std::string chargeType_;
	std::string fileSystemIds_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_DESCRIBEFILESYSTEMSREQUEST_H_
