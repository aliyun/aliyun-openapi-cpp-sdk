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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_CREATEVERIFYSETTINGREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_CREATEVERIFYSETTINGREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT CreateVerifySettingRequest : public RpcServiceRequest {
public:
	CreateVerifySettingRequest();
	~CreateVerifySettingRequest();
	bool getGuideStep() const;
	void setGuideStep(bool guideStep);
	bool getResultStep() const;
	void setResultStep(bool resultStep);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getSolution() const;
	void setSolution(const std::string &solution);
	std::string getBizName() const;
	void setBizName(const std::string &bizName);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);
	bool getPrivacyStep() const;
	void setPrivacyStep(bool privacyStep);

private:
	bool guideStep_;
	bool resultStep_;
	std::string sourceIp_;
	std::string solution_;
	std::string bizName_;
	std::string bizType_;
	bool privacyStep_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_CREATEVERIFYSETTINGREQUEST_H_
