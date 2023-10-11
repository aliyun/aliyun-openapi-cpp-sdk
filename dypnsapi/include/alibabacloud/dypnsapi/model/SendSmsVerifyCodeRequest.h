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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_SENDSMSVERIFYCODEREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_SENDSMSVERIFYCODEREQUEST_H_

#include <alibabacloud/dypnsapi/DypnsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_EXPORT SendSmsVerifyCodeRequest : public RpcServiceRequest {
public:
	SendSmsVerifyCodeRequest();
	~SendSmsVerifyCodeRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCountryCode() const;
	void setCountryCode(const std::string &countryCode);
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	std::string getExtendFunction() const;
	void setExtendFunction(const std::string &extendFunction);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSmsUpExtendCode() const;
	void setSmsUpExtendCode(const std::string &smsUpExtendCode);
	std::string getSignName() const;
	void setSignName(const std::string &signName);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getValidTime() const;
	void setValidTime(long validTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	bool getReturnVerifyCode() const;
	void setReturnVerifyCode(bool returnVerifyCode);
	long getCodeType() const;
	void setCodeType(long codeType);
	std::string getSchemeName() const;
	void setSchemeName(const std::string &schemeName);
	long getDuplicatePolicy() const;
	void setDuplicatePolicy(long duplicatePolicy);
	std::string getOutId() const;
	void setOutId(const std::string &outId);
	long getInterval() const;
	void setInterval(long interval);
	std::string getTemplateCode() const;
	void setTemplateCode(const std::string &templateCode);
	std::string getTemplateParam() const;
	void setTemplateParam(const std::string &templateParam);
	long getCodeLength() const;
	void setCodeLength(long codeLength);

private:
	long resourceOwnerId_;
	std::string countryCode_;
	std::string phoneNumber_;
	std::string extendFunction_;
	std::string accessKeyId_;
	std::string smsUpExtendCode_;
	std::string signName_;
	std::string routeName_;
	std::string resourceOwnerAccount_;
	long validTime_;
	long ownerId_;
	bool returnVerifyCode_;
	long codeType_;
	std::string schemeName_;
	long duplicatePolicy_;
	std::string outId_;
	long interval_;
	std::string templateCode_;
	std::string templateParam_;
	long codeLength_;
};
} // namespace Model
} // namespace Dypnsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_SENDSMSVERIFYCODEREQUEST_H_
