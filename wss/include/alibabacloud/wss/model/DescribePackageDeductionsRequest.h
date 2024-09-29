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

#ifndef ALIBABACLOUD_WSS_MODEL_DESCRIBEPACKAGEDEDUCTIONSREQUEST_H_
#define ALIBABACLOUD_WSS_MODEL_DESCRIBEPACKAGEDEDUCTIONSREQUEST_H_

#include <alibabacloud/wss/WssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Wss {
namespace Model {
class ALIBABACLOUD_WSS_EXPORT DescribePackageDeductionsRequest : public RpcServiceRequest {
public:
	DescribePackageDeductionsRequest();
	~DescribePackageDeductionsRequest();
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::vector<std::string> getPackageIds() const;
	void setPackageIds(const std::vector<std::string> &packageIds);
	std::vector<std::string> getInstanceIds() const;
	void setInstanceIds(const std::vector<std::string> &instanceIds);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	int pageNum_;
	std::string resourceType_;
	std::vector<std::string> packageIds_;
	std::vector<std::string> instanceIds_;
	int pageSize_;
};
} // namespace Model
} // namespace Wss
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WSS_MODEL_DESCRIBEPACKAGEDEDUCTIONSREQUEST_H_
