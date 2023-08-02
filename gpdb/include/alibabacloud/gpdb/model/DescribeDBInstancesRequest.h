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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <alibabacloud/gpdb/GpdbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Gpdb {
namespace Model {
class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstancesRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeDBInstancesRequest();
	~DescribeDBInstancesRequest();
	std::vector<std::string> getDBInstanceModes() const;
	void setDBInstanceModes(const std::vector<std::string> &dBInstanceModes);
	std::vector<std::string> getDBInstanceStatuses() const;
	void setDBInstanceStatuses(const std::vector<std::string> &dBInstanceStatuses);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDBInstanceDescription() const;
	void setDBInstanceDescription(const std::string &dBInstanceDescription);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getDBInstanceIds() const;
	void setDBInstanceIds(const std::string &dBInstanceIds);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<std::string> getDBInstanceCategories() const;
	void setDBInstanceCategories(const std::vector<std::string> &dBInstanceCategories);
	std::vector<std::string> getInstanceDeployTypes() const;
	void setInstanceDeployTypes(const std::vector<std::string> &instanceDeployTypes);
	std::string getInstanceNetworkType() const;
	void setInstanceNetworkType(const std::string &instanceNetworkType);

private:
	std::vector<std::string> dBInstanceModes_;
	std::vector<std::string> dBInstanceStatuses_;
	int pageNumber_;
	std::string accessKeyId_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	std::string dBInstanceDescription_;
	std::vector<Tag> tag_;
	std::string dBInstanceIds_;
	long ownerId_;
	std::vector<std::string> dBInstanceCategories_;
	std::vector<std::string> instanceDeployTypes_;
	std::string instanceNetworkType_;
};
} // namespace Model
} // namespace Gpdb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
