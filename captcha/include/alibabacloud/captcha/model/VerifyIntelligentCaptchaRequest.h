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

#ifndef ALIBABACLOUD_CAPTCHA_MODEL_VERIFYINTELLIGENTCAPTCHAREQUEST_H_
#define ALIBABACLOUD_CAPTCHA_MODEL_VERIFYINTELLIGENTCAPTCHAREQUEST_H_

#include <alibabacloud/captcha/CaptchaExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Captcha {
namespace Model {
class ALIBABACLOUD_CAPTCHA_EXPORT VerifyIntelligentCaptchaRequest : public RpcServiceRequest {
public:
	VerifyIntelligentCaptchaRequest();
	~VerifyIntelligentCaptchaRequest();
	std::string getCaptchaVerifyParam() const;
	void setCaptchaVerifyParam(const std::string &captchaVerifyParam);
	std::string getSceneId() const;
	void setSceneId(const std::string &sceneId);

private:
	std::string captchaVerifyParam_;
	std::string sceneId_;
};
} // namespace Model
} // namespace Captcha
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAPTCHA_MODEL_VERIFYINTELLIGENTCAPTCHAREQUEST_H_
