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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYCRONDETAILREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYCRONDETAILREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribePropertyCronDetailRequest : public RpcServiceRequest {
public:
	DescribePropertyCronDetailRequest();
	~DescribePropertyCronDetailRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getExtend() const;
	void setExtend(const std::string &extend);
	std::string getUser() const;
	void setUser(const std::string &user);

private:
	std::string remark_;
	std::string source_;
	std::string uuid_;
	std::string sourceIp_;
	int pageSize_;
	int currentPage_;
	std::string extend_;
	std::string user_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYCRONDETAILREQUEST_H_
