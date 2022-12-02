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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEOFFLINEMACHINESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEOFFLINEMACHINESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeOfflineMachinesRequest : public RpcServiceRequest {
public:
	DescribeOfflineMachinesRequest();
	~DescribeOfflineMachinesRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getVendor() const;
	void setVendor(int vendor);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOs() const;
	void setOs(const std::string &os);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getRegionNo() const;
	void setRegionNo(const std::string &regionNo);
	std::string getRegionIdStr() const;
	void setRegionIdStr(const std::string &regionIdStr);

private:
	std::string remark_;
	std::string sourceIp_;
	int vendor_;
	int pageSize_;
	std::string os_;
	int currentPage_;
	std::string regionNo_;
	std::string regionIdStr_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEOFFLINEMACHINESREQUEST_H_
