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

#ifndef ALIBABACLOUD_DDOSBGP_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
#define ALIBABACLOUD_DDOSBGP_MODEL_DESCRIBEINSTANCELISTREQUEST_H_

#include <alibabacloud/ddosbgp/DdosbgpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddosbgp {
namespace Model {
class ALIBABACLOUD_DDOSBGP_EXPORT DescribeInstanceListRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	DescribeInstanceListRequest();
	~DescribeInstanceListRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getIpVersion() const;
	void setIpVersion(const std::string &ipVersion);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getIp() const;
	void setIp(const std::string &ip);
	std::string getOrderby() const;
	void setOrderby(const std::string &orderby);
	std::string getInstanceIdList() const;
	void setInstanceIdList(const std::string &instanceIdList);
	int getPageNo() const;
	void setPageNo(int pageNo);
	std::string getOrderdire() const;
	void setOrderdire(const std::string &orderdire);
	std::vector<std::string> getInstanceTypeList() const;
	void setInstanceTypeList(const std::vector<std::string> &instanceTypeList);

private:
	std::string remark_;
	std::string resourceGroupId_;
	std::string sourceIp_;
	std::string regionId_;
	int pageSize_;
	std::string instanceType_;
	std::string ipVersion_;
	std::vector<Tag> tag_;
	std::string ip_;
	std::string orderby_;
	std::string instanceIdList_;
	int pageNo_;
	std::string orderdire_;
	std::vector<std::string> instanceTypeList_;
};
} // namespace Model
} // namespace Ddosbgp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSBGP_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
