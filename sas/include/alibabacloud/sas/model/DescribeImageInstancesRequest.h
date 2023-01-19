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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEINSTANCESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEINSTANCESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeImageInstancesRequest : public RpcServiceRequest {
public:
	DescribeImageInstancesRequest();
	~DescribeImageInstancesRequest();
	std::string getCriteria() const;
	void setCriteria(const std::string &criteria);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	bool getScanned() const;
	void setScanned(bool scanned);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLogicalExp() const;
	void setLogicalExp(const std::string &logicalExp);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);

private:
	std::string criteria_;
	std::string sourceIp_;
	bool scanned_;
	int pageSize_;
	std::string logicalExp_;
	int currentPage_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEINSTANCESREQUEST_H_
