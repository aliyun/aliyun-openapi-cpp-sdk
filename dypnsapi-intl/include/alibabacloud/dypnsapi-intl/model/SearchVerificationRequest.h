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

#ifndef ALIBABACLOUD_DYPNSAPI_INTL_MODEL_SEARCHVERIFICATIONREQUEST_H_
#define ALIBABACLOUD_DYPNSAPI_INTL_MODEL_SEARCHVERIFICATIONREQUEST_H_

#include <alibabacloud/dypnsapi-intl/Dypnsapi_intlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dypnsapi_intl {
namespace Model {
class ALIBABACLOUD_DYPNSAPI_INTL_EXPORT SearchVerificationRequest : public RpcServiceRequest {
public:
	SearchVerificationRequest();
	~SearchVerificationRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCode() const;
	void setCode(const std::string &code);
	std::string getServiceSid() const;
	void setServiceSid(const std::string &serviceSid);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	long getSendDate() const;
	void setSendDate(long sendDate);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getRouteName() const;
	void setRouteName(const std::string &routeName);
	std::string getVerificationId() const;
	void setVerificationId(const std::string &verificationId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTo() const;
	void setTo(const std::string &to);

private:
	long resourceOwnerId_;
	std::string code_;
	std::string serviceSid_;
	std::string accessKeyId_;
	long sendDate_;
	long pageSize_;
	std::string routeName_;
	std::string verificationId_;
	std::string resourceOwnerAccount_;
	long currentPage_;
	long ownerId_;
	std::string to_;
};
} // namespace Model
} // namespace Dypnsapi_intl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPNSAPI_INTL_MODEL_SEARCHVERIFICATIONREQUEST_H_
