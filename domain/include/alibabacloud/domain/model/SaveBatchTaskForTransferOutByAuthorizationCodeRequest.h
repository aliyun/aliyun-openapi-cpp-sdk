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

#ifndef ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_H_
#define ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_H_

#include <alibabacloud/domain/DomainExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Domain {
namespace Model {
class ALIBABACLOUD_DOMAIN_EXPORT SaveBatchTaskForTransferOutByAuthorizationCodeRequest : public RpcServiceRequest {
public:
	struct TransferOutParamList {
		std::string authorizationCode;
		std::string domainName;
	};
	SaveBatchTaskForTransferOutByAuthorizationCodeRequest();
	~SaveBatchTaskForTransferOutByAuthorizationCodeRequest();
	std::string getLong() const;
	void setLong(const std::string &long);
	std::vector<TransferOutParamList> getTransferOutParamList() const;
	void setTransferOutParamList(const std::vector<TransferOutParamList> &transferOutParamList);
	std::string getUserClientIp() const;
	void setUserClientIp(const std::string &userClientIp);

private:
	std::string long_;
	std::vector<TransferOutParamList> transferOutParamList_;
	std::string userClientIp_;
};
} // namespace Model
} // namespace Domain
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DOMAIN_MODEL_SAVEBATCHTASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_H_
