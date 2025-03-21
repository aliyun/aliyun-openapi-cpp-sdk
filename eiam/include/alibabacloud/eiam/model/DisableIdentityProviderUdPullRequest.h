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

#ifndef ALIBABACLOUD_EIAM_MODEL_DISABLEIDENTITYPROVIDERUDPULLREQUEST_H_
#define ALIBABACLOUD_EIAM_MODEL_DISABLEIDENTITYPROVIDERUDPULLREQUEST_H_

#include <alibabacloud/eiam/EiamExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eiam {
namespace Model {
class ALIBABACLOUD_EIAM_EXPORT DisableIdentityProviderUdPullRequest : public RpcServiceRequest {
public:
	DisableIdentityProviderUdPullRequest();
	~DisableIdentityProviderUdPullRequest();
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getIdentityProviderId() const;
	void setIdentityProviderId(const std::string &identityProviderId);

private:
	std::string instanceId_;
	std::string identityProviderId_;
};
} // namespace Model
} // namespace Eiam
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EIAM_MODEL_DISABLEIDENTITYPROVIDERUDPULLREQUEST_H_
