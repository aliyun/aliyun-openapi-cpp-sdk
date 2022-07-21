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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_LISTEMAILVERIFICATIONREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_LISTEMAILVERIFICATIONREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT ListEmailVerificationRequest : public RpcServiceRequest {
public:
	ListEmailVerificationRequest();
	~ListEmailVerificationRequest();
	long getEndCreateTime() const;
	void setEndCreateTime(long endCreateTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	int getVerificationStatus() const;
	void setVerificationStatus(int verificationStatus);
	long getBeginCreateTime() const;
	void setBeginCreateTime(long beginCreateTime);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getEmail() const;
	void setEmail(const std::string &email);

private:
	long endCreateTime_;
	int pageNum_;
	int verificationStatus_;
	long beginCreateTime_;
	int pageSize_;
	std::string userClientIp_;
	std::string lang_;
	std::string email_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_LISTEMAILVERIFICATIONREQUEST_H_
