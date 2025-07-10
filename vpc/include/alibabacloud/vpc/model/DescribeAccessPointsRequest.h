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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEACCESSPOINTSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEACCESSPOINTSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT DescribeAccessPointsRequest : public RpcServiceRequest {
public:
	struct Filter {
		std::string key;
	};
	DescribeAccessPointsRequest();
	~DescribeAccessPointsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<Filter> getFilter() const;
	void setFilter(const std::vector<Filter> &filter);
	std::string getHostOperator() const;
	void setHostOperator(const std::string &hostOperator);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);

private:
	long resourceOwnerId_;
	std::string type_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::vector<Filter> filter_;
	std::string hostOperator_;
	std::string name_;
	std::string acceptLanguage_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEACCESSPOINTSREQUEST_H_
