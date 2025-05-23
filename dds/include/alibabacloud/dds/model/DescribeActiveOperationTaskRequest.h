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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEACTIVEOPERATIONTASKREQUEST_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEACTIVEOPERATIONTASKREQUEST_H_

#include <alibabacloud/dds/DdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dds {
namespace Model {
class ALIBABACLOUD_DDS_EXPORT DescribeActiveOperationTaskRequest : public RpcServiceRequest {
public:
	DescribeActiveOperationTaskRequest();
	~DescribeActiveOperationTaskRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getProductId() const;
	void setProductId(const std::string &productId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	int getIsHistory() const;
	void setIsHistory(int isHistory);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTaskType() const;
	void setTaskType(const std::string &taskType);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	long resourceOwnerId_;
	std::string productId_;
	int pageNumber_;
	std::string accessKeyId_;
	int isHistory_;
	int pageSize_;
	std::string taskType_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string region_;
};
} // namespace Model
} // namespace Dds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEACTIVEOPERATIONTASKREQUEST_H_
