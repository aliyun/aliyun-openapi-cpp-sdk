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

#ifndef ALIBABACLOUD_MSEAP_MODEL_ACTIVATELICENSEREQUEST_H_
#define ALIBABACLOUD_MSEAP_MODEL_ACTIVATELICENSEREQUEST_H_

#include <alibabacloud/mseap/MseapExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mseap {
namespace Model {
class ALIBABACLOUD_MSEAP_EXPORT ActivateLicenseRequest : public RpcServiceRequest {
public:
	ActivateLicenseRequest();
	~ActivateLicenseRequest();
	std::string getLicenseNo() const;
	void setLicenseNo(const std::string &licenseNo);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);
	std::string getLicensePublisher() const;
	void setLicensePublisher(const std::string &licensePublisher);
	std::string getBizId() const;
	void setBizId(const std::string &bizId);
	std::string getLicenseCode() const;
	void setLicenseCode(const std::string &licenseCode);

private:
	std::string licenseNo_;
	std::string bizType_;
	std::string licensePublisher_;
	std::string bizId_;
	std::string licenseCode_;
};
} // namespace Model
} // namespace Mseap
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSEAP_MODEL_ACTIVATELICENSEREQUEST_H_
