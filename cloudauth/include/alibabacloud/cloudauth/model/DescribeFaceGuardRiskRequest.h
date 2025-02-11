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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEFACEGUARDRISKREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEFACEGUARDRISKREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeFaceGuardRiskRequest : public RpcServiceRequest {
public:
	DescribeFaceGuardRiskRequest();
	~DescribeFaceGuardRiskRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getDeviceToken() const;
	void setDeviceToken(const std::string &deviceToken);
	std::string getOuterOrderNo() const;
	void setOuterOrderNo(const std::string &outerOrderNo);
	std::string getBizId() const;
	void setBizId(const std::string &bizId);

private:
	std::string productCode_;
	std::string deviceToken_;
	std::string outerOrderNo_;
	std::string bizId_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEFACEGUARDRISKREQUEST_H_
