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

#ifndef ALIBABACLOUD_EFLO_MODEL_DELETEVPDGRANTRULEREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_DELETEVPDGRANTRULEREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT DeleteVpdGrantRuleRequest : public RpcServiceRequest {
public:
	DeleteVpdGrantRuleRequest();
	~DeleteVpdGrantRuleRequest();
	std::string getErId() const;
	void setErId(const std::string &erId);
	std::string getGrantTenantId() const;
	void setGrantTenantId(const std::string &grantTenantId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGrantRuleId() const;
	void setGrantRuleId(const std::string &grantRuleId);

private:
	std::string erId_;
	std::string grantTenantId_;
	std::string instanceId_;
	std::string regionId_;
	std::string grantRuleId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_DELETEVPDGRANTRULEREQUEST_H_
