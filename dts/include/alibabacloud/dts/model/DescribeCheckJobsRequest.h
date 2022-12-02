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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBECHECKJOBSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBECHECKJOBSREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribeCheckJobsRequest : public RpcServiceRequest {
public:
	DescribeCheckJobsRequest();
	~DescribeCheckJobsRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getCheckType() const;
	void setCheckType(int checkType);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getJobName() const;
	void setJobName(const std::string &jobName);

private:
	int pageNumber_;
	int checkType_;
	std::string instanceId_;
	int pageSize_;
	std::string jobName_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBECHECKJOBSREQUEST_H_
