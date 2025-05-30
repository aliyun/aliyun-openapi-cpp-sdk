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

#ifndef ALIBABACLOUD_MSEAP_MODEL_GETPLATFORMUSERINFOFORPARTNERREQUEST_H_
#define ALIBABACLOUD_MSEAP_MODEL_GETPLATFORMUSERINFOFORPARTNERREQUEST_H_

#include <alibabacloud/mseap/MseapExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mseap {
namespace Model {
class ALIBABACLOUD_MSEAP_EXPORT GetPlatformUserInfoForPartnerRequest : public RpcServiceRequest {
public:
	GetPlatformUserInfoForPartnerRequest();
	~GetPlatformUserInfoForPartnerRequest();
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getPlatformType() const;
	void setPlatformType(const std::string &platformType);

private:
	std::string userId_;
	std::string appId_;
	std::string platformType_;
};
} // namespace Model
} // namespace Mseap
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSEAP_MODEL_GETPLATFORMUSERINFOFORPARTNERREQUEST_H_
