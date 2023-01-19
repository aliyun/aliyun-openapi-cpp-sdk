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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeSnapshotsRequest : public RpcServiceRequest {
public:
	DescribeSnapshotsRequest();
	~DescribeSnapshotsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getStatusList() const;
	void setStatusList(const std::string &statusList);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getMachineRemark() const;
	void setMachineRemark(const std::string &machineRemark);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getApiVersion() const;
	void setApiVersion(const std::string &apiVersion);
	std::string getMachineRegion() const;
	void setMachineRegion(const std::string &machineRegion);
	std::string getIsAliYunEcs() const;
	void setIsAliYunEcs(const std::string &isAliYunEcs);

private:
	long resourceOwnerId_;
	std::string statusList_;
	std::string uuid_;
	std::string sourceIp_;
	std::string machineRemark_;
	std::string nextToken_;
	int pageSize_;
	int currentPage_;
	std::string apiVersion_;
	std::string machineRegion_;
	std::string isAliYunEcs_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
