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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBECHARSETREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBECHARSETREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT DescribeCharsetRequest : public RpcServiceRequest {
public:
	DescribeCharsetRequest();
	~DescribeCharsetRequest();
	std::string getTenantMode() const;
	void setTenantMode(const std::string &tenantMode);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSeries() const;
	void setSeries(const std::string &series);

private:
	std::string tenantMode_;
	std::string instanceId_;
	std::string series_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_DESCRIBECHARSETREQUEST_H_
