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

#ifndef ALIBABACLOUD_RDS_MODEL_DETACHGADINSTANCEMEMBERREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DETACHGADINSTANCEMEMBERREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT DetachGadInstanceMemberRequest : public RpcServiceRequest {
public:
	DetachGadInstanceMemberRequest();
	~DetachGadInstanceMemberRequest();
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getMemberInstanceName() const;
	void setMemberInstanceName(const std::string &memberInstanceName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGadInstanceName() const;
	void setGadInstanceName(const std::string &gadInstanceName);

private:
	std::string resourceGroupId_;
	std::string memberInstanceName_;
	std::string regionId_;
	std::string gadInstanceName_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_DETACHGADINSTANCEMEMBERREQUEST_H_
