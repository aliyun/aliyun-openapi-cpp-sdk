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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribePreCheckStatusRequest : public RpcServiceRequest {
public:
	DescribePreCheckStatusRequest();
	~DescribePreCheckStatusRequest();
	std::string getStructType() const;
	void setStructType(const std::string &structType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getDtsJobId() const;
	void setDtsJobId(const std::string &dtsJobId);
	std::string getPageNo() const;
	void setPageNo(const std::string &pageNo);
	std::string getJobCode() const;
	void setJobCode(const std::string &jobCode);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getStructPhase() const;
	void setStructPhase(const std::string &structPhase);

private:
	std::string structType_;
	std::string regionId_;
	std::string pageSize_;
	std::string dtsJobId_;
	std::string pageNo_;
	std::string jobCode_;
	std::string name_;
	std::string structPhase_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBEPRECHECKSTATUSREQUEST_H_
