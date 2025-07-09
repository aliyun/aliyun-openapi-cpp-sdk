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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLAUDITSTATREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLAUDITSTATREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeSqlAuditStatRequest : public RpcServiceRequest {
public:
	DescribeSqlAuditStatRequest();
	~DescribeSqlAuditStatRequest();
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getOperatorType() const;
	void setOperatorType(const std::string &operatorType);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getTenantId() const;
	void setTenantId(const std::string &tenantId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);

private:
	std::string startTime_;
	std::string operatorType_;
	int pageNumber_;
	std::string tenantId_;
	int pageSize_;
	std::string endTime_;
	std::string instanceId_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBESQLAUDITSTATREQUEST_H_
