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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYTOKENREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYTOKENREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeVerifyTokenRequest : public RpcServiceRequest {
public:
	DescribeVerifyTokenRequest();
	~DescribeVerifyTokenRequest();
	std::string getFaceRetainedImageUrl() const;
	void setFaceRetainedImageUrl(const std::string &faceRetainedImageUrl);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getCallbackSeed() const;
	void setCallbackSeed(const std::string &callbackSeed);
	std::string getUserIp() const;
	void setUserIp(const std::string &userIp);
	std::string getIdCardBackImageUrl() const;
	void setIdCardBackImageUrl(const std::string &idCardBackImageUrl);
	std::string getIdCardNumber() const;
	void setIdCardNumber(const std::string &idCardNumber);
	std::string getIdCardFrontImageUrl() const;
	void setIdCardFrontImageUrl(const std::string &idCardFrontImageUrl);
	std::string getBizType() const;
	void setBizType(const std::string &bizType);
	std::string getPassedRedirectUrl() const;
	void setPassedRedirectUrl(const std::string &passedRedirectUrl);
	long getUserRegistTime() const;
	void setUserRegistTime(long userRegistTime);
	std::string getBizId() const;
	void setBizId(const std::string &bizId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getUserPhoneNumber() const;
	void setUserPhoneNumber(const std::string &userPhoneNumber);
	std::string getCallbackUrl() const;
	void setCallbackUrl(const std::string &callbackUrl);
	std::string getFailedRedirectUrl() const;
	void setFailedRedirectUrl(const std::string &failedRedirectUrl);

private:
	std::string faceRetainedImageUrl_;
	std::string userId_;
	std::string callbackSeed_;
	std::string userIp_;
	std::string idCardBackImageUrl_;
	std::string idCardNumber_;
	std::string idCardFrontImageUrl_;
	std::string bizType_;
	std::string passedRedirectUrl_;
	long userRegistTime_;
	std::string bizId_;
	std::string name_;
	std::string userPhoneNumber_;
	std::string callbackUrl_;
	std::string failedRedirectUrl_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYTOKENREQUEST_H_
