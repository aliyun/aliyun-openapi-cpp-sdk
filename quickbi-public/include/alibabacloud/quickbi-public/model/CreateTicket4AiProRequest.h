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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATETICKET4AIPROREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATETICKET4AIPROREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT CreateTicket4AiProRequest : public RpcServiceRequest {
public:
	CreateTicket4AiProRequest();
	~CreateTicket4AiProRequest();
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	int getAccountType() const;
	void setAccountType(int accountType);
	std::string getCustomParam() const;
	void setCustomParam(const std::string &customParam);
	std::string getSystemUid() const;
	void setSystemUid(const std::string &systemUid);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	int getExpireTime() const;
	void setExpireTime(int expireTime);
	std::string getAiProId() const;
	void setAiProId(const std::string &aiProId);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	int getTicketNum() const;
	void setTicketNum(int ticketNum);
	std::string getQuickBIUserId() const;
	void setQuickBIUserId(const std::string &quickBIUserId);

private:
	std::string accessPoint_;
	int accountType_;
	std::string customParam_;
	std::string systemUid_;
	std::string accountName_;
	int expireTime_;
	std::string aiProId_;
	std::string signType_;
	int ticketNum_;
	std::string quickBIUserId_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATETICKET4AIPROREQUEST_H_
