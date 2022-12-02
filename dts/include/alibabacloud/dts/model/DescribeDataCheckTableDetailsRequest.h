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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDATACHECKTABLEDETAILSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDATACHECKTABLEDETAILSREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribeDataCheckTableDetailsRequest : public RpcServiceRequest {
public:
	DescribeDataCheckTableDetailsRequest();
	~DescribeDataCheckTableDetailsRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getJobStepId() const;
	void setJobStepId(const std::string &jobStepId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	int pageNumber_;
	std::string jobStepId_;
	int pageSize_;
	std::string tableName_;
	std::string status_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDATACHECKTABLEDETAILSREQUEST_H_
