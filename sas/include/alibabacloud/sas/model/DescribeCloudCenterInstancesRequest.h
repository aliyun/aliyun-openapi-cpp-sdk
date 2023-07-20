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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeCloudCenterInstancesRequest : public RpcServiceRequest {
public:
	DescribeCloudCenterInstancesRequest();
	~DescribeCloudCenterInstancesRequest();
	std::string getCriteria() const;
	void setCriteria(const std::string &criteria);
	int getImportance() const;
	void setImportance(int importance);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	bool getNoPage() const;
	void setNoPage(bool noPage);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLogicalExp() const;
	void setLogicalExp(const std::string &logicalExp);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getResourceDirectoryAccountId() const;
	void setResourceDirectoryAccountId(long resourceDirectoryAccountId);
	bool getUseNextToken() const;
	void setUseNextToken(bool useNextToken);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getMachineTypes() const;
	void setMachineTypes(const std::string &machineTypes);
	bool getNoGroupTrace() const;
	void setNoGroupTrace(bool noGroupTrace);

private:
	std::string criteria_;
	int importance_;
	std::string sourceIp_;
	std::string regionId_;
	bool noPage_;
	std::string nextToken_;
	int pageSize_;
	std::string logicalExp_;
	std::string lang_;
	long resourceDirectoryAccountId_;
	bool useNextToken_;
	int currentPage_;
	std::string machineTypes_;
	bool noGroupTrace_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBECLOUDCENTERINSTANCESREQUEST_H_
