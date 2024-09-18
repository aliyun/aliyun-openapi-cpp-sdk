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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATETICKET4COPILOTREQUEST_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATETICKET4COPILOTREQUEST_H_

#include <alibabacloud/quickbi-public/Quickbi_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Quickbi_public {
namespace Model {
class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT CreateTicket4CopilotRequest : public RpcServiceRequest {
public:
	CreateTicket4CopilotRequest();
	~CreateTicket4CopilotRequest();
	std::string getCopilotId() const;
	void setCopilotId(const std::string &copilotId);
	std::string getAccessPoint() const;
	void setAccessPoint(const std::string &accessPoint);
	int getAccountType() const;
	void setAccountType(int accountType);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getAccountName() const;
	void setAccountName(const std::string &accountName);
	int getExpireTime() const;
	void setExpireTime(int expireTime);
	std::string getSignType() const;
	void setSignType(const std::string &signType);
	int getTicketNum() const;
	void setTicketNum(int ticketNum);

private:
	std::string copilotId_;
	std::string accessPoint_;
	int accountType_;
	std::string userId_;
	std::string accountName_;
	int expireTime_;
	std::string signType_;
	int ticketNum_;
};
} // namespace Model
} // namespace Quickbi_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_MODEL_CREATETICKET4COPILOTREQUEST_H_
