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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYPORTDETAILREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYPORTDETAILREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribePropertyPortDetailRequest : public RpcServiceRequest {
public:
	DescribePropertyPortDetailRequest();
	~DescribePropertyPortDetailRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getBindIp() const;
	void setBindIp(const std::string &bindIp);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getExtend() const;
	void setExtend(const std::string &extend);
	std::string getPort() const;
	void setPort(const std::string &port);
	std::string getProcName() const;
	void setProcName(const std::string &procName);

private:
	std::string remark_;
	std::string uuid_;
	std::string bindIp_;
	std::string sourceIp_;
	int pageSize_;
	int currentPage_;
	std::string extend_;
	std::string port_;
	std::string procName_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYPORTDETAILREQUEST_H_
