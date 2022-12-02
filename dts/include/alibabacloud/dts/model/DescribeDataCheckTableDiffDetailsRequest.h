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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEDATACHECKTABLEDIFFDETAILSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEDATACHECKTABLEDIFFDETAILSREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribeDataCheckTableDiffDetailsRequest : public RpcServiceRequest {
public:
	DescribeDataCheckTableDiffDetailsRequest();
	~DescribeDataCheckTableDiffDetailsRequest();
	std::string getJobStepId() const;
	void setJobStepId(const std::string &jobStepId);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getTbName() const;
	void setTbName(const std::string &tbName);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);

private:
	std::string jobStepId_;
	long pageNumber_;
	long pageSize_;
	std::string tbName_;
	std::string dbName_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEDATACHECKTABLEDIFFDETAILSREQUEST_H_
