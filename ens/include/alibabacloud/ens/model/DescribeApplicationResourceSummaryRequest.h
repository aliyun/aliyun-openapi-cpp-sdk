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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEAPPLICATIONRESOURCESUMMARYREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEAPPLICATIONRESOURCESUMMARYREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeApplicationResourceSummaryRequest : public RpcServiceRequest {
public:
	DescribeApplicationResourceSummaryRequest();
	~DescribeApplicationResourceSummaryRequest();
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);

private:
	std::string level_;
	std::string resourceType_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEAPPLICATIONRESOURCESUMMARYREQUEST_H_
