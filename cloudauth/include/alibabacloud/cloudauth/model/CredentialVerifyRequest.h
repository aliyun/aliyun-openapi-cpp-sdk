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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_CREDENTIALVERIFYREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_CREDENTIALVERIFYREQUEST_H_

#include <alibabacloud/cloudauth/CloudauthExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cloudauth {
namespace Model {
class ALIBABACLOUD_CLOUDAUTH_EXPORT CredentialVerifyRequest : public RpcServiceRequest {
public:
	struct MerchantDetail {
		std::string value;
		std::string key;
	};
	CredentialVerifyRequest();
	~CredentialVerifyRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getIsOCR() const;
	void setIsOCR(const std::string &isOCR);
	std::string getIsCheck() const;
	void setIsCheck(const std::string &isCheck);
	std::string getImageContext() const;
	void setImageContext(const std::string &imageContext);
	std::string getCredType() const;
	void setCredType(const std::string &credType);
	std::string getPromptModel() const;
	void setPromptModel(const std::string &promptModel);
	std::string getIdentifyNum() const;
	void setIdentifyNum(const std::string &identifyNum);
	std::string getCredName() const;
	void setCredName(const std::string &credName);
	std::string getMerchantId() const;
	void setMerchantId(const std::string &merchantId);
	std::vector<MerchantDetail> getMerchantDetail() const;
	void setMerchantDetail(const std::vector<MerchantDetail> &merchantDetail);
	std::string getImageUrl() const;
	void setImageUrl(const std::string &imageUrl);
	std::string getCertNum() const;
	void setCertNum(const std::string &certNum);
	std::string getPrompt() const;
	void setPrompt(const std::string &prompt);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string productCode_;
	std::string isOCR_;
	std::string isCheck_;
	std::string imageContext_;
	std::string credType_;
	std::string promptModel_;
	std::string identifyNum_;
	std::string credName_;
	std::string merchantId_;
	std::vector<MerchantDetail> merchantDetail_;
	std::string imageUrl_;
	std::string certNum_;
	std::string prompt_;
	std::string userName_;
};
} // namespace Model
} // namespace Cloudauth
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_CREDENTIALVERIFYREQUEST_H_
