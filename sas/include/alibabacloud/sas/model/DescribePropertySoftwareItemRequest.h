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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYSOFTWAREITEMREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYSOFTWAREITEMREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribePropertySoftwareItemRequest : public RpcServiceRequest {
public:
	DescribePropertySoftwareItemRequest();
	~DescribePropertySoftwareItemRequest();
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	bool getForceFlush() const;
	void setForceFlush(bool forceFlush);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getName() const;
	void setName(const std::string &name);

private:
	std::string sourceIp_;
	int pageSize_;
	bool forceFlush_;
	int currentPage_;
	std::string name_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEPROPERTYSOFTWAREITEMREQUEST_H_
