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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVIRTUALBORDERROUTERSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVIRTUALBORDERROUTERSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeVirtualBorderRoutersRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	struct Filter {
		std::string key;
	};
	DescribeVirtualBorderRoutersRequest();
	~DescribeVirtualBorderRoutersRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	bool getIncludeCrossAccountVbr() const;
	void setIncludeCrossAccountVbr(bool includeCrossAccountVbr);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);

private:
	long resourceOwnerId_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string regionId_;
	int pageSize_;
	bool includeCrossAccountVbr_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::vector<Tags> tags_;
	std::vector<Filter> filter_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVIRTUALBORDERROUTERSREQUEST_H_
