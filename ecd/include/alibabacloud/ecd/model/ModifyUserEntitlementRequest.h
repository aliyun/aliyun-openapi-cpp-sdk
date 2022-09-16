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

#ifndef ALIBABACLOUD_ECD_MODEL_MODIFYUSERENTITLEMENTREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_MODIFYUSERENTITLEMENTREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ModifyUserEntitlementRequest : public RpcServiceRequest {
public:
	ModifyUserEntitlementRequest();
	~ModifyUserEntitlementRequest();
	std::vector<std::string> getAuthorizeDesktopId() const;
	void setAuthorizeDesktopId(const std::vector<std::string> &authorizeDesktopId);
	std::vector<std::string> getRevokeDesktopId() const;
	void setRevokeDesktopId(const std::vector<std::string> &revokeDesktopId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<std::string> getEndUserId() const;
	void setEndUserId(const std::vector<std::string> &endUserId);

private:
	std::vector<std::string> authorizeDesktopId_;
	std::vector<std::string> revokeDesktopId_;
	std::string regionId_;
	std::vector<std::string> endUserId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_MODIFYUSERENTITLEMENTREQUEST_H_
